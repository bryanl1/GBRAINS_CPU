`timescale 1ns / 1ps
/**********************************************************
*
* Author(s):Bryan Linares
*           Grace Daliwan
*           Brian Ortiz
* Filename: INTEGER_DATAPATH.v
* Date:     Oct. 25, 2018
* Project:  CECS 440 Lab 6
* Version:  1.3
*
* Notes: Integer Datapath module, routes data from outside sources to 
*        destinations in execution phase of instruction cycle. 
*        Instantiates the 32x32 Register file and ALU that performs operations.
*        Revision 10/9 - Added pipeline Registers for S,T,ALU_Out,D_in 
*        Revision 10/16- Added DA_sel for selecting D_Addr from S_Addr field
*        Revision 10/25- Added additional DA mux selections, expanded DA_Sel
***********************************************************/
module INTEGER_DATAPATH( CLK, RESET, FS, HILO_ld, D_En, D_Addr, S_Addr, T_Addr,
								DT, T_Sel, PC_in,
								DA_sel, C, V, N, Z, DY, Y_Sel, ALU_OUT, D_OUT);
   
   input CLK;
   input RESET;
   input [4:0] FS;     //ALU Function Select
   input HILO_ld;      //Load Mul/Dev result registers
   input D_En;         //D Register write enable
   input [4:0] D_Addr; //D Reg Address
   input [4:0] S_Addr; //S Reg Address
   input [4:0] T_Addr; //T Reg Address
   input [31:0] DT;    //External T value for ALU
   input T_Sel;        //Select T input for ALU, either T from RegFile or DT
   input [31:0] DY;    //External Y value for Register D input
   input [31:0] PC_in; //External PC value In
   input [2:0] Y_Sel;  //ALU_Out select 1-5: HI,LO,Y_lo, DY, PC_in
   input [1:0] DA_sel; //Select alt. Destination Address for alt. IR format.
   
   output        C,V,N,Z;
   output [31:0] D_OUT;
   output [31:0] ALU_OUT;
   
   wire [4:0]  Y_Mux, D_Mux;
   wire [31:0] S, T, T_Reg, T_Out, Y_hi, Y_lo, ALU_lo, HI_out, LO_out, T_Mux;
   wire [31:0] HI, LO, RS, RT, ALU_OutReg, D_in;
   reg  [31:0] Y;
 
   REG32 HIReg    ( .CLK(CLK), .RESET(RESET), .ld(HILO_ld), .D(Y_hi), .Q(HI) );
   REG32 LOReg    ( .CLK(CLK), .RESET(RESET), .ld(HILO_ld), .D(Y_lo), .Q(LO) );
   REG32 RSReg    ( .CLK(CLK), .RESET(RESET), .ld(1'b1), .D(S), .Q(RS) );
   REG32 RTReg    ( .CLK(CLK), .RESET(RESET), .ld(1'b1), .D(T_Mux), .Q(RT) );
   REG32 ALUReg   ( .CLK(CLK), .RESET(RESET), .ld(1'b1), .D(Y_lo), 
																			.Q(ALU_OutReg) );
   REG32 DinReg   ( .CLK(CLK), .RESET(RESET), .ld(1'b1), .D(DY), .Q(D_in) );
   
   REGFILE32 regfile (
      .CLK(CLK), .RESET(RESET), .D_Addr(D_Mux), 
      .S_Addr(S_Addr), .T_Addr(T_Addr), .D_EN(D_En), .D(ALU_OUT),  //inputs 
      .S(S), .T(T)                                                 //outputs
   );   
   
   ALU_32 alu_ver1 (
    .S(RS), .T(RT), .FS(FS),                                      // inputs
    .Y_hi(Y_hi), .Y_lo(Y_lo), .C(C), .V(V), .N(N), .Z(Z)          // outputs
   );
   
   //DA-Mux, destination address mux
   assign D_Mux = (DA_sel == 2'h3)? 5'h1D: //29 sp
                  (DA_sel == 2'h2)? 5'h1F: //31 ra
                  (DA_sel == 2'h1)? T_Addr: //IR[20:16] 
                                    D_Addr; //IR[15:11]
   
   // Y-Mux
   assign ALU_OUT = (Y_Sel == 3'h4) ? HI:
                    (Y_Sel == 3'h3) ? LO:
                    (Y_Sel == 3'h0) ? ALU_OutReg:
                    (Y_Sel == 3'h2) ? D_in:
                    (Y_Sel == 3'h1) ? PC_in: ALU_OutReg; //defaults to ALU           
   //T-Mux
   assign T_Mux = T_Sel ? DT : T;     
   assign D_OUT = RT;
endmodule
