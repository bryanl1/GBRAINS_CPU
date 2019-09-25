`timescale 1ns / 1ps
/***************************************************************************
*Author(s): Brian Ortiz
*           Bryan Linares
*           Grace Daliwan
* Filename: FPALU.v
* Project:  CECS 440 Senior Project GBRAINS
*
***************************************************************************/
module FPALU_64( S, T, FS, Y);

input [63:0] S, T;
input [4:0] FS;

output reg [63:0] Y; 

parameter PASS_S = 5'h00, PASS_T = 5'h01, ADD   = 5'h02,  SUB = 5'h03,  
          MULT   = 5'h1E, DIV  = 5'h1F,   ZERO  = 5'h13;  
             
real fpY, fpS, fpT;

   always @(*) begin 
   fpS = $bitstoreal(S); 
   fpT = $bitstoreal(T);
    
   case (FS)
   PASS_S: fpY = fpS;       // pass S 
   PASS_T: fpY = fpT;       // pass T 
   ADD:    fpY = fpS + fpT; // Addition 
   SUB:    fpY = fpS - fpT; // Subtraction R-S 
   MULT:   fpY = fpS * fpT; // Multiply
   DIV:    fpY = fpS / fpT; // Division S/T 
   ZERO:   fpY = 0.0;       // zero    
   default: fpY = 64'hx; 
   endcase 

  Y = $realtobits(fpY);
   end
endmodule
