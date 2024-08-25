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
module ALU_32( S, T, SHAMT, FS, Y_hi, Y_lo, C, V, N, Z);

   input  [ 4:0] FS, SHAMT;
   input  [31:0] S, T;
   
   output        C, V, N, Z;
   output [31:0] Y_hi, Y_lo;


   wire        mips_c, bs_c;
   wire [31:0] Y, mpy_hi, mpy_lo, div_rem, div_quot, mips_y, bs_y;
   wire [63:0] mpy_product;
   
   MIPS_32 mips (S, T, FS, V, mips_c, mips_y);
   
   MPY_32  mul  (S, T, mpy_product);
   
   DIV_32  div  (S, T, div_rem, div_quot);
   
   Barrel_Shifter bs (.FS(FS), .SHAMT(SHAMT), .T(T), .SHFT_OUT(bs_y), .C(bs_c));
   
   assign mpy_hi = mpy_product[63:32];
   assign mpy_lo = mpy_product[31:0];
   
   assign {Y_hi, Y_lo, N} = (FS == 5'h1E) ? {mpy_hi, mpy_lo, mpy_hi[31]}:
                            (FS == 5'h1F) ? {div_rem, div_quot, div_quot[31]}:
                            (FS == 5'h0C || 
                             FS == 5'h0D || 
                             FS == 5'h0E) ? {32'b0, bs_y, bs_y[31]}:              
                                            {32'b0, mips_y, mips_y[31]};
                          
   assign C = (FS == 5'h1e) ? 1'bx:
              (FS == 5'h1f) ? 1'bx:
              (FS == 5'h0C || 
               FS == 5'h0D || 
               FS == 5'h0E) ? bs_c:              
                            mips_c;
                                            
   assign Z = ((Y_hi == 16'h0) && (Y_lo == 16'h0)) ? 1'b1 : 1'b0;
   

endmodule
