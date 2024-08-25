`timescale 1ns / 1ps
/**********************************************************
*
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: MCU_TB.v
* Date:     Oct. 25, 2018
* Project:  CECS 440 Lab 6
* Version:  1.0
*
* Notes:    MIPS Control Unit Testbench. Instantiates the MIPS Control Unit,
*           Instruction Unit, Datapath, and Data Memory modules, and initializes
*           the Instruction and Data memories. Reset is asserted and deasserted
*           and the MCU state machine runs without other input.
***********************************************************/
module MCU_TB;

   integer i;
	reg clk, reset, intr; 	         // Inputs
   
	wire[31:0] IR;  	               //  MCU Outputs
   wire c,n,z,v, int_ack;
	wire [1:0] pc_sel;
	wire pc_ld, pc_inc;
	wire im_cs, im_wr, im_rd, ir_ld;
	wire D_En, T_Sel, HILO_ld;
	wire [1:0] DA_Sel;
	wire [2:0] Y_Sel;
	wire [4:0] FS;
	wire dm_cs, dm_wr, dm_rd;
	wire [31:0] PC_out;               //IU outputs
	wire [31:0] SE_16;                   
   wire [31:0] ALU_OUT;             //IDP outputs
   wire [31:0] D_OUT;
   wire [31:0] DY;                   //DM output
   
      wire io_intr, io_intAck;      //IO interrupt signals

	MCU mcu (
   .sys_clk(clk), .reset(reset), .intr(io_intr), .c(c), .n(n), .z(z), .v(v),
   .IR(IR), .int_ack(io_intAck),                                             //outputs
   .pc_sel(pc_sel), .pc_ld(pc_ld), .pc_inc(pc_inc), 
   .im_cs(im_cs), .im_wr(im_wr), .im_rd(im_rd), .ir_ld(ir_ld), 
   .D_En(D_En), .DA_Sel(DA_Sel), .T_Sel(T_Sel), .HILO_ld(HILO_ld), .Y_Sel(Y_Sel), .FS(FS), 
   .dm_cs(dm_cs), .dm_wr(dm_wr), .dm_rd(dm_rd),
   .io_cs(io_cs),   .io_wr(io_wr),   .io_rd(io_rd));
   
   INSTRUCTION_UNIT iu (
    .CLK(clk), .RESET(reset), 
    .im_cs(im_cs), .im_wr(im_wr),  .im_rd(im_rd), 
    .pc_ld(pc_ld),  .pc_inc(pc_inc),  .ir_ld(ir_ld), .PC_in(ALU_OUT),  .pc_sel(pc_sel), 
    .PC_out(PC_out), .IR_out(IR),  .SE_16(SE_16));
    
    INTEGER_DATAPATH idp (
    .CLK(clk), .RESET(reset), 
    .FS(FS), .HILO_ld(HILO_ld), 
    .D_En(D_En), .D_Addr(IR[15:11]), .S_Addr(IR[25:21]), .T_Addr(IR[20:16]), .SHAMT(IR[10:6]),
    .DT(SE_16), .T_Sel(T_Sel), .PC_in(PC_out), .DA_sel(DA_Sel), .DY(DY), .Y_Sel(Y_Sel), 
    .C(c), .V(v), .N(n), .Z(z), .ALU_OUT(ALU_OUT), .D_OUT(D_OUT));

   DATA_MEMORY dm (
    .clk(clk), .dm_cs(dm_cs), .dm_wr(dm_wr), .dm_rd(dm_rd), .Address(ALU_OUT[11:0]), .D_in(D_OUT), .D_Out(DY) );
    
   IO_Module io (
    .clock(clk), .io_cs(io_cs), .io_rd(io_rd), .io_wr(io_wr), .Address({20'h0,ALU_OUT[11:0]}), .int_ack(io_intAck), .intr(io_intr), 
                 .IO_in(D_OUT), .IO_out(DY));
  
    
   always #5 clk = ~clk; 
    
	initial begin
      $display("                    C E C S 4 4 0    S E N I O R P R O J E C T   ");
      $timeformat(-9, 1, " ps", 9); 
      clk = 1'b0;
      intr = 1'b0;
      //cycle reset
      @(negedge clk)
      reset = 1'b1;
      @(negedge clk)
      reset = 1'b0;

      $readmemh("dMem13_Fa18.dat", dm.memory);
      $readmemh("iMem13_Fa18_w_isr.dat", iu.IMemReg.memory);
      $readmemh("dMem13_Fa18.dat", io.memory);

	end
      
endmodule
