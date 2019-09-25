`timescale 1ns / 1ps
/***************************************************************************************
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
*
* Filename: VALU_64.v
* Project:  CECS 440 Senior Project GBRAINS
*  
* Credit: Based on functions found in the AltiVec Technology Programming 
*         Interface Manual
* Notes:  Performs vectored integer operations on combined 32-bit values passed in on 
*         three 64bit inputs, outputting to one 64-bit output.
*
***************************************************************************************/
module VALU_64(S, T, D, FS, FMT, Y);
   
   input  [63:0] S, T, D;
   input  [ 4:0] FS, FMT; 
   
   output reg [63:0] Y;
   
   reg    [ 7:0] carry;
   
   parameter 
   ADDS  = 5'h08,    MULADD  = 5'h09,   ANDEI  = 5'h02,
   VCMPE  = 5'h06,   VCLT   = 5'h07,   PASS_S = 5'h00,
   PASS_T = 5'h01;
   
   //bits to integer, so verilog math operators work
    integer S_hi, S_lo,D_hi; 
    integer T_hi, T_lo,D_lo; 
    integer int_d;
   
   always @ (*) begin
   
      //Split inputs for easier indexing
      S_hi = S[63:32]; S_lo = S[31: 0];
      T_hi = T[63:32]; T_lo = T[31: 0];
      D_hi = D[63:32]; D_lo = D[31: 0];
      int_d = D;
      carry = 8'b0;
      
      case(FS)
         ADDS: //ADD SATURATED 8 Bit Signed
         begin
            {carry[0], Y[ 7: 0]} = S[ 7: 0] + T[ 7: 0];
            {carry[1], Y[15: 8]} = S[15: 8] + T[15: 8];
            {carry[2], Y[23:16]} = S[23:16] + T[23:16];
            {carry[3], Y[31:24]} = S[31:24] + T[31:24];
            {carry[4], Y[39:32]} = S[39:32] + T[39:32];
            {carry[5], Y[47:40]} = S[47:40] + T[47:40];
            {carry[6], Y[55:48]} = S[55:48] + T[55:48];
            {carry[7], Y[63:56]} = S[63:56] + T[63:56];

            Y[ 7: 0] = (carry[0]) ? 8'hFF: Y[ 7: 0]; //if the sum had a carry, 
            Y[15: 8] = (carry[1]) ? 8'hFF: Y[15: 8]; //this clamps the value to 
            Y[23:16] = (carry[2]) ? 8'hFF: Y[23:16]; //the max within the 8 bits: 8'FF
            Y[31:24] = (carry[3]) ? 8'hFF: Y[31:24];
            Y[39:32] = (carry[4]) ? 8'hFF: Y[39:32];
            Y[47:40] = (carry[5]) ? 8'hFF: Y[47:40];
            Y[55:48] = (carry[6]) ? 8'hFF: Y[55:48];
            Y[63:56] = (carry[7]) ? 8'hFF: Y[63:56]; //over carry drops off
            
         end
         
         MULADD: //Multiply and Add 32 BIT Signed, Multiplies the 32 bit
                 //integers in S and T, then adds 64 bit D
         begin
            Y[ 31: 0] = (S_lo * T_lo ) + int_d;
            Y[ 63:32] = (S_hi * T_hi ) + int_d; 
         end
         
         ANDEI:   //AND Unsigned 8 bit Integers, ands every 8 bit in the operands
         begin
            Y[ 7: 0] = S[ 7: 0] & T[ 7: 0];
            Y[15: 8] = S[15: 8] & T[15: 8];
            Y[23:16] = S[23:16] & T[23:16];
            Y[31:24] = S[31:24] & T[31:24];
            Y[39:32] = S[39:32] & T[39:32];
            Y[47:40] = S[47:40] & T[47:40];
            Y[55:48] = S[55:48] & T[55:48];
            Y[63:56] = S[63:56] & T[63:56];
         end
         
         VCMPE:   //Vectored 8 BIT Compare if Equal,8 bit element 
                  //in S is equal to  parallel element in T
         begin    
            Y[ 7: 0] = (S[ 7: 0]==T[ 7: 0]) ? 8'hFF: 8'b0;
            Y[15: 8] = (S[15: 8]==T[15: 8]) ? 8'hFF: 8'b0;
            Y[23:16] = (S[23:16]==T[23:16]) ? 8'hFF: 8'b0;
            Y[31:24] = (S[31:24]==T[31:24]) ? 8'hFF: 8'b0;
            Y[39:32] = (S[39:32]==T[39:32]) ? 8'hFF: 8'b0;
            Y[47:40] = (S[47:40]==T[47:40]) ? 8'hFF: 8'b0;
            Y[55:48] = (S[55:48]==T[55:48]) ? 8'hFF: 8'b0;
            Y[63:56] = (S[63:56]==T[63:56]) ? 8'hFF: 8'b0;
         end
         
         VCLT:   //compare if less than, Compares if 8 bit element in S is 
                 //less than parallel element in T
         begin
            Y[ 7: 0] = (S[ 7: 0]<T[ 7: 0]) ? 8'hFF: 8'b0;
            Y[15: 8] = (S[15: 8]<T[15: 8]) ? 8'hFF: 8'b0;
            Y[23:16] = (S[23:16]<T[23:16]) ? 8'hFF: 8'b0;
            Y[31:24] = (S[31:24]<T[31:24]) ? 8'hFF: 8'b0;
            Y[39:32] = (S[39:32]<T[39:32]) ? 8'hFF: 8'b0;
            Y[47:40] = (S[47:40]<T[47:40]) ? 8'hFF: 8'b0;
            Y[55:48] = (S[55:48]<T[55:48]) ? 8'hFF: 8'b0;
            Y[63:56] = (S[63:56]<T[63:56]) ? 8'hFF: 8'b0;
         end
         
         PASS_S:  Y = S;   //PASS S 
         PASS_T:  Y = T;   //PASS T used when receiving val from IDP,
                           //to direct into Regfile
         default: Y = T;
         
     endcase
   end
   
endmodule
