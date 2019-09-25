`timescale 1ns / 1ps
/***************************************************************************************
* Author(s):Bryan Linares
*           Grace Daliwan
*           Brian Ortiz
* Filename: INTEGER_DATAPATH.v
* Date:     Nov. 27, 2018
* Project:  CECS 440 Senior Project
* Version:  1.14
*
* Notes:    Integer Datapath module, routes data from outside sources to 
*           destinations in execution phase of instruction cycle. 
*           Instantiates the 32x32 Register file and ALU that performs operations.
*           Revision 10/9 - Added pipeline Registers for S,T,ALU_Out,D_in 
*           Revision 10/16- Added DA_sel for selecting D_Addr from S_Addr field
*           Revision 10/25- Added additional DA mux selections, expanded DA_Sel
*           Revision 11/18- Added Shifting Amount input to Shifter in ALU  
*           Revision 11/20- Added FLAGS input and FLAGS_Out for receiving and 
*                           outputting flags register on interrupt states Also added 
*                           S_Sel to set rs=$sp and D_Sel, for loading PC and flags 
*                           in interrupt
*
***************************************************************************************/
module INTEGER_DATAPATH( CLK, RESET, FS, HILO_ld, D_En, D_Addr, S_Addr, T_Addr, DT,
               T_Sel, PC_in, SHAMT,DA_sel, C, V, N, Z, DY, Y_Sel, ALU_OUT, D_OUT, S_Sel,
               D_Sel, FLAGS, FLAGS_OUT, LONG_OUT);
   
   input CLK;
   input RESET;
   input [4:0] FS;     //ALU Function Select
   input HILO_ld;      //Load Mul/Dev result registers
   input D_En;         //D Register write enable
   input T_Sel;        //Select T input for ALU, either T from RegFile or DT
   input S_Sel;        //S_Sel alt for  $sp
   input [31:0] DT;    //External T value for ALU
   input [31:0] DY;    //External Y value for Register D input
   input [31:0] PC_in; //External PC value In
   
   input [4:0] FLAGS;  //present flags register from MCU
   input [4:0] D_Addr; //D Reg Address
   input [4:0] S_Addr; //S Reg Address
   input [4:0] T_Addr; //T Reg Address
   input [4:0] SHAMT;  //Shifting amount

   input [2:0] Y_Sel;  //ALU_Out select 1-5: HI,LO,Y_lo, DY, PC_in
   input [1:0] DA_sel, D_Sel; //Select alternate Destination Address/DataOut
                              //for alt. IR format and Data.
   
   output        C,V,N,Z;
   output [31:0] D_OUT;
   output [31:0] ALU_OUT;
   output [4:0]  FLAGS_OUT; //to Flags register in MCU
   output [63:0] LONG_OUT;   //64 bit out to Enhanced datpaths
   
   wire [4:0]  Y_Mux, D_Mux, S_Mux;
   wire [31:0] S, T, T_Reg, T_Out, Y_hi, Y_lo, ALU_lo, HI_out, LO_out, T_Mux;
   wire [31:0] HI, LO, RS, RT, ALU_OutReg, D_in;
   reg  [31:0] Y;
 
   REG32 HIReg  (.CLK(CLK), .RESET(RESET), .ld(HILO_ld), .D(Y_hi),  .Q(HI) );
   REG32 LOReg  (.CLK(CLK), .RESET(RESET), .ld(HILO_ld), .D(Y_lo),  .Q(LO) );
   REG32 RSReg  (.CLK(CLK), .RESET(RESET), .ld(1'b1),    .D(S),     .Q(RS) );
   REG32 RTReg  (.CLK(CLK), .RESET(RESET), .ld(1'b1),    .D(T_Mux), .Q(RT) );
   REG32 ALUReg (.CLK(CLK), .RESET(RESET), .ld(1'b1),    .D(Y_lo),  .Q(ALU_OutReg));
   REG32 DinReg (.CLK(CLK), .RESET(RESET), .ld(1'b1),    .D(DY),    .Q(D_in) );
   
   REGFILE32 regfile (
      .CLK(CLK), .RESET(RESET), .D_Addr(D_Mux), 
      .S_Addr(S_Mux), .T_Addr(T_Addr), .D_EN(D_En), .D(ALU_OUT),  //inputs 
      .S(S), .T(T)                                               //outputs
   );   
   
   ALU_32 alu_ver1 (
    .S(RS), .T(RT), .SHAMT(SHAMT),.FS(FS),                        // inputs
    .Y_hi(Y_hi),    .Y_lo(Y_lo), .C(C), .V(V), .N(N), .Z(Z)      // outputs
   );
   
   assign LONG_OUT = {RS,RT}; ///64 bit output to enhanced datapaths
   
   //DA-Mux, destination address mux
   assign D_Mux = (DA_sel == 2'h3)? 5'h1D:  //29 sp
                  (DA_sel == 2'h2)? 5'h1F:  //31 ra
                  (DA_sel == 2'h1)? T_Addr: //IR[20:16] 
                                    D_Addr; //IR[15:11]
   
   // Y-Mux, decides which register is output on ALU_Out/Address
   assign ALU_OUT = (Y_Sel == 3'h4) ? HI:
                    (Y_Sel == 3'h3) ? LO:
                    (Y_Sel == 3'h0) ? ALU_OutReg:
                    (Y_Sel == 3'h2) ? D_in:
                    (Y_Sel == 3'h1) ? PC_in: ALU_OutReg; //defaults to ALU
                    
   //T-Mux, decides whether T is loaded from external immediate or T from regfile
   assign T_Mux = T_Sel ? DT : T;     
   
   //S-Mux, when asserted, sets the regfile S_Addr input to $sp. Used in interrupt
   //This is used in INTR but not needed in RETI since rs has 1D
   assign S_Mux = S_Sel ? 5'h1D : S_Addr;  
   
   //Flags to be read from bottom 5 bits of dM[$sp] input in interrupt return
   assign FLAGS_OUT = S_Sel? DY[4:0] : 5'hX;   
   
                                     //'F1A9S' here as marker
   assign D_OUT = (D_Sel == 2'h2)? {24'hF1A950,3'b000, FLAGS}: //flag output from MCU
                  (D_Sel == 2'h1)? PC_in:                     //data output is raw PC
                                    RT;                      //default data from RT
endmodule
