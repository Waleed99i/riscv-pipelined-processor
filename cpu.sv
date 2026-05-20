`include "opcode.vh"

module RegisterFile (
	input clk,
	input logic [4:0] rs1,
	input logic [4:0] rs2,
	input logic we_rf,
	input logic [4:0] waddr_rf,
	input logic [31:0] wd_rf,
	output logic [31:0] rd1,
	output logic [31:0] rd2
	);
	logic [31:0] rf [31:0];
	assign rd1 = (rs1 == 0) ? 32'h0 : rf[rs1];
	assign rd2 = (rs2 == 0) ? 32'h0 : rf[rs2];
	always @(posedge clk) begin
		if (we_rf) begin
			if (waddr_rf == 0) begin end
			else rf[waddr_rf] <= wd_rf;
		end
	end
endmodule

module alu (
    input  logic [31:0] op_A,
    input  logic [31:0] op_B,
    input  logic [3:0]  alu_operation,
    output logic [31:0] result,
    output logic        zero
);
    always_comb begin
        unique case (alu_operation)
            4'b0000: result = op_A & op_B;                      // AND
            4'b0001: result = op_A | op_B;                      // OR
            4'b0010: result = op_A + op_B;                      // ADD
            4'b0011: result = op_A ^ op_B;                      // XOR
            4'b0100: result = op_A << op_B[4:0];                // SLL
            4'b0101: result = op_A >> op_B[4:0];                // SRL
            4'b0110: result = op_A - op_B;                      // SUB
            4'b0111: result = $signed(op_A) >>> op_B[4:0];      // SRA
            4'b1000: result = ($signed(op_A) < $signed(op_B)) 
                                ? 32'd1 : 32'd0;                          // SLT
            4'b1001: result = (op_A < op_B) 
                                ? 32'd1 : 32'd0;                          // SLTU
            default: result = 32'd0;
        endcase
    end
    assign zero = (result == 32'd0);
endmodule

module alu_controller (
    input  logic [1:0] alu_op,
    input  logic [2:0] func3,
    input  logic [6:0] func7,
    output logic [3:0] alu_operation
);

    always_comb begin
        case (alu_op)
            2'b00: alu_operation = 4'b0010; // Load/Store uses ADD
            2'b01: alu_operation = 4'b0110; // Branch uses SUB
            2'b10, 2'b11: begin // R-type and I-type
                case (func3)
                    `FNC_ADD_SUB: begin
                        if (alu_op == 2'b10 && func7 == `FNC7_1)
                            alu_operation = 4'b0110; // SUB
                        else
                            alu_operation = 4'b0010; // ADD
                    end
                    `FNC_SLL: alu_operation = 4'b0100;
                    `FNC_SLT: alu_operation = 4'b1000;
                    `FNC_SLTU: alu_operation = 4'b1001;
                    `FNC_XOR: alu_operation = 4'b0011;
                    `FNC_SRL_SRA: begin
                        if (func7 == `FNC7_1)
                            alu_operation = 4'b0111; // SRA
                        else
                            alu_operation = 4'b0101; // SRL
                    end
                    `FNC_OR:  alu_operation = 4'b0001;
                    `FNC_AND: alu_operation = 4'b0000;
                    default:  alu_operation = 4'b0000;
                endcase
            end
            default: alu_operation = 4'b0000;
        endcase
    end
endmodule

module immgen (
    input  logic [31:0] instruction,
    output logic [31:0] immediate
);

    logic [6:0] op;
    assign op = instruction[6:0];
    
    always_comb begin
        case (op)
            // I-type (Arithmetic Imm, Loads, JALR)
            `OPC_ARI_ITYPE, `OPC_LOAD, `OPC_JALR: begin
                immediate = {{20{instruction[31]}}, instruction[31:20]};
            end

            // S-type (Stores)
            `OPC_STORE: begin
                immediate = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
            end

            // B-type (Branches)
            `OPC_BRANCH: begin
                immediate = {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            end

            // U-type (LUI, AUIPC)
            `OPC_LUI, `OPC_AUIPC: begin
                immediate = {instruction[31:12], 12'b0};
            end

            // J-type (Jump and Link)
            `OPC_JAL: begin
                immediate = {{11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0};
            end

            default: immediate = 32'b0;
        endcase
    end
endmodule

module dmem (
    input  logic        clk,
    input  logic        mem_wen,
    input  logic [31:0] raddr,
    input  logic [31:0] waddr,
    input  logic [2:0]  rmask,
    input  logic [2:0]  wmask,
    input  logic [31:0] mem_wdata,
    output logic [31:0] mem_rdata
);
    logic [31:0] memory [1024*1024*1024] = '{default: '0};
    always_ff @(posedge clk) begin
        if (mem_wen) begin
            memory[addr] <= mem_wdata;
			case (wmask)
				2'd0: memory[waddr] <= mem_wdata;
				2'd1: memory[waddr] <= {16'd0,mem_wdata[15:0]};
				2'd2: memory[waddr] <= {24'd0,mem_wdata[7:0]};
				default: begin end
			endcase
        end
    end
	always @(*) begin
		case (rmask)
			2'd0: mem_rdata = memory[raddr];
			2'd1: mem_rdata = {16'd0,memory[raddr][15:0]};
			2'd2: mem_rdata = {24'd0,memory[raddr][7:0]};
			default: begin end
		endcase
	end
