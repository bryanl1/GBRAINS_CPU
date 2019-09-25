`timescale 1ns / 1ps
/******************************************************************************
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: CPU.v
* Date:     Nov. 27, 2018
* Project:  CECS 440 Senior Project 
* Version:  1.0
*
* Notes:    MIPS CPU module. Instantiates the MIPS Control Unit,
*           Instruction Unit and Datapath modules. 
*           the MCU state machine runs without other input other than the 
*           generated interrupt.
******************************************************************************/
module CPU(clk, reset, intr, DY, 
           int_ack, dm_cs, dm_wr, dm_rd, io_cs, io_wr, io_rd, ALU_OUT, D_OUT);

	// Inputs from Test module, io interrupt
	input clk, reset, intr; 	        
	// DataMem/IO data input   
   input [31:0] DY;                   
   
	// output to acknowledge io interrupt
   output int_ack;                    
	// DataPath outputs, also Address input to memories
   output [31:0] ALU_OUT;             
	// Data_Out, muxed depending on data type set
   output [31:0] D_OUT;               
	// data memory control
	output dm_cs, dm_wr, dm_rd;        
	// io module control
   output io_cs, io_wr, io_rd;        
   
   // MCU Outputs
	//Current Instruction Register value, the current instruction
	wire[31:0] IR;  	                  
	//carry, negative, zero, and overflow arithmetic flags
    wire c,n,z,v;                       
	//PC_sel,chooses input to pc, calculated branch or jump, D_sel
	wire [1:0] pc_sel, D_Sel;           
	//PC load, PC_inc, and S_Sel controls (S_Sel, sets $29 on idp regfile in)
	wire pc_ld, pc_inc, S_Sel;          
	//IO module memory chip select, write, read,and instr. reg load control
	wire im_cs, im_wr, im_rd, ir_ld;    
	//IDP Regfile data write enable, Immediate into ALU, and HILO register loads
	wire D_En, T_Sel, HILO_ld;          
	//DA_Sel, regfile Destination: D_Address (default), $29($sp) and $31($ra)
	wire [1:0] DA_Sel;                  
	//ALU_Out select, changes source of Data_Out in IDP
	wire [2:0] Y_Sel;                   
	//Function Select for integer ALU, flags input and output from MCU 
	//flags register
	wire [4:0] FS, flags, flagsin;      
	//Program Counter out
	wire [31:0] PC_out;                 
	//Sign Extended 16 bit immediate 
	wire [31:0] SE_16;                  
	//integer, floating point, and vector data outs
   wire [31:0] iD_OUT, fD_OUT, vD_OUT; 
   
	//Floating point and Vector SIMD Function Select
   wire [4:0] fpFS, vpFS;           
	// Floating point Datapath Controls
   wire fD_En,fT_Sel,fDA_Sel,fDIN_Sel,fDOut_Sel,fY_Sel; 
	//Vector Datapath controls
   wire vD_En,vT_Sel,vDA_Sel,vDIN_Sel,vDOut_Sel,vY_Sel; 
	// {RS,RT} 64 bit concatenation lead to T input of Enhanced ALUs, for 
	//immediate loads
   wire [63:0] LONG_OUT;     
	//Type Select chooses alternate datapath output to external memories
   wire Type_Sel;             
	
   //Instantiate the Control Unit
   MCU mcu (
   .sys_clk(clk),   .reset(reset),   .intr(intr),     .FLAGSIN(flagsin), 
   .n(n),           .z(z),           .v(v),            .c(c),          //inputs
   .IR(IR),         .D_Sel(D_Sel),   .S_Sel(S_Sel),   .FLAGS(flags),  //outputs
   .pc_sel(pc_sel), .pc_ld(pc_ld),   .pc_inc(pc_inc), .int_ack(int_ack),  
   .im_cs(im_cs),   .im_wr(im_wr),   .im_rd(im_rd),   .ir_ld(ir_ld), 
   .D_En(D_En),     .DA_Sel(DA_Sel), .T_Sel(T_Sel),   .HILO_ld(HILO_ld),  
   .dm_cs(dm_cs),   .dm_wr(dm_wr),   .dm_rd(dm_rd),
   .io_cs(io_cs),   .io_wr(io_wr),   .io_rd(io_rd),
   .Y_Sel(Y_Sel),   .FS(FS),
   //MCU Floating Point control signals
   .fD_En(fD_En),       .fpFS(fpFS),        .fT_Sel(fT_Sel), .fDA_Sel(fDA_Sel), 
   .fDIN_Sel(fDIN_Sel), .fDOut_Sel(fDOut_Sel), .fY_Sel(fY_Sel),
   //MCU SIMD Vector control signals
   .vD_En(vD_En),   .vpFS(vpFS), .vT_Sel(vT_Sel), .vDA_Sel(vDA_Sel), 
   .vDOut_Sel(vDOut_Sel),        .vY_Sel(vY_Sel), .vDIN_Sel(vDIN_Sel), 
   .Type_Sel(Type_Sel));

   //Instantiate the Instruction Unit
   INSTRUCTION_UNIT iu (
    .CLK(clk),       .RESET(reset), 
    .im_cs(im_cs),   .im_wr(im_wr),    .im_rd(im_rd), 
    .pc_ld(pc_ld),   .pc_inc(pc_inc),  .ir_ld(ir_ld), 
    .PC_in(ALU_OUT), .pc_sel(pc_sel),                     //ins 
    .PC_out(PC_out), .IR_out(IR),      .SE_16(SE_16));    //outs
   
   //Instantiate the Datapath Modules.    
    INTEGER_DATAPATH idp (
    .CLK(clk),          .RESET(reset), 
    .FS(FS),            .HILO_ld(HILO_ld),   .FLAGS(flags),      .S_Sel(S_Sel),     
    .D_Sel(D_Sel),      .D_En(D_En),         .DY(DY),            .Y_Sel(Y_Sel),
    .D_Addr(IR[15:11]),.S_Addr(IR[25:21]),.T_Addr(IR[20:16]), .SHAMT(IR[10:6]), 
    .DT(SE_16),         .T_Sel(T_Sel),       .PC_in(PC_out),   .DA_sel(DA_Sel), 
    .C(c),              .V(v),               .N(n),              .Z(z),      
    .ALU_OUT(ALU_OUT), .D_OUT(iD_OUT),.FLAGS_OUT(flagsin),.LONG_OUT(LONG_OUT));

    //Floating Point Datapath
    FLOATINGPOINT_DATAPATH fdp (
    .CLK(clk),          .RESET(reset), //inputs
    .D_EN(fD_En),       .FS(fpFS), 
    .D_Addr(IR[15:11]), .S_Addr(IR[25:21]), .T_Addr(IR[20:16]), .FMT(IR[10:6]),
	 //fields
    .DT(LONG_OUT), .DY(DY),   .T_Sel(fT_Sel), .DIN_Sel(fDIN_Sel), 
    .DOut_Sel(fDOut_Sel),     .Y_Sel(fY_Sel), 
    .D_OUT(fD_OUT));

    //SIMD Vector Operations Datapath
    VECTOR_DATAPATH vdp (
    .CLK(clk),          .RESET(reset), //inputs
    .D_EN(vD_En),       .FS(vpFS), 
    .D_Addr(IR[15:11]), .S_Addr(IR[25:21]), .T_Addr(IR[20:16]), .FMT(IR[10:6]),
	 //fields
    .DT(LONG_OUT), .DY(DY), .T_Sel(vT_Sel), .DIN_Sel(vDIN_Sel), 
    .DOut_Sel(vDOut_Sel),   .Y_Sel(vY_Sel), 
    .D_OUT(vD_OUT));
    
    //Data Type Mux
    assign D_OUT = (Type_Sel == 1'b1)? fD_OUT:
                   (Type_Sel == 1'bZ)? vD_OUT:
                                       iD_OUT; 
    
endmodule 