`timescale 1ns / 1ps
/**************************************************************
* Author:   Bryan Linares
* Filename: MPY_32.v
* Date:     Sep. 11, 2018
* Project:  CECS 440 Lab 1
* Version:  1.0
*
* Notes:    32 bit Division module for MIPS ISA
*           Casts raw input to Integer type for calculation.
***************************************************************/
module DIV_32( s, t, remainder, quotient );

   input [31:0] s;
   input [31:0] t;
   
   output reg [31:0] remainder;
   output reg [31:0] quotient;

   integer int_s, int_t;
   
   always@(*) begin
      int_s = s;
      int_t = t;
      quotient  = int_s / int_t;
      remainder = int_s % int_t;
   end
endmodule