endmodule

module imem (
    input  logic [31:0] addr,
    output logic [31:0] instr
);
    logic [31:0] memory [1024*1024*1024]; // 4GB imem
    assign instr = memory[addr[31:2]];
endmodule

module branch_compare (
    input  wire [31:0] rs1,        
    input  wire [31:0] rs2,        
    input  wire [2:0]       br_cond,    
    output wire             branch_taken 
);
    localparam BEQ  = 3'b000;  
    localparam BNE  = 3'b001;  
    localparam BLT  = 3'b100;  
    localparam BGE  = 3'b101;  
    localparam BLTU = 3'b110;  
    localparam BGEU = 3'b111;  

    wire eq  = (rs1 == rs2);
    wire lt  = ($signed(rs1) < $signed(rs2));   
    wire ltu = (rs1 < rs2);                     
    assign branch_taken = (br_cond == BEQ)  ? eq  :
                          (br_cond == BNE)  ? !eq :
                          (br_cond == BLT)  ? lt  :
                          (br_cond == BGE)  ? !lt :
                          (br_cond == BLTU) ? ltu :
                          (br_cond == BGEU) ? !ltu : 1'b0; 
endmodule

module cpu (
	input clk,
	input rst
	);

	logic [31:0] inst_1;
	logic [31:0] inst_2;
	logic [31:0] pc;
	logic [31:0] imm;
	logic [31:0] alu_out;
	logic mem_wen;
	logic [31:0] mem_wdata;
	logic [31:0] mem_rdata;
	logic [31:0] pc_next;

	logic [6:0] opcode_1;
	logic [31:0] rd1_1;
	logic [31:0] rd2_1;
	logic [3:0] funct3_1;
	logic [4:0] rs1_1;
	logic [4:0] rs2_1;
	logic [6:0] funct7_1;

	logic [6:0] opcode_2;
	logic [31:0] rd1_2;
	logic [31:0] rd2_2;
	logic [3:0] funct3_2;
	logic [4:0] rs1_2;
	logic [4:0] rs2_2;
	logic [6:0] funct7_2;

	logic [31:0] rd1_1;
	logic [31:0] rd2_1;
	logic [31:0] wd_rf;
	logic [31:0] waddr_rf;
	logic we_rf;

	dmem dmem(
		.clk(clk), .addr(alu_out),
		.mem_wen(mem_wen), .mem_wdata(mem_wdata),
		.mem_rdata(mem_rdata)
		);

	imem imem(
		.addr(pc), 
		.instr(inst_1)
		);

	immgen immgen(
		.instruction(inst),
		.immediate(imm)
		);

	branch_compare branch_compare(
		.rs1(rd1_2), .rs2(rd2_2), .br_cond(funct3_2),
		.branch_taken(branch_taken)
		);

	alu_controller alu_controller(
		.alu_op(alu_op), func3(funct3_2),
		.func7(funct7_2), .alu_operation(alu_operation)
		);

	alu alu(
		.alu_operation(alu_operation), .op_A(srcA),
		.op_B(srcB), .result(alu_out), .zero(zero)
		);

	RegisterFile RegisterFile(
		.rs1(rs1_1), .rs2(rs2_1), .we_rf(we_rf),
		.waddr_rf(waddr_rf), .wd_rf(wd_rf), .rd1(rd1_1),
		.rd2(rd2_1)
		);

		always @(*) begin
			opcode_1 = inst_1[6:0];
			rd_1 = inst_1[11:7];
			funct3_1 = inst_1[14:12];
			rs1_1 = inst_1[19:15];
			rs2_1 = inst_1[24:20];
			funct7_1 = inst_1[31:25];

			opcode_2 = inst_2[6:0];
			rd_2 = inst_2[11:7];
			funct3_2 = inst_2[14:12];
			rs1_2 = inst_2[19:15];
			rs2_2 = inst_2[24:20];
			funct7_2 = inst_2[31:25];
		end

		always @(*) begin

		end

		always @(posedge clk) begin
			inst_2 <= inst_1;
		end

endmodule
