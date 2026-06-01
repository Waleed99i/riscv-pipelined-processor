`include "opcode.vh"

module tb_alu_controller;
    logic [1:0] alu_op;
    logic [2:0] func3;
    logic [6:0] func7;
    logic [3:0] alu_operation;

    alu_controller dut(
        .alu_op(alu_op),
        .func3(func3),
        .func7(func7),
        .alu_operation(alu_operation)
    );

    initial begin
        alu_op = 2'b00; func3 = 3'b000; func7 = 7'b0000000; #1;
        if (alu_operation !== 4'b0010) $fatal("Load/store ADD mapping failed");

        alu_op = 2'b01; func3 = 3'b000; func7 = 7'b0000000; #1;
        if (alu_operation !== 4'b0110) $fatal("Branch SUB mapping failed");

        alu_op = 2'b10; func3 = `FNC_ADD_SUB; func7 = `FNC7_0; #1;
        if (alu_operation !== 4'b0010) $fatal("R-type ADD mapping failed");

        func7 = `FNC7_1; #1;
        if (alu_operation !== 4'b0110) $fatal("R-type SUB mapping failed");

        func3 = `FNC_SLL; func7 = `FNC7_0; #1; if (alu_operation !== 4'b0100) $fatal("SLL mapping failed");
        func3 = `FNC_SLT; #1; if (alu_operation !== 4'b1000) $fatal("SLT mapping failed");
        func3 = `FNC_SLTU; #1; if (alu_operation !== 4'b1001) $fatal("SLTU mapping failed");
        func3 = `FNC_XOR;  #1; if (alu_operation !== 4'b0011) $fatal("XOR mapping failed");
        func3 = `FNC_SRL_SRA; func7 = `FNC7_0; #1; if (alu_operation !== 4'b0101) $fatal("SRL mapping failed");
        func7 = `FNC7_1; #1; if (alu_operation !== 4'b0111) $fatal("SRA mapping failed");
        func3 = `FNC_OR;  func7 = `FNC7_0; #1; if (alu_operation !== 4'b0001) $fatal("OR mapping failed");
        func3 = `FNC_AND; #1; if (alu_operation !== 4'b0000) $fatal("AND mapping failed");

        $display("tb_alu_controller PASS");
        $finish;
    end
endmodule
