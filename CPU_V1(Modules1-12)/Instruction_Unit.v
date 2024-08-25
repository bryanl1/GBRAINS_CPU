`timescale 1ns / 1ps
/**********************************************************
*
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: INSTRUCTION_UNIT.v
* Date:     Oct. 25, 2018
* Project:  CECS 440 Lab 6
* Version:  1.1
*
* Notes:    Instruction Unit module, register file that holds the data
*           Writing to is synchronous, reading asynchronous.
*           Chip select (dm_cs) must asserted with dm_rd or dm_wr
*           simultaneously to read or write
*           Revision 10/25- Added PC_Mux
***********************************************************/
module INSTRUCTION_UNIT( CLK, RESET, im_cs, im_wr, im_rd, pc_ld, pc_inc, ir_ld, 
								PC_in, pc_sel,
                        PC_out, IR_out, SE_16);
    
    input CLK, RESET;
    input im_cs;
    input im_wr;
    input im_rd;
    input pc_ld;
    input pc_inc;
    input ir_ld;
    input [1:0]  pc_sel;
    input [31:0] PC_in;
    
    output [31:0] PC_out;
    output [31:0] IR_out;
    output [31:0] SE_16;
    
    wire [31:0] D_Out; //Instruction memory data out to IR register
    wire [31:0] PC_MUX;// for Instr. that adjust PC value  
    
    PROGRAM_COUNTER PCreg   (CLK, RESET, pc_ld, pc_inc, PC_MUX, PC_out );
    DATA_MEMORY     IMemReg (CLK, im_cs, im_wr, im_rd, PC_out[11:0], 
										32'h0, D_Out);
    REG32           IRReg   (CLK, RESET, ir_ld, D_Out, IR_out );
    
    assign SE_16 = {{16{IR_out[15]}},IR_out[15:0]};
    
    assign PC_MUX = (pc_sel == 2'h2)?  PC_in: 
    /*jump addr.*/  (pc_sel == 2'h1)? {PC_out[31:28], IR_out[25:0], 2'b00}:
    /*branch, pc+sign ext. imm*/             PC_out + {SE_16[29:0], 2'b00}; 
endmodule
