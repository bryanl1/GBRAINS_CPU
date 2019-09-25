`timescale 1ns / 1ps
/********************************************************************
* Author(s):Bryan Linares
*           Grace Daliwan
*           Brian Ortiz
* Filename: PROGRAM_COUNTER.v
* Date:     Oct. 16, 2018
* Project:  CECS 440 Lab 5
* Version:  1.0
*
* Notes:    Program Counter module, register that holds the PC
*           Can be loaded and incremented by value of 4.
*           pc_ld active-hi loads the Reg and pc_inc counts up.
*           PC reg is 32 bits wide.
*
********************************************************************/
module PROGRAM_COUNTER( CLK, RESET, pc_ld, pc_inc, PC_in, PC_out );

   input CLK, RESET;
   input pc_ld, pc_inc;
   input [31:0] PC_in;
   output reg [31:0] PC_out;
   
   always@(posedge CLK, posedge RESET)
   if(RESET)
      PC_out <= 32'h0;
   else
      begin
         case({pc_inc,pc_ld})
            2'b01: PC_out <= PC_in;
            2'b10: PC_out <= PC_out + 4;
         default: PC_out <= PC_out;
         endcase
      end
endmodule
