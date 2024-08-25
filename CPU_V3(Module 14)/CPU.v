`timescale 1ns / 1ps
/**********************************************************************************
*
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: CPU.v
* Date:     Nov. 27, 2018
* Project:  CECS 440 Senior Project 
* Version:  1.0
*
* Notes:    MIPS CPU. Instantiates the MIPS Control Unit,
*           Instruction Unit and Datapath modules. 
*           MCU state machine runs without other input other than the generated 
*           interrupt.
***********************************************************************************/
module CPU(clk, reset, intr, DY, 
           int_ack, dm_cs, dm_wr, dm_rd, io_cs, io_wr, io_rd, ALU_OUT, D_OUT);

	input         clk, reset, intr; 	   // Inputs from Test module, io interrupt
   input  [31:0] DY;                   // DataMem/IO data input   
   
   output        int_ack;              // output to acknowledge io interrupt
   output        dm_cs, dm_wr, dm_rd;  // data memory control
   output        io_cs, io_wr, io_rd;  // io module control
   output [31:0] ALU_OUT;              // IDP outputs, also go to memories
   output [31:0] D_OUT;
	                    
   wire        c, n, z, v;             // MCU Outputs
	wire        pc_ld, pc_inc, S_Sel;
	wire        im_cs, im_wr, im_rd, ir_ld;
	wire        D_En, T_Sel, HILO_ld;
	wire [ 1:0] pc_sel, D_Sel;
   wire [ 1:0] DA_Sel;
	wire [ 2:0] Y_Sel;
	wire [ 4:0] FS, flags, flagsin;
	wire [31:0] IR;
   wire [31:0] PC_out;                 //IU outputs
	wire [31:0] SE_16;                   

	//Instantiate the Control Unit
   MCU mcu (
   .sys_clk(clk),   .reset(reset),   .intr(intr),  
   .c(c), .n(n), .z(z), .v(v),       .FLAGSIN(flagsin),                    //inputs
   .IR(IR),         .D_Sel(D_Sel),   .S_Sel(S_Sel),   .FLAGS(flags),       //outputs
   .pc_sel(pc_sel), .pc_ld(pc_ld),   .pc_inc(pc_inc), .int_ack(int_ack),  
   .im_cs(im_cs),   .im_wr(im_wr),   .im_rd(im_rd),   .ir_ld(ir_ld), 
   .D_En(D_En),     .DA_Sel(DA_Sel), .T_Sel(T_Sel),   .HILO_ld(HILO_ld), 
   .Y_Sel(Y_Sel),   .FS(FS), 
   .dm_cs(dm_cs),   .dm_wr(dm_wr),   .dm_rd(dm_rd),
   .io_cs(io_cs),   .io_wr(io_wr),   .io_rd(io_rd)
   );

   //Instantiate the Instruction Unit
   INSTRUCTION_UNIT iu (
    .CLK(clk),       .RESET(reset), 
    .im_cs(im_cs),   .im_wr(im_wr),    .im_rd(im_rd), 
    .pc_ld(pc_ld),   .pc_inc(pc_inc),  .ir_ld(ir_ld), .PC_in(ALU_OUT),  
    .pc_sel(pc_sel),                                                       //inputs 
    .PC_out(PC_out), .IR_out(IR),      .SE_16(SE_16));                     //outputs
   
   //Instantiate the Datapath Modules.    
    INTEGER_DATAPATH idp (
    .CLK(clk),     .RESET(reset), .FS(FS),     .HILO_ld(HILO_ld),  .FLAGS(flags),
    .S_Sel(S_Sel), .D_Sel(D_Sel), .D_En(D_En), .D_Addr(IR[15:11]), .S_Addr(IR[25:21]), 
    .T_Addr(IR[20:16]), .SHAMT(IR[10:6]),      .DT(SE_16),         .T_Sel(T_Sel),      
    .PC_in(PC_out),     .DA_sel(DA_Sel),       .DY(DY),            .Y_Sel(Y_Sel), 
    .C(c), .V(v), .N(n), .Z(z), .ALU_OUT(ALU_OUT), .D_OUT(D_OUT), .FLAGS_OUT(flagsin));
    
endmodule
