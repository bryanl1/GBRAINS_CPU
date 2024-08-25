`timescale 1ns / 1ps
/**********************************************************
*
* Author:   Bryan Linares
* Filename: REGFILE32.v
* Date:     Sep. 20, 2018
* Project:  CECS 440 Lab 2
* Version:  1.0
*
* Notes:    32 bit wide, 32 bits deep register file module for MIPS ISA. 
*           Contains the user registers for a given processor.
*           Contains 32 general registers, each 32 bits wide. 
*           registers[0] (mips $r0) is read only. Always has value 0 (Zero)
*           
***********************************************************/
module REGFILE32(CLK, RESET, D_Addr, S_Addr, T_Addr, D_EN, D, S, T);

   input CLK;
   input RESET;

   input       D_EN;   
   input [4:0] D_Addr;
   input [4:0] S_Addr;
   input [4:0] T_Addr;
   input [31:0] D;
   
   output [31:0] S;
   output [31:0] T;
   
   reg [31:0] registers [31:0];

//Write Section - synchronous on posedge clock and reset signals 
   always@(posedge CLK, posedge RESET)
      if(RESET)
         registers[0] <= 32'b0;
      else
         if(D_EN)
            registers[D_Addr] <= (D_Addr == 5'b0) ? registers[D_Addr] : D;
         //otherwise, registers doesn't change
         
//Read Section  - asynchronous, continuous assign statements
   assign S = registers[S_Addr];
   assign T = registers[T_Addr];
   
endmodule
