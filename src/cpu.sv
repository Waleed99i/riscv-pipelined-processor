`include "opcode.vh"

module cpu (
	input clk,
	input rst
);

	// ==========================================
	// 1. Fetch Stage Wires
	// ==========================================
	logic [31:0] pc_next;
	logic [31:0] pc;
	logic stall;
	logic flush;

	// ==========================================
	// 2. Decode Stage (IF-ID, Stage 1) Wires
	// ==========================================
	logic [31:0] inst_1;
	logic [31:0] pc_1;
	logic [31:0] imm_1;
	
	// Control signals in Stage 1
	logic we_rf_1;
	logic [1:0] alu_op_1;
	logic mem_to_reg_1;
	logic [1:0] rmask_1;
	logic [1:0] wmask_1;
	logic mem_wen_1;	logic load_unsigned_1;	logic branch_1;
	logic jump_1;
	logic jump_reg_1;

	// Register file connections
	logic [4:0] rs1_1;
	logic [4:0] rs2_1;
	logic [4:0] rd_1;
	logic [6:0] opcode_1;
	logic [2:0] funct3_1;
	logic [6:0] funct7_1;
	logic [31:0] rd1_1;
	logic [31:0] rd2_1;

	// ==========================================
	// 3. Execute/Memory Stage (EX-MEM, Stage 2) Wires
	// ==========================================
	logic [31:0] inst_2;
	logic [31:0] pc_2;
	logic [31:0] imm_2;
	logic [31:0] rd1_2;
	logic [31:0] rd2_2;
	
	logic we_rf_2;
	logic [1:0] alu_op_2;
	logic mem_to_reg_2;
	logic [1:0] rmask_2;
	logic [1:0] wmask_2;
	logic mem_wen_2;	logic load_unsigned_2;	logic branch_2;
	logic jump_2;
	logic jump_reg_2;

	logic [4:0] rs1_2;
	logic [4:0] rs2_2;
	logic [4:0] rd_2;
	logic [6:0] opcode_2;
	logic [2:0] funct3_2;
	logic [6:0] funct7_2;

	logic [3:0] alu_operation_2;
	logic [31:0] alu_out_2;
	logic [31:0] mem_rdata_2;
	logic branch_taken_2;

	// Forwarding wires
	logic [31:0] forwarded_rs1_2;
	logic [31:0] forwarded_rs2_2;
	logic [31:0] alu_srcA_2;
	logic [31:0] alu_srcB_2;

	// ==========================================
	// 4. Write-Back Stage (WB, Stage 3) Wires
	// ==========================================
	logic we_rf_3;
	logic [4:0] waddr_rf_3;
	logic [31:0] wd_rf_3;
	logic mem_to_reg_3;
	logic [31:0] alu_out_3;
	logic [31:0] mem_rdata_3;


	// ==========================================
	// IF-ID (Stage 1) - Merged Fetch & Decode
	// ==========================================
	always_ff @(posedge clk) begin
		if (rst) begin
			pc <= 32'd0;
		end else if (!stall) begin
			pc <= pc_next;
		end
	end

	imem imem_inst(
		.addr(pc), 
		.instr(inst_1)
	);

	assign pc_1 = pc;

	// Decode logic
	always_comb begin
		opcode_1 = inst_1[6:0];
		rd_1     = inst_1[11:7];
		funct3_1 = inst_1[14:12];
		rs1_1    = inst_1[19:15];
		rs2_1    = inst_1[24:20];
		funct7_1 = inst_1[31:25];
	end

	RegisterFile rf_inst(
		.clk(clk),
		.rs1(rs1_1), 
		.rs2(rs2_1), 
		.we_rf(we_rf_3),
		.waddr_rf(waddr_rf_3), 
		.wd_rf(wd_rf_3), 
		.rd1(rd1_1),
		.rd2(rd2_1)
	);

	immgen immgen_inst(
		.instruction(inst_1),
		.immediate(imm_1)
	);

	// Control Decoder
	always_comb begin
		we_rf_1      = 0; 
		alu_op_1     = 2'b00;
		mem_to_reg_1 = 0; 
		rmask_1      = 2'd0; 
		wmask_1      = 2'd0;
		mem_wen_1    = 0;
		load_unsigned_1 = 1;
		branch_1     = 0;
		jump_1       = 0;
		jump_reg_1   = 0;

		case (1'b1)
			// Load Instructions
			(opcode_1 == `OPC_LOAD): begin
				we_rf_1 = 1; alu_op_1 = 2'b00; mem_to_reg_1 = 1; load_unsigned_1 = 1;
				if (funct3_1 == `FNC_LB) begin rmask_1 = 2'd2; load_unsigned_1 = 0; end
				else if (funct3_1 == `FNC_LBU) rmask_1 = 2'd2;
				else if (funct3_1 == `FNC_LH) begin rmask_1 = 2'd1; load_unsigned_1 = 0; end
				else if (funct3_1 == `FNC_LHU) rmask_1 = 2'd1;
				else rmask_1 = 2'd0;
			end

			// Store Instructions
			(opcode_1 == `OPC_STORE): begin
				we_rf_1 = 0; alu_op_1 = 2'b00; mem_wen_1 = 1;
				if (funct3_1 == `FNC_SB) wmask_1 = 2'd2;
				else if (funct3_1 == `FNC_SH) wmask_1 = 2'd1;
				else wmask_1 = 2'd0;
			end

			// R-type Arithmetic Instructions
			(opcode_1 == `OPC_ARI_RTYPE): begin
				we_rf_1 = 1; alu_op_1 = 2'b10;
			end

			// I-type Arithmetic Instructions
			(opcode_1 == `OPC_ARI_ITYPE): begin 
				we_rf_1 = 1; alu_op_1 = 2'b11;
			end

			// B-type Branch Instructions
			(opcode_1 == `OPC_BRANCH): begin
				we_rf_1 = 0; alu_op_1 = 2'b01; branch_1 = 1;
			end

			// J-type / U-type Instructions
			(opcode_1 == `OPC_JAL): begin 
				we_rf_1 = 1; alu_op_1 = 2'b00; jump_1 = 1;
			end
			(opcode_1 == `OPC_JALR): begin
				we_rf_1 = 1; alu_op_1 = 2'b00; jump_1 = 1; jump_reg_1 = 1;
			end
			(opcode_1 == `OPC_LUI): begin
				we_rf_1 = 1; alu_op_1 = 2'b00; 
			end
			(opcode_1 == `OPC_AUIPC): begin 
				we_rf_1 = 1; alu_op_1 = 2'b00; 
			end
			default: begin
			end
		endcase
	end

	// Stall logic for hazards where stage-1 depends on a pending register write.
	always_comb begin
		stall = 0;
		if (we_rf_2 && rd_2 != 0 && (rd_2 == rs1_1 || rd_2 == rs2_1)) begin
			stall = 1;
		end else if (we_rf_3 && waddr_rf_3 != 0 && (waddr_rf_3 == rs1_1 || waddr_rf_3 == rs2_1)) begin
			stall = 1;
		end
	end

	// ==========================================
	// STAGE 2 (EX-MEM) Pipeline Register
	// ==========================================
	always_ff @(posedge clk) begin
		if (rst || flush || stall) begin // If stall, insert bubble in EX-MEM
			inst_2 <= `INST_NOP;
			pc_2 <= 32'd0;
			imm_2 <= 32'd0;
			rd1_2 <= 32'd0;
			rd2_2 <= 32'd0;
			we_rf_2 <= 0;
			alu_op_2 <= 2'b00;
			mem_to_reg_2 <= 0;
			rmask_2 <= 2'd0;
			wmask_2 <= 2'd0;
			mem_wen_2 <= 0;
			load_unsigned_2 <= 1;
			branch_2 <= 0;
			jump_2 <= 0;
			jump_reg_2 <= 0;
		end else begin
			inst_2 <= inst_1;
			pc_2 <= pc_1;
			imm_2 <= imm_1;
			rd1_2 <= rd1_1;
			rd2_2 <= rd2_1;
			we_rf_2 <= we_rf_1;
			alu_op_2 <= alu_op_1;
			mem_to_reg_2 <= mem_to_reg_1;
			rmask_2 <= rmask_1;
			wmask_2 <= wmask_1;
			mem_wen_2 <= mem_wen_1;
			load_unsigned_2 <= load_unsigned_1;
			branch_2 <= branch_1;
			jump_2 <= jump_1;
			jump_reg_2 <= jump_reg_1;
		end
	end
	always_comb begin
		opcode_2 = inst_2[6:0];
		rd_2     = inst_2[11:7];
		funct3_2 = inst_2[14:12];
		rs1_2    = inst_2[19:15];
		rs2_2    = inst_2[24:20];
		funct7_2 = inst_2[31:25];
	end

	// Forwarding Logic (WB -> EX-MEM)
	always_comb begin
		forwarded_rs1_2 = rd1_2;
		forwarded_rs2_2 = rd2_2;

		if (we_rf_3 && waddr_rf_3 != 0) begin
			if (waddr_rf_3 == rs1_2) forwarded_rs1_2 = wd_rf_3;
			if (waddr_rf_3 == rs2_2) forwarded_rs2_2 = wd_rf_3;
		end
		
		// Mux for ALU srcB
		if (opcode_2 == `OPC_ARI_RTYPE || opcode_2 == `OPC_BRANCH) begin
			alu_srcB_2 = forwarded_rs2_2;
		end else if (opcode_2 == `OPC_JAL || opcode_2 == `OPC_JALR) begin
			alu_srcB_2 = 32'd0; // Add 0 to pc+4 for return address calculation
		end else begin
			alu_srcB_2 = imm_2; 
		end

    end

    // ALU srcA selection
    always_comb begin
        if (opcode_2 == `OPC_AUIPC) alu_srcA_2 = pc_2;
        else if (opcode_2 == `OPC_LUI) alu_srcA_2 = 32'd0;
        else if (opcode_2 == `OPC_JAL || opcode_2 == `OPC_JALR) alu_srcA_2 = pc_2 + 4; // JAL/JALR saves pc+4 to rd
        else alu_srcA_2 = forwarded_rs1_2;
    end

    alu_controller alu_ctrl_inst(
        .alu_op(alu_op_2),
        .func3(funct3_2),
        .func7(funct7_2),
        .alu_operation(alu_operation_2)
    );

	alu alu_inst(
		.alu_operation(alu_operation_2), 
		.op_A(alu_srcA_2),
		.op_B(alu_srcB_2), 
		.result(alu_out_2), 
		.zero()
	);

	branch_compare branch_cmp_inst(
		.rs1(forwarded_rs1_2), 
		.rs2(forwarded_rs2_2), 
		.br_cond(funct3_2),
		.branch_taken(branch_taken_2)
	);

	dmem dmem_inst(
		.clk(clk), 
		.addr(alu_out_2),
		.mem_wen(mem_wen_2), 
		.rmask(rmask_2),
		.wmask(wmask_2),
		.load_unsigned(load_unsigned_2),
		.mem_wdata(forwarded_rs2_2),
		.mem_rdata(mem_rdata_2)
	);

	// Jump & Branch PC Update Logic
	always_comb begin
		flush = 0;
		pc_next = pc + 4;
		
		if (jump_2) begin
			flush = 1;
			if (jump_reg_2) pc_next = (forwarded_rs1_2 + imm_2) & ~32'd1;
			else pc_next = pc_2 + imm_2;
		end else if (branch_2 && branch_taken_2) begin
			flush = 1;
			pc_next = pc_2 + imm_2;
		end
	end

	// ==========================================
	// STAGE 3 (WB) Pipeline Register
	// ==========================================
	always_ff @(posedge clk) begin
		if (rst) begin
			we_rf_3 <= 0;
			waddr_rf_3 <= 0;
			mem_to_reg_3 <= 0;
			alu_out_3 <= 0;
			mem_rdata_3 <= 0;
		end else begin
			we_rf_3 <= we_rf_2;
			waddr_rf_3 <= rd_2;
			mem_to_reg_3 <= mem_to_reg_2;
			alu_out_3 <= alu_out_2;
			mem_rdata_3 <= mem_rdata_2;
		end
        if (!rst && we_rf_3) begin
            // register write-back completed
        end
    end

    // Write-Back logic
    always_comb begin
        if (mem_to_reg_3) wd_rf_3 = mem_rdata_3;
        else wd_rf_3 = alu_out_3;
    end

endmodule
