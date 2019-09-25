`timescale 1ns / 1ps
/************************************************************************
* Author:   Bryan Linares
*           Brian Ortiz
*           Grace Daliwan
* Filename: MPY_32.v
* Date:     Sep. 11, 2018
* Project:  CECS 440 Lab 1
* Version:  1.0
*
* Notes:    32 bit Multiplication module for MIPS ISA.
*           Casts raw input to Integer type for built-in calculation.
*
************************************************************************/
module MPY_32( s, t, product );

   input [31:0] s;
   input [31:0] t;
   
   output reg [63:0] product;

   integer int_s, int_t;
   
   always@(*) begin
      int_s = s;
      int_t = t;
      product  = int_s * int_t;
   end
endmodule
