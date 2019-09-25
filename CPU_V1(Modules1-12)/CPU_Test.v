`timescale 1ns / 1ps
/**********************************************************
*
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: CPU_Test.v
* Date:     Nov. 27, 2018
* Project:  CECS 440 Senior Project 
* Version:  1.2
*
* Notes:    MIPS CPU Testbench. Instantiates the MIPS CPU
*           and Data Memory modules and initializes
*           the Instruction and Data memories. Reset is 
*				asserted and deasserted and the MCU state 
*				machine runs without other input other than 
*				the generated interrupt. No I/O components are
*				included in this version of the Final Project.
***********************************************************/
module CPU_Test;

   reg  clk,   reset;
   
   wire intr,  int_ack;       //Intr out from IO to CPU, Int_ack from CPU to IO
   wire dm_cs, dm_wr, dm_rd;  //Data memory access controls, 
   wire [31:0] ALU_OUT;       //IDP outputs, ALU_Out is computed data, 
										//used as Address in memories
   wire [31:0] D_OUT, DY;     //Data_Out and Immediate value in
   
   //Instantiate the CPU 
   CPU cpu (
    .clk(clk), .reset(reset), .intr(intr),     //inputs, interrupt
    .int_ack(int_ack),                         //outputs
    .dm_cs(dm_cs), .dm_wr(dm_wr), .dm_rd(dm_rd), 
    .ALU_OUT(ALU_OUT), .D_OUT(D_OUT), .DY(DY));
    
   //Instantiate the Data Memory
   DATA_MEMORY dm (
    .clk(clk), .dm_cs(dm_cs), .dm_wr(dm_wr), .dm_rd(dm_rd), 
    .Address(ALU_OUT[11:0]),  .D_in(D_OUT), 
    .D_Out(DY) );
    
   
    always #5 clk = ~clk; 
    
  /*///////////////////////////////////////////////////////////////////////////
  //Welcome to the GBRAINS CPU  for the CECS 440 Senior Project!"
  // 
  // 
  //This project is designed to run data and instruction modules 1 through 12.
  //
  //The project is setup and ready to run memory module 1. 
  //To test subsequent memory modules, please comment out the current 
  //instruction memory module and data memory module and uncomment the next 
  //pair of memory modules to test.
  //
  //Note that this implementation lacks io memory among other future additions
  ///////////////////////////////////////////////////////////////////////////*/
  
  initial begin
      $display("               C E C S 4 4 0    S E N I O R P R O J E C T   ");
      $timeformat(-9, 1, " ns", 9); 
      clk = 1'b0;
      @(negedge clk)
      reset = 1'b1;
      @(negedge clk)
      reset = 1'b0;
       
      $readmemh("dMem01_Fa18.dat", dm.memory);
      $readmemh("iMem01_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem02_Fa18.dat", dm.memory);
      //$readmemh("iMem02_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem03_Fa18.dat", dm.memory);
      //$readmemh("iMem03_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem04_Fa18.dat", dm.memory);
      //$readmemh("iMem04_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem05_Fa18.dat", dm.memory);
      //$readmemh("iMem05_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem06_Fa18.dat", dm.memory);
      //$readmemh("iMem06_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem07_Fa18.dat", dm.memory);
      //$readmemh("iMem07_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem08_Fa18.dat", dm.memory);
      //$readmemh("iMem08_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem09_Fa18.dat", dm.memory);
      //$readmemh("iMem09_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem10_Fa18.dat", dm.memory);
      //$readmemh("iMem10_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem11_Fa18.dat", dm.memory);
      //$readmemh("iMem11_Fa18.dat", cpu.iu.IMemReg.memory);
		//$readmemh("dMem12_Fa18.dat", dm.memory);
      //$readmemh("iMem12_Fa18.dat", cpu.iu.IMemReg.memory);
		
           
  end
  
endmodule
