`include "opcode.vh"

module tb_alu;
    logic [31:0] opA, opB;
    logic [3:0] alu_operation;
    logic [31:0] result;
    logic zero;

    alu dut(
        .op_A(opA),
        .op_B(opB),
        .alu_operation(alu_operation),
        .result(result),
        .zero(zero)
    );

    initial begin
        opA = 32'hff00ff00; opB = 32'h0f0f0f0f;
        alu_operation = 4'b0000; #1; if (result !== 32'h0f000f00) $fatal("AND failed");
        alu_operation = 4'b0001; #1; if (result !== 32'hff0fff0f) $fatal("OR failed");
        alu_operation = 4'b0010; #1; if (result !== 32'h0e100e0f) $fatal("ADD failed");
        alu_operation = 4'b0011; #1; if (result !== 32'hf00ff00f) $fatal("XOR failed");
        alu_operation = 4'b0100; opA = 32'd1; opB = 32'd3; #1; if (result !== 32'd8) $fatal("SLL failed");
        alu_operation = 4'b0101; opA = 32'h80000000; opB = 32'd1; #1; if (result !== 32'h40000000) $fatal("SRL failed");
        alu_operation = 4'b0110; opA = 32'd20; opB = 32'd5; #1; if (result !== 32'd15) $fatal("SUB failed");
        alu_operation = 4'b0111; opA = -32'sd2; opB = 32'd1; #1; if (result !== -32'sd1) $fatal("SRA failed");
        alu_operation = 4'b1000; opA = -32'sd5; opB = 32'd3; #1; if (result !== 32'd1) $fatal("SLT failed");
        alu_operation = 4'b1001; opA = 32'd3; opB = 32'd5; #1; if (result !== 32'd1) $fatal("SLTU failed");
        $display("tb_alu PASS");
        $finish;
    end
endmodule
