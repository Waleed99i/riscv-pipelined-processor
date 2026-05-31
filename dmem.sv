`include "opcode.vh"

module dmem (
    input  logic        clk,
    input  logic        mem_wen,
    input  logic [31:0] addr,
    input  logic [1:0]  rmask,
    input  logic [1:0]  wmask,
    input  logic [31:0] mem_wdata,
    output logic [31:0] mem_rdata
);
    logic [31:0] memory [1024*1024] = '{default: '0};
    always_ff @(posedge clk) begin
        if (mem_wen) begin
            memory[addr] <= mem_wdata;
			case (wmask)
				2'd0: memory[addr] <= mem_wdata;
				2'd1: memory[addr] <= {16'd0,mem_wdata[15:0]};
				2'd2: memory[addr] <= {24'd0,mem_wdata[7:0]};
				default: begin end
			endcase
        end
    end
	always @(*) begin
		case (rmask)
			2'd0: mem_rdata = memory[addr];
			2'd1: mem_rdata = {16'd0,memory[addr][15:0]};
			2'd2: mem_rdata = {24'd0,memory[addr][7:0]};
			default: begin end
		endcase
	end
endmodule

