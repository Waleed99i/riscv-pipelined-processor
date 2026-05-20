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

    // Zero flag
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

module dmem(
	input clk,
	input [31:0] addr,
	input [31:0] wdata,
	input we,
	output logic [31:0] rdata
	);
	assign rdata = valid? pmem_read(addr, {4'h0,rmask},0):0;
	always @(posedge clk) begin
		if (we && valid) begin 
			pmem_write(addr, wdata, {4'h0,wmask});
		end
	end
endmodule


module cpu (
	input clk,
	input rst
	);

	dmem dmem(
		.clk(clk), .addr()
		);

	immgen immgen(
		
		);

	alu_controller alu_controller(

		);

	alu alu(

		);

	RegisterFile RegisterFile(
		
		);




endmodule
