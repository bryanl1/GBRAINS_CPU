`timescale 1ns / 1ps
/**********************************************************
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
*			   interrupt.
***********************************************************/
module CPU(clk, reset, intr, DY, 
           int_ack, dm_cs, dm_wr, dm_rd, ALU_OUT, D_OUT);

	input clk, reset, intr; 	        // Inputs from Test module, io interrupt
   input [31:0] DY;                   // DataMem/IO data input   
   
   output int_ack;                    // output to acknowledge io interrupt
   output [31:0] ALU_OUT;             // IDP outputs, also go to memories
   output [31:0] D_OUT;
	output dm_cs, dm_wr, dm_rd;        // data memory control
   
	wire[31:0] IR;  	                 // MCU Outputs
   wire c,n,z,v;
	wire [1:0] pc_sel;
	wire pc_ld, pc_inc;
	wire im_cs, im_wr, im_rd, ir_ld;
	wire D_En, T_Sel, HILO_ld;
	wire [1:0] DA_Sel;
	wire [2:0] Y_Sel;
	wire [4:0] FS;
	wire [31:0] PC_out;               //IU outputs
	wire [31:0] SE_16;                   

	//Instantiate the Control Unit
   MCU mcu (  //inputs
   .sys_clk(clk),   .reset(reset),   .intr(intr), .c(c), .n(n), .z(z), .v(v),      
   .IR(IR),  
   //outputs	
   .pc_sel(pc_sel), .pc_ld(pc_ld),   .pc_inc(pc_inc), .int_ack(int_ack),  		
   .im_cs(im_cs),   .im_wr(im_wr),   .im_rd(im_rd), .ir_ld(ir_ld), 
   .D_En(D_En),     .DA_Sel(DA_Sel), .T_Sel(T_Sel), .HILO_ld(HILO_ld), 
	.Y_Sel(Y_Sel), .FS(FS), 
   .dm_cs(dm_cs),   .dm_wr(dm_wr),   .dm_rd(dm_rd)
   );
   
   //Instantiate the Instruction Unit
   INSTRUCTION_UNIT iu (
    .CLK(clk),       .RESET(reset), 												//ins
    .im_cs(im_cs),   .im_wr(im_wr),    .im_rd(im_rd), 
    .pc_ld(pc_ld),   .pc_inc(pc_inc),  .ir_ld(ir_ld), .PC_in(ALU_OUT),  
	 .pc_sel(pc_sel),  
    .PC_out(PC_out), .IR_out(IR),      .SE_16(SE_16));                   //outs
   
   //Instantiate the Datapath Modules.    
    INTEGER_DATAPATH idp (
    .CLK(clk),    .RESET(reset), 												//inputs
    .FS(FS),      .HILO_ld(HILO_ld), 
    .D_En(D_En),  .D_Addr(IR[15:11]), .S_Addr(IR[25:21]),  .T_Addr(IR[20:16]), 
    .DT(SE_16),   .T_Sel(T_Sel),      .PC_in(PC_out),      .DA_sel(DA_Sel), 
	 .DY(DY), .Y_Sel(Y_Sel), 
	 //outputs
    .C(c), .V(v), .N(n), .Z(z),       .ALU_OUT(ALU_OUT),   .D_OUT(D_OUT));
    
endmodule
