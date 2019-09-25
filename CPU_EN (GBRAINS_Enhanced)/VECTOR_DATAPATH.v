`timescale 1ns / 1ps
/**************************************************************************************
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename:  VECTOR_DATAPTH.v
* Project:   CECS 440 Senior Project GBRAINS
* 
* Notes:     Integer Datapath module, routes data from outside sources to 
*            destinations in execution phase of instruction cycle. 
*            Instantiates the 64x64 Register file and ALU that performs operations.
*
***************************************************************************************/

module VECTOR_DATAPATH(CLK, RESET, D_EN, FS, D_Addr, S_Addr, T_Addr, FMT, DT,
        DY, T_Sel, DIN_Sel, DOut_Sel, Y_Sel, D_OUT  );

   input CLK, RESET;
   input [4:0] FS;         //ALU Function Select

   input D_EN;             //D Register write enable
   input [4:0] D_Addr;     //D Reg Address
   input [4:0] S_Addr;     //S Reg Address
   input [4:0] T_Addr;     //T Reg Address
   input [4:0] FMT;        //**Format specifier, mostly unused in this edition VDP, 
                           //for future packed data size select, now just for LW
   input [63:0] DT;        //32 bit External Tvalue for ALU, gets data out value
                           //from IDP
   input T_Sel,            //Select T input for ALU, either T from RegFile or DT, 
         DIN_Sel,          //select which Din reg to load HI or LO, LO is 0
         DOut_Sel;         //choose hi or lo 32bit half of data to come out
   input [31:0] DY;        //External Y value for Register File D input
   input Y_Sel;            //Select Y that goes into regfile from ALU or Memory 
   
   output [31:0] D_OUT;
   
   wire [63:0] Y, S, T, T_Mux, Y_Mux, Dreg; 
   wire [31:0] Din_HI, Din_LO, Y_hi, Y_lo;
   wire [4:0] DA_Mux;

   //two REG32 Y_lo, Y_hi always loaded, but muxed on output  depending on mcu input
   REG32 Y_HIREG(.CLK(CLK), .RESET(RESET), .ld(1'b1), .D(Y[63:32]), .Q(Y_hi));
   REG32 Y_LOREG(.CLK(CLK), .RESET(RESET), .ld(1'b1), .D(Y[31:0]),  .Q(Y_lo));
   
   //DIN_Sel selects hi or lo to data in buffers to load,        
   REG32 DIN_HIREG(.CLK(CLK), .RESET(RESET), .ld(DIN_Sel),  .D(DY),  .Q(Din_HI));
   REG32 DIN_LOREG(.CLK(CLK), .RESET(RESET), .ld(~DIN_Sel), .D(DY),  .Q(Din_LO));
   
   //Regfile64 32 registers, 64 bits wide, VREGFILE64, three outputs 
   VREGFILE64 regfile (.CLK(CLK), .RESET(RESET), 
   .D_Addr(D_Addr), .S_Addr(S_Addr), .T_Addr(T_Addr), .D_EN(D_EN),    
   .D(Y_Mux),       .S(S),           .T(T),           .DOUT(Dreg));
      
   //VALU, takes in three  data inputs, one of which is D, which will get overwritten 
   VALU_64 valu (.S(S), .T(T_Mux), .D(Dreg), .FS(FS), .FMT(FMT), .Y(Y) );
   
   //TMux, select ALU T from regfile or external IDP Reg Immediate,
   //64bit, used for immediate stores from IDP regfile
   assign T_Mux = T_Sel? DT : T;
   
   //Y_Mux, for ALU or external data buffers into RegFile data in
   assign Y_Mux = Y_Sel? {Din_HI, Din_LO} : Y;
   
   //D_OutMux, select hi or lo reg to come out on 32 bit data line
   assign D_OUT = DOut_Sel ? Y_hi : Y_lo;
   
endmodule
