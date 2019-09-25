`timescale 1ns / 1ps
/**********************************************************
*
* Author:   Bryan Linares
* Filename: ALU_32.v
* Date:     Sep. 11, 2018
* Project:  CECS 440 Lab 1
* Version:  1.0
*
* Notes:    32 bit ALU wrapper module for MIPS ISA. 
*           FS is 5 bit function select input. Input 
*           operands S and T . C,V,N,Z, Y_hi,Y_lo outputs 
***********************************************************/
module ALU_32( S, T, FS, Y_hi, Y_lo, C, V, N, Z);

   input [31:0] S;
   input [31:0] T;
   input [4:0]  FS;
   
   output C;
   output V;
   output N;
   output Z;
   output [31:0] Y_hi;
   output [31:0] Y_lo;

   wire [31:0] Y, mpy_hi, mpy_lo, div_rem, div_quot;
   wire [63:0] mpy_product;
   
   MIPS_32 mips ( S, T, FS, V, C, Y);
   
   MPY_32 mul   ( S, T, mpy_product);
   
   DIV_32  div  ( S, T, div_rem, div_quot);
   
   assign mpy_hi = mpy_product[63:32];
   assign mpy_lo = mpy_product[31:0];
   
   assign {Y_hi, Y_lo, N} = (FS == 5'h1E) ? {mpy_hi, mpy_lo, mpy_hi[31]}:
                            (FS == 5'h1F) ? {div_rem, div_quot, div_quot[31]}:
                                            { 32'b0, Y, Y[31]};
                                            
   assign Z = ((Y_hi == 16'h0) && (Y_lo == 16'h0)) ? 1'b1 : 1'b0;
   

endmodule
