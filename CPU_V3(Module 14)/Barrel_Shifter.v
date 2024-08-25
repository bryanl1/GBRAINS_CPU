`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// CompanSHFT_OUT: 
// Engineer: 
// 
// Create Date:    08:55:09 11/19/2018 
// Design Name: 
// Module Name:    Barrel_Shifter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Barrel_Shifter(FS, SHAMT, T, SHFT_OUT, C);
   input [4:0] FS, SHAMT;   // Function type and amount to be shifted
   input [31:0] T;  //data input
   output reg C;           // Carry flag
   output reg [31:0] SHFT_OUT;    // data output
   
   always@(*)
      case(FS)
         5'h0C: // SLL
            case(SHAMT)
               5'd 0: {C,SHFT_OUT} = {1'b0, T};
               5'd 1: {C,SHFT_OUT} = {T[31], T[30:0],  1'b0};
               5'd 2: {C,SHFT_OUT} = {T[30], T[29:0],  2'b0};
               5'd 3: {C,SHFT_OUT} = {T[29], T[28:0],  3'b0};
               5'd 4: {C,SHFT_OUT} = {T[28], T[27:0],  4'b0};
               5'd 5: {C,SHFT_OUT} = {T[27], T[26:0],  5'b0};
               5'd 6: {C,SHFT_OUT} = {T[26], T[25:0],  6'b0};
               5'd 7: {C,SHFT_OUT} = {T[25], T[24:0],  7'b0};
               5'd 8: {C,SHFT_OUT} = {T[24], T[23:0],  8'b0};
               5'd 9: {C,SHFT_OUT} = {T[23], T[22:0],  9'b0};
               5'd10: {C,SHFT_OUT} = {T[22], T[21:0], 10'b0};
               5'd11: {C,SHFT_OUT} = {T[21], T[20:0], 11'b0};
               5'd12: {C,SHFT_OUT} = {T[20], T[19:0], 12'b0};
               5'd13: {C,SHFT_OUT} = {T[19], T[18:0], 13'b0};
               5'd14: {C,SHFT_OUT} = {T[18], T[17:0], 14'b0};
               5'd15: {C,SHFT_OUT} = {T[17], T[16:0], 15'b0};
               5'd16: {C,SHFT_OUT} = {T[16], T[15:0], 16'b0};                  
               5'd17: {C,SHFT_OUT} = {T[15], T[14:0], 17'b0};
               5'd18: {C,SHFT_OUT} = {T[14], T[13:0], 18'b0};
               5'd19: {C,SHFT_OUT} = {T[13], T[12:0], 19'b0};
               5'd20: {C,SHFT_OUT} = {T[12], T[11:0], 20'b0};
               5'd21: {C,SHFT_OUT} = {T[11], T[10:0], 21'b0};
               5'd22: {C,SHFT_OUT} = {T[10], T[ 9:0], 22'b0};
               5'd23: {C,SHFT_OUT} = {T[ 9], T[ 8:0], 23'b0};
               5'd24: {C,SHFT_OUT} = {T[ 8], T[ 7:0], 24'b0};
               5'd25: {C,SHFT_OUT} = {T[ 7], T[ 6:0], 25'b0}; 
               5'd26: {C,SHFT_OUT} = {T[ 6], T[ 5:0], 26'b0};
               5'd27: {C,SHFT_OUT} = {T[ 5], T[ 4:0], 27'b0};
               5'd28: {C,SHFT_OUT} = {T[ 4], T[ 3:0], 28'b0};
               5'd29: {C,SHFT_OUT} = {T[ 3], T[ 2:0], 29'b0};
               5'd30: {C,SHFT_OUT} = {T[ 2], T[ 1:0], 30'b0};
               5'd31: {C,SHFT_OUT} = {T[ 1], T[0],    31'b0};
            endcase
         5'h0D: // SRL
            case(SHAMT)
               5'd 0: {C,SHFT_OUT} = {1'b0, T};
               5'd 1: {C,SHFT_OUT} = {T[ 0],  1'b0, T[31: 1]};
               5'd 2: {C,SHFT_OUT} = {T[ 1],  2'b0, T[31: 2]};
               5'd 3: {C,SHFT_OUT} = {T[ 2],  3'b0, T[31: 3]};
               5'd 4: {C,SHFT_OUT} = {T[ 3],  4'b0, T[31: 4]};
               5'd 5: {C,SHFT_OUT} = {T[ 4],  5'b0, T[31: 5]};
               5'd 6: {C,SHFT_OUT} = {T[ 5],  6'b0, T[31: 6]};
               5'd 7: {C,SHFT_OUT} = {T[ 6],  7'b0, T[31: 7]};
               5'd 8: {C,SHFT_OUT} = {T[ 7],  8'b0, T[31: 8]};
               5'd 9: {C,SHFT_OUT} = {T[ 8],  9'b0, T[31: 9]};
               5'd10: {C,SHFT_OUT} = {T[ 9], 10'b0, T[31: 10]};
               5'd11: {C,SHFT_OUT} = {T[10], 11'b0, T[31: 11]};
               5'd12: {C,SHFT_OUT} = {T[11], 12'b0, T[31: 12]};
               5'd13: {C,SHFT_OUT} = {T[12], 13'b0, T[31: 13]};
               5'd14: {C,SHFT_OUT} = {T[13], 14'b0, T[31: 14]};
               5'd15: {C,SHFT_OUT} = {T[14], 15'b0, T[31: 15]};
               5'd16: {C,SHFT_OUT} = {T[15], 16'b0, T[31: 16]};                  
               5'd17: {C,SHFT_OUT} = {T[16], 17'b0, T[31: 17]};
               5'd18: {C,SHFT_OUT} = {T[17], 18'b0, T[31: 18]};
               5'd19: {C,SHFT_OUT} = {T[18], 19'b0, T[31: 19]};
               5'd20: {C,SHFT_OUT} = {T[19], 20'b0, T[31: 20]};
               5'd21: {C,SHFT_OUT} = {T[20], 21'b0, T[31: 21]};
               5'd22: {C,SHFT_OUT} = {T[21], 22'b0, T[31: 22]};
               5'd23: {C,SHFT_OUT} = {T[22], 23'b0, T[31: 23]};
               5'd24: {C,SHFT_OUT} = {T[23], 24'b0, T[31: 24]};
               5'd25: {C,SHFT_OUT} = {T[24], 25'b0, T[31: 25]}; 
               5'd26: {C,SHFT_OUT} = {T[25], 26'b0, T[31: 26]};
               5'd27: {C,SHFT_OUT} = {T[26], 27'b0, T[31: 27]};
               5'd28: {C,SHFT_OUT} = {T[27], 28'b0, T[31: 28]};
               5'd29: {C,SHFT_OUT} = {T[28], 29'b0, T[31: 29]};
               5'd30: {C,SHFT_OUT} = {T[29], 30'b0, T[31: 30]};
               5'd31: {C,SHFT_OUT} = {T[30], 31'b0, T[31]}; 
            endcase
          5'h0E: // SRA
            case(SHAMT)
               5'd 0: {SHFT_OUT} = T;
               5'd 1: {SHFT_OUT} = {T[31],   T[31: 1]};
               5'd 2: {SHFT_OUT} = {{2{T[31]}}, T[31:2]};
               5'd 3: {SHFT_OUT} = {{3{T[31]}}, T[31:3]};
               5'd 4: {SHFT_OUT} = {{4{T[31]}}, T[31:4]};
               5'd 5: {SHFT_OUT} = {{5{T[31]}}, T[31:5]};
               5'd 6: {SHFT_OUT} = {{6{T[31]}}, T[31:6]};
               5'd 7: {SHFT_OUT} = {{7{T[31]}}, T[31:7]};
               5'd 8: {SHFT_OUT} = {{8{T[31]}}, T[31:8]};
               5'd 9: {SHFT_OUT} = {{9{T[31]}}, T[31:9]};
               5'd10: {SHFT_OUT} = {{10{T[31]}}, T[31:10]};
               5'd11: {SHFT_OUT} = {{11{T[31]}}, T[31:11]};
               5'd12: {SHFT_OUT} = {{12{T[31]}}, T[31:12]};
               5'd13: {SHFT_OUT} = {{13{T[31]}}, T[31:13]};
               5'd14: {SHFT_OUT} = {{14{T[31]}}, T[31:14]};
               5'd15: {SHFT_OUT} = {{15{T[31]}}, T[31:15]};
               5'd16: {SHFT_OUT} = {{16{T[31]}}, T[31:16]};                
               5'd17: {SHFT_OUT} = {{17{T[31]}}, T[31:17]};
               5'd18: {SHFT_OUT} = {{18{T[31]}}, T[31:18]};
               5'd19: {SHFT_OUT} = {{19{T[31]}}, T[31:19]};
               5'd20: {SHFT_OUT} = {{20{T[31]}}, T[31:20]};
               5'd21: {SHFT_OUT} = {{21{T[31]}}, T[31:21]};
               5'd22: {SHFT_OUT} = {{22{T[31]}}, T[31:22]};
               5'd23: {SHFT_OUT} = {{23{T[31]}}, T[31:23]};
               5'd24: {SHFT_OUT} = {{24{T[31]}}, T[31:24]};
               5'd25: {SHFT_OUT} = {{25{T[31]}}, T[31:25]};
               5'd26: {SHFT_OUT} = {{26{T[31]}}, T[31:26]};
               5'd27: {SHFT_OUT} = {{27{T[31]}}, T[31:27]};
               5'd28: {SHFT_OUT} = {{28{T[31]}}, T[31:28]};
               5'd29: {SHFT_OUT} = {{29{T[31]}}, T[31:29]};
               5'd30: {SHFT_OUT} = {{30{T[31]}}, T[31:30]};
               5'd31: {SHFT_OUT} = {{32{T[31]}}};
            endcase
      endcase
endmodule
