`timescale 1ns / 1ps
/************************************************************************************
* Author(s):Bryan Linares
*           Grace Daliwan
*           Brian Ortiz
* Filename: IO_Module.v
* Date:     Nov. 17, 2018
* Project:  CECS 440 Lab 4
*
* Notes:    IO Memory module, register file that holds the data.
*           Writing to is synchronous, reading asynchronous.
*           Chip select (iom_cs) must be asserted with iom_rd or iom_wr
*           simultaneously to read or write
*
************************************************************************************/
module IO_Module( clock, io_cs, io_rd, io_wr, Address, int_ack, intr, IO_in, IO_out);

   input         clock, int_ack; 
   input         io_cs, io_wr, io_rd; //Enables: chip select, write, read
   input  [11:0] Address;
   input  [31:0] IO_in;
   output reg     intr;
   output [31:0] IO_out;

   reg [7:0] memory[0:4095]; //big endian 4096x8 byte addressable
   
   initial begin
      intr = 0;
      #1000 intr = 1;
      @(posedge int_ack) intr = 0;
   end
   
   //synchronous writes
   always@(posedge clock)
      if(io_cs & io_wr)
               {memory[Address + 0], memory[Address + 1],
                memory[Address + 2], memory[Address + 3]} <= IO_in;
     
     else begin
         memory[Address+0] = memory[Address+0];
         memory[Address+1] = memory[Address+1];
         memory[Address+2] = memory[Address+2];
         memory[Address+3] = memory[Address+3];
         end
   
   //asynchronous reading
   assign IO_out = (io_cs & io_rd)? 
                  {memory[Address + 0], memory[Address + 1],
                   memory[Address + 2], memory[Address + 3]} 
                  : 32'hZ;


endmodule
