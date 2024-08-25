`timescale 1ns / 1ps
/**********************************************************
*
* Author(s):Bryan Linares
*           Grace Daliwan
* Filename: DATA_MEMORY.v
* Date:     Oct. 9, 2018
* Project:  CECS 440 Lab 4
* Version:  1.0
*
* Notes:    Data Memory module, register file that holds the data
*           Writing to is synchronous, reading asynchronous.
*           Chip select (dm_cs) must asserted with dm_rd or dm_wr
*           simultaneously to read or write
***********************************************************/
module DATA_MEMORY( clk, dm_cs, dm_wr, dm_rd, Address, D_in, D_Out );
   
   input  clk, dm_cs, dm_wr, dm_rd; //Enables: chip select, write, read
   input  [11:0] Address;
   input  [31:0] D_in;
   output [31:0] D_Out;

   reg [7:0] memory[0:4095]; //big endian 4096x8 byte addressable
   
   //synchronous writes
   always@(posedge clk)
      if(dm_cs & dm_wr)
               {memory[Address+0],
					memory[Address+1],
					memory[Address+2],
					memory[Address+3]} <= D_in;
   
   //asynchronous reading
   assign D_Out = (dm_cs & dm_rd)? 
                  {memory[Address+0],
						memory[Address + 1],
						memory[Address + 2],
						memory[Address + 3]} 
                  : 32'hZ;
endmodule
