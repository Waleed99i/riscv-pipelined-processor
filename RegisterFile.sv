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

