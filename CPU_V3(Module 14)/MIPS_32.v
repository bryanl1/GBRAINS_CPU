`timescale 1ns / 1ps
/**********************************************************
*
* Author:   Bryan Linares
* Filename: MIPS_32.v
* Date:     Sep. 11, 2018
* Project:  CECS 440 Lab 1
* Version:  1.0
*
* Notes:    32 bit ALU operations module for MIPS ISA
*
***********************************************************/
module MIPS_32( S, T, FS, V, C, Y );

   input [31:0] S;
   input [31:0] T;
   input [4:0] FS;

   output reg V;
   output reg C;
   output reg [31:0] Y;

   //Symbolic Constants for Operations, 
   parameter PASS_S = 5'h00, PASS_T = 5'h01,  ADD     = 5'h02,  SUB = 5'h03, ADDU = 5'h04, 
             SUBU   = 5'h05, SLT    = 5'h06,  SLTU    = 5'h07,  AND = 5'h08, OR   = 5'h09, XOR  = 5'h0A, 
             NOR    = 5'h0B, SLL    = 5'h0C,  SRL     = 5'h0D,  SRA = 5'h0E, ANDI = 5'h16, ORI  = 5'h17, 
             LUI    = 5'h18, XORI   = 5'h19,  INC     = 5'h0F,  DEC = 5'h10, INC4 = 5'h11, DEC4 = 5'h12, 
             ZEROS  = 5'h13, ONES   = 5'h14,  SP_INIT = 5'h15 ; 

   always @ (*) begin
   {C, V} = {1'bX, 1'bX}; //If flag unaffected set to X
   case(FS)
   
   PASS_S: begin
      Y = S;
      {C, V} = {1'bX, 1'bX};
      end
   PASS_T: begin 
      Y = T;
      {C, V} = {1'bX, 1'bX};
      end
   ADD: begin
      {C, Y} = S + T;
      if((S[31] == 1'b1) && (T[31] == 1'b1))
         V = (Y[31]) ? 1'b0 : 1'b1;
      if((S[31] == 1'b0) && (T[31] == 1'b0))
         V = (Y[31]) ? 1'b1 : 1'b0;
      else
      V = 1'b0;
      end
   SUB: begin
      {C, Y} = S - T;
      if((S[31] == 1'b0) && (T[31] == 1'b1))
         V = (Y[31]) ? 1'b1 : 1'b0;
      if((S[31] == 1'b1) && (T[31] == 1'b0))
         V = (Y[31]) ? 1'b0 : 1'b1;
      else
         V = 1'b0;
      end
   ADDU: begin
      {C, Y} = S + T;
      if((Y < S) && (Y < T)) //if Carry 1, Overflowed
         V = 1'b1;
      else
         V = 1'b0;
      end
   SUBU: begin
      {C, Y} = S - T;
      if(S < T)
         V = 1'b1;
      else
         V = 1'b0;
      end
   SLT: begin
        Y = S - T;
        Y = (Y[31] == 1'b1) ? 1'b1 : 1'b0;
        {C, V} = {2'bXX};
        end
   SLTU: begin
         Y = (S < T) ? 1'b1 : 1'b0;
         {C, V} = {2'bXX};
         end
   AND: begin
         Y = S & T;
         {C, V} = {2'bXX};
         end
   OR: begin
         Y = S | T;
         {C, V} = {2'bXX};
         end
   XOR: begin
         Y = S ^ T;
         {C, V} = {2'bXX};
         end
   NOR: begin
         Y = ~(S | T);
         {C, V} = {2'bXX};
         end
   SLL: begin
         {C, Y} = T << 1;
         V = 1'bx;
         end
   SRL: begin
         {C, Y} = {T[0], T >> 1};
         V = 1'bx;
         end
   SRA: begin
         {C, Y} = {T[0], T[31], T[31:1]};
         V = Y[31] ^ T[31];
         end
   ANDI: begin 
         Y = S & {16'h0, T[15:0]};
         end
   ORI: begin
         Y = S | {16'h0, T[15:0]};
         end
   LUI: begin 
         Y = {T[15:0], 16'h0};
         end
   XORI: begin
         Y = S ^ {16'h0, T[15:0]};
         end
   INC: begin
         {C, Y} = S + 1;
         if(S[31] == 1'b0)
         V = (Y[31]) ? 1'b1 : 1'b0;
         else
         V = 1'b0;
         end
   DEC: begin
         {C, Y} = S - 1;
         if(S[31] == 1'b0)
         V = (Y[31]) ? 1'b1 : 1'b0;
         else
         V = 1'b0;
         end
   INC4: begin
         {C, Y} = S + 4;
         if(S[31] == 1'b0)
         V = (Y[31]) ? 1'b1 : 1'b0;
         else
         V = 1'b0;
         end
   DEC4: begin
         {C, Y} = S - 4;
         if(S[31] == 1'b0)
         V = (Y[31]) ? 1'b1 : 1'b0;
         else
         V = 1'b0;
         end
   ZEROS: begin 
          Y = 32'h0;
          end
   ONES: begin
         Y = 32'hFFFFFFFF;
         end
   SP_INIT: begin
         Y = 32'h3FC;
         end
   default: begin //pass Source operand on default
         Y = S;
         {C, V} = {2'bXX};
         end
   endcase
   end // end of always
endmodule
