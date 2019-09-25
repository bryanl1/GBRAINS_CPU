`timescale 1ns / 1ps
/************************************************************************************
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: CPU_Test.v
* Date:     Nov. 27, 2018
* Project:  CECS 440 Senior Project 'GBRAINS'
* Version:  1.0
*
* Notes:    GBRAINS ENHANCED MIPS CPU Testbench. Instantiates the MIPS CPU,
*           I/O Memory Module, and Data Memory modules. and initializes
*           the IO, Instruction and Data memories. Reset is asserted and deasserted
*           and the MCU state machine runs without other input other than the 
*           generated interrupt.
************************************************************************************/
module CPU_Test;

   reg  clk,   reset;
   
   wire intr,  int_ack;         //Intr out from IO to CPU, Int_ack from CPU to IO
   wire dm_cs, dm_wr, dm_rd;    //Data memory access controls, IO memory controls 
   wire io_cs, io_wr, io_rd;
   wire [31:0] D_OUT, DY;       //Data_Out and memory data value in
   wire [31:0] ALU_OUT;         //IDP outputs, ALU_Out is computed data
                                //used as Address.
   
   //Instantiate the CPU 
   CPU cpu (
    .clk(clk), .reset(reset), .intr(intr),     //inputs, interrupt from io
    .int_ack(int_ack),                         //outputs
    .dm_cs(dm_cs),     .dm_wr(dm_wr), .dm_rd(dm_rd), 
    .io_cs(io_cs),     .io_wr(io_wr), .io_rd(io_rd), 
    .ALU_OUT(ALU_OUT), .D_OUT(D_OUT), .DY(DY));
    
   //Instantiate the Data Memory
   DATA_MEMORY dm (
    .clk(clk), .dm_cs(dm_cs), .dm_wr(dm_wr), .dm_rd(dm_rd),  //inputs
    .Address(ALU_OUT[11:0]),  .D_in(D_OUT),                  //outputs
    .D_Out(DY) );
    
   //Instantiate the I/O Memory Space with Interrupt
   IO_Module io (
    .clock(clk), 
    .int_ack(int_ack),       .io_wr(io_wr),
    .io_cs(io_cs),           .io_rd(io_rd),  
    .Address(ALU_OUT[11:0]), .IO_in(D_OUT), //inputs
    .intr(intr),.IO_out(DY));               //outputs
   
   //create a 10ps clock
    always #5 clk = ~clk; 
    
  ///////////////////////////////////////////////////////////////////////////////////
  //Welcome to the enhancements testbench for the 'GBRAINS' CPU!
  // 
  // The project is setup and ready to run the custom Enhanced Instruction Memory 
  // Module. The procedure includes loading values into the Enhanced register files 
  // in their respective datapaths, operating on the values using the implemented 
  // operations and ending on a break statement which dumps the final status 
  // of the register files in all three data paths, with some conversions done
  // on the floating point values for easier verification.
  //
  // Make sure that iSim 'runs all' the simulation! Follow the iMem comments  !Enjoy!
  ///////////////////////////////////////////////////////////////////////////////////
  
  initial begin
      $display("             C E C S 4 4 0    S E N I O R P R O J E C T   GBRAINS");
      $timeformat(-9, 1, " ps", 9); 
      clk = 1'b0;
      @(negedge clk)
      reset = 1'b1;
      @(negedge clk)
      reset = 1'b0;
      
      $readmemh("dMemEN1_Fa18.dat", dm.memory);
      $readmemh("iMemEN1_Fa18_commented.dat", cpu.iu.IMemReg.memory);
      $readmemh("dMemEN1_Fa18.dat", io.memory);
           
  end
  
endmodule
