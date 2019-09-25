`timescale 1ns / 1ps
/*********************************************************************************
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: VREGFILE64.v
* Project:  CECS 440 Senior Project GBRAINS
*  
*********************************************************************************/
module VREGFILE64(CLK, RESET, D_Addr, S_Addr, T_Addr, D_EN, D, S, T, DOUT);

   input CLK;
   input RESET;

   input       D_EN;   
   input [4:0] D_Addr;
   input [4:0] S_Addr;
   input [4:0] T_Addr;
   input [63:0] D;
   
   output [63:0] S;
   output [63:0] T;
   output [63:0] DOUT;   
   
   reg [63:0] registers [31:0];

//Write Section - synchronous on posedge clock and reset signals 
   always@(posedge CLK, posedge RESET) //can write to any register
         if(D_EN)
            registers[D_Addr] <= D;
         //otherwise, registers don't change
         
//Read Section  - asynchronous, continuous assign statements
   assign S    = registers[S_Addr];
   assign T    = registers[T_Addr];
   assign DOUT = registers[D_Addr];
endmodule
