/******************************************************************************
* 
* Author(s): Brian Ortiz
*            Bryan Linares
*            Grace Daliwan
* Filename: MCU.v
* Date:     Nov. 27, 2018
* Project:  CECS 440 Senior Project
* Version:  2.13
* Credit:   Based on and extending from a design provided by R.W. Allison.
*
* A state machine implementing the MIPS Control Unit (MCU) for the major cycles
* of fetch, execute and some MIPS instructions from memory, including checking 
* for interrupts.
*
*------------------------------------------------------------------------------
*                 MCU	C O N T R O L	W O R D
*------------------------------------------------------------------------------
*
* {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
* {im_cs, im_rd, im_wr} = 3'b0_0_0;
* {D_En, DA_sel, T_sel, HILO_ld, Y_sel} = 8'b0_00_0_0_000;	FS=5'h0;
* {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;	int_ack=1'b0;
*
******************************************************************************/

//***************************************************************************** 
module MCU (sys_clk, reset, intr,	// system inputs
            c, n, z, v,	            // ALU status inputs
            IR,	                  // Instruction Register input
            int_ack,	               // output to I/O subsystem
            pc_sel, pc_ld, pc_inc, im_cs, im_wr, im_rd, ir_ld, 
            D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel, FS,
            dm_cs, dm_wr, dm_rd,
            io_cs, io_rd, io_wr);// rest of control word fields
//*****************************************************************************
input	sys_clk, reset, intr;	// system clock, reset, and interrupt request 
input	c, n, z, v;	            // Integer ALU status inputs
input [31:0] IR;	            // Instruction Register input from IU

output reg int_ack;	            //interrupt acknowledge
output reg [1:0] pc_sel;         // all the controlword fields
output reg pc_ld, pc_inc, ir_ld; // needed by the IU, DP and Data Memory
output reg im_cs, im_wr, im_rd; 
output reg dm_cs, dm_rd, dm_wr;
output reg io_cs, io_rd, io_wr;

output reg D_En, T_Sel, HILO_ld; 
output reg [2:0] Y_Sel;
output reg [4:0] FS;
output reg [1:0] DA_Sel;
integer i,j; //iterators

//****************************
// Flag registers            *
//****************************
reg   ps_i, ps_c, ps_v, ps_n, ps_z;   // present state registers flags
reg   ns_i, ns_c, ns_v, ns_n, ns_z;   // next state registers flags

//****************************
//	internal data structures
//****************************
// state assignments 
parameter
   //starting states
   RESET  =  00, FETCH  =  01, DECODE =  02, 
	//arithmatic states
	ADD    =  10, ADDU   =  11, SUB    =  12, SUBU  =  13, MULT  = 14, 
	DIV    =  15,
	//non-immediate logic states
	AND    =  20, OR     =  21, NOR    =  22, XOR   =  23, SRL   = 24, 
	SRA    =  25, SLL    =  26, SLT    =  27, SLTU  =  28,
	//immediate logic states
	ORI    =  30, LUI    =  31, SLTI   =  32, XORI  =  33, ANDI  = 34, 
	SLTIU  =  35, ADDI   =  36,
	//write back states
	WB_alu =  40, WB_imm =  41, WB_Din =  42, WB_hi =  43, WB_lo = 44, 
	WB_mem =  45, WB_reg =  46,
	//load store states
	LW     =  50, LW_2   =  51, SW     =  52, MFLO  =  53, MFHI  = 54,
	//jump states
	JR     =  60, JR_2   =  61, JAL    =  62, JAL_2 =  63, J     = 64,
	//branch states
	BEQ    =  70, BEQ_2  =  71, BNE    =  72, BNE_2 =  73, BLEZ  = 74,
	BLEZ_2 =  75, BGTZ   =  76, BGTZ_2 =  77,
	//interrupt and break states
   INTR_1 = 501, INTR_2 = 502, INTR_3 = 503, BREAK = 510, ILLEGAL_OP = 511,
	//I/O states
   INPUT = 80,  OUTPUT = 81, RETI = 82,  INPUT_2 = 83,  OUTPUT_2 = 84, 
	SETIE = 85;

