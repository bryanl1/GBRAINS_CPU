`timescale 1ns / 1ps
/**********************************************************
*
* Author:   Bryan Linares
* Filename: REG32.v
* Date:     Oct. 2, 2018
* Project:  CECS 440 Lab 3
* Version:  1.0
*
* Notes:    32 bit load Register to support the mips processor
*           
***********************************************************/
module REG32( CLK, RESET, ld, D, Q );
   input CLK;
   input RESET;
   input ld;
   input [31:0] D;
   output reg [31:0]Q;

   always@(posedge CLK, posedge RESET)
      if(RESET) Q <= 32'b0;
      else      Q <= ld? D : Q;
      
endmodule
