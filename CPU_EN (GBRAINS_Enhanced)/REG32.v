`timescale 1ns / 1ps
/****************************************************************
* Author:   Bryan Linares
*           Brian Ortiz
*           Grace Daliwan
* Filename: REG32.v
* Date:     Nov. 27, 2018
* Project:  CECS 440 Senior Project
* Version:  1.0
*
* Notes:    32 bit load Register to support the mips processor
*           
****************************************************************/
module REG32( CLK, RESET, ld, D, Q );
 
   input       CLK, RESET;
   input       ld;
   input [31:0] D;
  
  output reg [31:0] Q;

   always@(posedge CLK, posedge RESET)
      if(RESET) Q <= 32'b0;
      else      Q <= ld? D : Q;
      
endmodule