//FS values
parameter
    pass_s = 5'h00,  pass_t  = 5'h01,  add     = 5'h02,   sub     = 5'h03,  
	 addu   = 5'h04,  subu    = 5'h05,  slt     = 5'h06,   sltu    = 5'h07,
	 fs_and = 5'h08,  fs_or   = 5'h09,  fs_xor  = 5'h0a,   fs_nor  = 5'h0b,  
	 sll    = 5'h0c,  srl     = 5'h0d,  sra     = 5'h0e,   andi    = 5'h16,  
	 ori    = 5'h17,  lui     = 5'h18,  xori    = 5'h19,   inc     = 5'h0f,   
	 dec    = 5'h10,  inc4    = 5'h11,  dec4    = 5'h12,   zeros   = 5'h13,  
	 ones   = 5'h14,  sp_init = 5'h15,  mult    = 5'h1E,   div     = 5'h1F;
	 
//state register (up to 512 states) 
reg	[8:0] state;


// updating the flags
always @(posedge sys_clk, posedge reset)
   if (reset==1'b1)
      {ps_i, ps_c, ps_v, ps_n, ps_z} = 5'b0;
   else
      {ps_i, ps_c, ps_v, ps_n, ps_z} =  {ns_i, ns_c, ns_v, ns_n, ns_z}; 


/************************************************
* 440 MIPS CONTROL UNIT (Finite State Machine) *
************************************************/
always @(posedge sys_clk, posedge reset) 
   if (reset)
      @(negedge sys_clk) begin  //deassert all and send to RESET state
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;                //PC/IR sigs
      {im_cs, im_rd, im_wr} = 3'b0_0_0;                            //IM
		//IDP load sp_init
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sp_init;   
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};
      {io_cs,  io_rd,  io_wr} = 3'b0_0_0;
      int_ack=1'b0;//DM
      state = RESET;
      end 
   else
      case (state) 
      FETCH:
         @(negedge sys_clk)
         if (int_ack==0 & (intr==1 & ps_i==1))
            begin	//*** new interrupt pending; prepare for ISR ***
            // control word assignments for "deasserting" everything  
            {pc_sel, pc_ld,  pc_inc, ir_ld}          = 5'b00_0_0_0;
            {im_cs,  im_rd,  im_wr}                  = 3'b0_0_0;
            {D_En,   DA_Sel, T_Sel,  HILO_ld, Y_Sel} = 8'b0_00_0_0_000; 
            {dm_cs,  dm_rd,  dm_wr}                  = 3'b0_0_0;                        
            {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
            {ns_i, ns_c,ns_v, ns_n, ns_z}  = {ps_i, ps_c, ps_v, ps_n, ps_z};
            FS      = sp_init;
            int_ack = 0;
            state   = INTR_1;
            end 
         else
            begin	//*** no new interrupt pending; fetch and instruction *** 
               if (int_ack==1 & intr==0) int_ack=1'b0;
               // control word assignments for IR <- iM[PC]; PC <- PC+4 
               {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_1_1;
               {im_cs, im_rd, im_wr} = 3'b1_1_0;
               {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; 
					FS = sp_init;
               {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                     int_ack=0;
               {ns_i, ns_c, ns_v, ns_n,ns_z}  = {ps_i, ps_c, ps_v, ps_n, ps_z};
               {io_cs,  io_rd,  io_wr} = 3'b0_0_0;
               state = DECODE;
            end
      RESET:
         @(negedge sys_clk)
         begin
         //	control word assignments for $sp <-- ALU_Out(32'h3FC)
         {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_1_0_0;
         {im_cs, im_rd, im_wr} = 3'b0_0_0;
         {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_11_0_0_000; FS = sp_init;
         {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
         {ns_i, ns_c, ns_v, ns_n, ns_z}  = {ps_i, ps_c, ps_v, ps_n, ps_z};
         {io_cs,  io_rd,  io_wr} = 3'b0_0_0;
         state = FETCH;
         end
      DECODE:
         begin
            @(negedge sys_clk)
            if ( IR[31:26] == 6'h0 )	// check for MIPS format 
               begin	// it is an R-type format
                 // control word assignments: RS <-- $rs	RT <-- $rt	(default)
               {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
               {im_cs, im_rd, im_wr} = 3'b0_0_0;
               {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; 
					FS = 5'h0;
               {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;	             int_ack = 1'b0; 
               {ns_i, ns_c, ns_v, ns_n,ns_z}  = {ps_i, ps_c, ps_v, ps_n, ps_z};
               {io_cs,  io_rd,  io_wr} = 3'b0_0_0;
               case ( IR[5:0] )
                  6'h00 :  state = SLL;
                  6'h02 :  state = SRL;
                  6'h03 :  state = SRA;
                  6'h08 :  state = JR;
                  6'h0D :	state = BREAK;
                  6'h10 :  state = MFHI;
						6'h12 :  state = MFLO;
						6'h18 :  state = MULT;
						6'h1A :  state = DIV;
                  6'h1F :  state = SETIE;
						6'h20 :	state = ADD;
                  6'h21 :  state = ADDU;
                  6'h22 :  state = SUB;
                  6'h23 :  state = SUBU;
						6'h24 :  state = AND;
                  6'h25 :  state = OR;
						6'h26 :  state = XOR;
						6'h27 :  state = NOR;
                  6'h2A :  state = SLT;
                  6'h2B :  state = SLTU;
                  default: state = ILLEGAL_OP;
               endcase
               end	// end of if for R-type Format 
            else
            begin // it is an I-type or J-type format
               // control word assignments: RS <-- $rs	RT <-- DT(se_16)
                  {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
                  {im_cs, im_rd, im_wr} = 3'b0_0_0;
                  {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_1_0_000; 
						FS = 5'h0;
                  {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;	          int_ack = 1'b0; 
                  {ns_i,ns_c,ns_v,ns_n, ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};
                  {io_cs,  io_rd,  io_wr} = 3'b0_0_0;
                  case ( IR[31:26] )
                     6'h02 : state = J;
                     6'h03 : state = JAL;
                     6'h04 : state = BEQ;
                     6'h05 : state = BNE;
							6'h06 : state = BLEZ;
							6'h07 : state = BGTZ;
                     6'h08 : state = ADDI;
                     6'h0A : state = SLTI;
                     6'h0B : state = SLTIU;
                     6'h0C : state = ANDI;
                     6'h0D : state = ORI; 
                     6'h0E : state = XORI;
                     6'h0F : state = LUI;
                     6'h1C : state = INPUT;
                     6'h1D : state = OUTPUT;
                     6'h1E : state = RETI;
                     6'h2B : state = SW;
							6'h23 : state = LW;
                     default: state = ILLEGAL_OP; 
                  endcase
            end	// end of else for I-type or J-type formats 
         end	// end of DECODE

   SETIE:
      @(negedge sys_clk) begin
      // control word assignments:	IE <-- 1'B1
      {pc_sel, pc_ld,  pc_inc, ir_ld}          = 5'b00_0_0_0;
      {im_cs,  im_rd,  im_wr}                  = 3'b0_0_0;
      {D_En,   DA_Sel, T_Sel,  HILO_ld, Y_Sel} = 8'b0_00_0_0_000; 
      {dm_cs,  dm_rd,  dm_wr}                  = 3'b0_0_0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {1'b1, ps_c, ps_v, ps_n, ps_z};
      FS      = 5'h0;
      int_ack = 0;
      state   = FETCH;
      end   
   INPUT:
      @(negedge sys_clk) begin
      // control word assignment for ALU_OUT <-- RS($rs) + RT(se_16)
      {pc_sel, pc_ld,  pc_inc, ir_ld}          = 5'b00_0_0_0;
      {im_cs,  im_rd,  im_wr}                  = 3'b0_0_0;
      {D_En,   DA_Sel, T_Sel,  HILO_ld, Y_Sel} = 8'b0_00_0_0_000; 
      {dm_cs,  dm_rd,  dm_wr}                  = 3'b0_0_0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z}  = {ps_i, c, v, n, z};  
      FS      = add;
      int_ack = 0; 
      state   = INPUT_2;
      end
         
   INPUT_2: 
      @(negedge sys_clk) begin
      // control word assignments for D_in <-- IOM[ ALU_Out($rs+se_16) ] 
      {pc_sel, pc_ld,  pc_inc, ir_ld}          = 5'b00_0_0_0;
      {im_cs,  im_rd,  im_wr}                  = 3'b0_0_0;
      {D_En,   DA_Sel, T_Sel,  HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs,  dm_rd,  dm_wr}                  = 3'b0_0_0;                       
      {io_cs,  io_rd,  io_wr}                  = 3'b1_1_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};      
      FS      = 5'h0;
      int_ack = 1'b0;      
      state   = WB_reg;
      end
      
   OUTPUT:
      @(negedge sys_clk) begin
      // control word assignments for ALU_Out <-- RS($rs)+ RT(se_16),RT <-- $rt 
      {pc_sel, pc_ld,  pc_inc, ir_ld}          = 5'b00_0_0_0;
      {im_cs,  im_rd,  im_wr}                  = 3'b0_0_0;
      {D_En,   DA_Sel, T_Sel,  HILO_ld, Y_Sel} = 8'b0_00_0_0_000; 
      {dm_cs,  dm_rd,  dm_wr}                  = 3'b0_0_0; 
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z}  = {ps_i, c, v, n, z};
      FS      = add;
      int_ack = 1'b0; 
      state   = OUTPUT_2;
      end
      
   OUTPUT_2: 
      @(negedge sys_clk) begin
      // control word assignments for IOM[ ALU_Out($rs+se_16) ] <-- RT($rt) 
      {pc_sel, pc_ld,  pc_inc, ir_ld}          = 5'b00_0_0_0;
      {im_cs,  im_rd,  im_wr}                  = 3'b0_0_0;
      {D_En,   DA_Sel, T_Sel,  HILO_ld, Y_Sel} = 8'b0_00_0_0_000;
      {dm_cs,  dm_rd,  dm_wr}                  = 3'b0_0_0;                            
      {io_cs,  io_rd,  io_wr}                  = 3'b1_0_1;
      {ns_i,   ns_c,   ns_v,   ns_n,   ns_z}  = {ps_i, ps_c, ps_v, ps_n, ps_z};
      FS      = 5'h0;
      int_ack = 1'b0;      
      state   = FETCH;
      end
   
   ADD:
      @(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- RS($rs) + RT($rt)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z}  = {ps_i, c, v, n, z};
      FS      = add;
      int_ack = 0;
      state   = WB_alu;
      end
		
	SUB:
		@(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- RS($rs) + RT($rt)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end
	
	AND:
		@(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- RS($rs) + RT($rt)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = fs_and;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end
      
	XOR:
		 @(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- RS($rs) ^ RT($rt)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = fs_xor;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end
		
	OR:
	 @(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- RS($rs) | RT($rt)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = fs_or;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end
		
	NOR:
	 @(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- ~(RS($rs) | RT($rt))
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = fs_nor;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end
		
	SLTU:
	 @(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- RS($rs) < RT($rt)? 1:0 unsigned
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sltu;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end
		
	SLTIU:
		 @(negedge sys_clk) begin
      // control word assignments:	ALU_Out <-- RS($rs) < RT($rt)? 1:0 unsigned
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_1_0_000; FS = sltu;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_imm;
      end
	
	MFHI:
		@(negedge sys_clk) begin
		// control word assignments: R(rd) <-- HI
		{pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_00_0_0_100; FS = 5'b0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
		state = FETCH;
		end
		
	MFLO:
		@(negedge sys_clk) begin
		// control word assignments: R(rd) <-- LO
		{pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_00_0_0_011; FS = 5'b0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
		state = FETCH;
		end
		
	MULT:
		@(negedge sys_clk) begin
		// control word assignments: {HI,LO} <-- RS($rs) * RT($rt)
		{pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_1_000; FS = mult;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
		state = FETCH;
		end
	
	DIV:
		@(negedge sys_clk) begin
		// control word assignments: HI <-- RS($rs)%RT($rt),LO<--RS($rs)/ RT($rt)
		{pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_1_000; FS = div;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
		state = FETCH;
		end	
		
	XORI:
		@(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RS($rs) | {16'h0, RT[15:0]} 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_1_0_000; FS = xori;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_imm;
      end
		
	ANDI:
		@(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RS($rs) | {16'h0, RT[15:0]} 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = andi;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_imm;
      end
		
   ORI:
      @(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RS($rs) | {16'h0, RT[15:0]} 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = ori;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_imm;
      end

   LUI:
      @(negedge sys_clk) begin
      // control word assignments for ALU_Out <-- { RT[15:0], 16'h0} 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'bxx_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = lui;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      state = WB_imm;
      end

   SW:
      @(negedge sys_clk) begin
      // control word assignments for ALU_Out <-- RS($rs) + RT(se_16), RT<--$rt 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = add;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z}  = {ps_i, c, v, n, z};
      state = WB_mem;
      end

   BEQ:
      @(negedge sys_clk) begin
      // control word assignments for ALU_Out <-- RS($rs) - RT($rt) 
		//(affects zero flag)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      state = BEQ_2;
      end
   BEQ_2:
      @(negedge sys_clk) begin
      // control word assignments for if(zero==1) PC <-- (PC+4) + {SE_16[29:0],
		//		2'b00} (Branch Addr.)
      {pc_sel, pc_ld, pc_inc, ir_ld} = (z == 1'b1)? 5'b00_1_0_0 : 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_1_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      state = FETCH;
      end
      
   BNE:
      @(negedge sys_clk) begin
      // control word assignments for ALU_Out <-- RS($rs) - RT($rt) 
		//(affects zero flag) 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z}  = {ps_i, c, v, n, z};
      state = BNE_2;
      end
   BNE_2:
      @(negedge sys_clk) begin
      // control word assignments for 
		//if(zero flag==0) PC <-- (PC+4) + {SE_16[29:0], 2'b00} (Branch Addr.)
      {pc_sel, pc_ld, pc_inc, ir_ld} = (z == 1'b0)? 5'b00_1_0_0 : 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_1_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};
      state = FETCH;
      end
   BLEZ:
      @(negedge sys_clk) begin
      // control word assignments for ALU_Out <-- RS($rs) - RT($rt) 
		//(affects zero flag) 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      state = BLEZ_2;
      end
   BLEZ_2:
      @(negedge sys_clk) begin
      // control word assignments for 
		//if(zero flag==0) PC <-- (PC+4) + {SE_16[29:0], 2'b00} (Branch Addr.)
      {pc_sel, pc_ld, pc_inc, ir_ld} = (n == 1'b1||z==1'b1)? 5'b00_1_0_0 : 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_1_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      state = FETCH;
      end

	BGTZ:
      @(negedge sys_clk) begin
      // control word assignments for ALU_Out <-- RS($rs) - RT($rt) 
		//(affects zero flag) 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      state = BGTZ_2;
      end
   BGTZ_2:
      @(negedge sys_clk) begin
      // control word assignments for 
		//if(zero flag==0) PC <-- (PC+4) + {SE_16[29:0], 2'b00} (Branch Addr.)
      {pc_sel, pc_ld, pc_inc, ir_ld} = (n == 1'b0&&z==1'b0)? 5'b00_1_0_0 : 
																		       5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_1_0_000; FS = sub;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      state = FETCH;
      end
	
   ADDI:
      @(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RS($rs) + RT[se_16] 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = add;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z}  = {ps_i, c, v, n, z};
      state = WB_imm;
      end 
      
   SRL:
      @(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RT($rt) >> (IR[10:6]) shamnt
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = srl;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end       

   J:
      @(negedge sys_clk) begin
      // ctrl word assignments for 
		//PC <- {PC_out[31:28], IR_out[25:0], 2'b00}(Jump Addr.)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b01_1_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = FETCH;
      end 
      
   JR: //version using $ra (31) as jump register
      @(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RS($ra) 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b10_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};
      state = JR_2;
      end 
   JR_2:
      @(negedge sys_clk) begin
      // ctrl word assignments for PC <- ALU_Out($ra)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b10_1_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};
      state = FETCH;
      end 


	JAL:
		@(negedge sys_clk) begin
		//$display("Jump and Link");  
		{pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_10_0_0_001; FS = 5'b0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
		state = J;
		end

   SRA:
      @(negedge sys_clk) begin
      // ctrl word assignments for 
		//ALU_Out <-- RT($rt) >> (IR[10:6]) shamnt (arith.)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sra;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z}  = {ps_i, c, v, n, z};
      state = WB_alu;
      end 

   SLL:
      @(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RT($rt) << (IR[10:6]) shamnt
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = sll;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end

   SLT:
      @(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RS($rs) < RT($rt) ? 1:0  
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = slt;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_alu;
      end

    SLTI:
      @(negedge sys_clk) begin
      // ctrl word assignments for ALU_Out <-- RS($rs) < RT[se_16] ? 1:0
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = slt;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;
      state = WB_imm;
      end 
    LW:
      @(negedge sys_clk) begin
		// crtl word assignments ALU_Out <-- RS($rs) + RT($rt)
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = add;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
      state = LW_2;
        end
        
    LW_2:
      @(negedge sys_clk) begin
		// crtl word assignments ALU_Out <-- Dmem((RS($rs)+ RT($rt)))
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = add;
      {dm_cs, dm_rd, dm_wr} = 3'b1_1_0;
      state = WB_reg;
        end
        
    WB_reg:
      @(negedge sys_clk) begin
		// crtl word assignments R[rt] <-- ALU_Out
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_01_0_0_010; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;
      state = FETCH;
      end
   WB_alu: 
      @(negedge sys_clk) begin
      // control word assignments for R[rd] <-- ALU_Out 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;    
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};
      state = FETCH;
      end

   WB_imm: 
      @(negedge sys_clk) begin
      // control word assignments for R[rt] <-- ALU_Out 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_01_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=1'b0;    
      state = FETCH;
      end

   WB_mem: 
      @(negedge sys_clk) begin
      // control word assignments for M[ ALU_Out($rs+se_16) ] <-- RT($rt) 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b1_0_1;                        int_ack=1'b0;      
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;
      {ns_i,   ns_c,   ns_v,   ns_n,    ns_z} = {ps_i, ps_c, ps_v, ps_n, ps_z};
      state = FETCH;
      end

   BREAK:
   @(negedge sys_clk) begin
      $display("BREAK INSTRUCTION FETCHED %t",$time);
      // control word assignments for "deasserting" everything
      @(negedge sys_clk) begin      
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=0;      
      end
      $display(" R E G I S T E R S	A F T E R	B R E A K");
      $display(" ");
      Dump_Registers;	// task to output MIPS RegFile
      $display(" ");
      Dump_Data_Memory;
       $display(" ");
      Dump_IO_Memory;
      $finish;
      
   end
   
   ILLEGAL_OP:
      @(negedge sys_clk) begin
      $display("ILLEGAL OPCODE FETCHED %t",$time);
      // control word assignments for "deasserting" everything 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=1'b0;      
      Dump_Registers;
      Dump_PC_and_IR;
      $finish; 
      end

   INTR_1:
      @(negedge sys_clk) begin
      // PC gets address of interrupt vector; Save PC in $ra
      // control word assignments for ALU_Out <- 0x3FC, R[$ra] <- PC
      $display("INTERRUPT REQUESTED");
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b1_10_0_0_001; FS = sp_init;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=1'b0;
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;

      state	= INTR_2;
      end 
   INTR_2:
      @(negedge sys_clk) begin
      // Read address of ISR into D_in;
      // control word assignments for D_in <- dM[ALU_Out(0x3FC)] 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b00_0_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_00_0_0_000; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b1_1_0;                        int_ack=1'b0;      
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;

      state	= INTR_3;
      end 
   INTR_3:
      @(negedge sys_clk) begin
      // Reload PC with address of ISR; ack the intr; goto FETCH
      // control word assignments for PC <- D_in( dM[0x3FC] ), int_ack <- 1 
      {pc_sel, pc_ld, pc_inc, ir_ld} = 5'b10_1_0_0;
      {im_cs, im_rd, im_wr} = 3'b0_0_0;
      {D_En, DA_Sel, T_Sel, HILO_ld, Y_Sel} = 8'b0_01_0_0_010; FS = 5'h0;
      {dm_cs, dm_rd, dm_wr} = 3'b0_0_0;                        int_ack=1'b1;      
      {io_cs,  io_rd,  io_wr}                  = 3'b0_0_0;

      state	= FETCH;
     end

   endcase	// end of FSM logic 
   
   task Dump_Registers;
   begin
      $display("                    CECS 440   R e g i s t e r   D u m p    ");
      $display("************************************************************");
      $display("   TIME        ||               Regfile T ($ri)   ||        ");
      $display("************************************************************");
      for(i = 0; i < 16; i = i + 1) begin
         j = i+16;
         @(negedge sys_clk) begin     
         #1 $write("time: %t ns\t $r[%1d]: %h", 
                         $time,     i[4:0], CPU_Test.cpu.idp.regfile.registers[i]);                
         #1 $display("    $r[%2d]: %h", 
                         j[4:0], CPU_Test.cpu.idp.regfile.registers[i+16]);     
                     
         end 
      end 
   end   
   endtask
   
   task Dump_PC_and_IR;
      begin
         $display("time: %t \t PC: %h", $time, CPU_Test.cpu.iu.PCreg.PC_out);
         $display("time: %t \t IR: %h", $time, CPU_Test.cpu.iu.IRReg.Q);
      end
   endtask
   
   task Dump_Data_Memory;
      begin
      $display("                CECS 440   D a t a M e m o r y   D u m p    ");
      for(i = 8'hC0; i < 8'hFF; i=i+4) begin
      $display("time=%t	DM[%1h]=%h", $time, i[8:0],
		{CPU_Test.dm.memory[i],
      CPU_Test.dm.memory[i+1], 
		CPU_Test.dm.memory[i+2], 
		CPU_Test.dm.memory[i+3]} );
      end
      
      $display("time=%t	DM[%1h]=%h", $time, 12'h3FC,
		{CPU_Test.dm.memory[12'h3FC],
      CPU_Test.dm.memory[12'h3FD], 
		CPU_Test.dm.memory[12'h3FE], 
		CPU_Test.dm.memory[12'h3FF]} );
      
      end
   endtask
   
    task Dump_IO_Memory;
      begin
      $display("                    CECS 440   IO M e m o r y   D u m p    ");
      for(i = 8'hC0; i < 8'hFF; i=i+4) begin
      $display("time=%t	IOM[%1h]=%h", $time, i[8:0],
		{CPU_Test.io.memory[i],
      CPU_Test.io.memory[i+1], 
		CPU_Test.io.memory[i+2], 
		CPU_Test.io.memory[i+3]} );
      end
      end
   endtask
endmodule
