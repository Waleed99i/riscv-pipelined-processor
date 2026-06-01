`include "opcode.vh"

module tb_immgen;
    logic [31:0] instruction;
    logic [31:0] immediate;

    immgen dut(
        .instruction(instruction),
        .immediate(immediate)
    );

    initial begin
        // I-type addi x1, x0, -1
        instruction = 32'b111111111111_00000_000_00001_0010011;
            #1;
        if (immediate !== 32'hFFFFFFFF) $fatal("I-type sign extension failed");

        // S-type store word: sw x1, 4(x2)
        instruction = 32'b0000000_00001_00010_010_00100_0100011;
            #1;
        if (immediate !== 32'd4) $fatal("S-type immediate failed");

        // B-type branch: beq x1, x2, 8
        instruction = 32'b00000000001000001000010001100011;
            #1;
        if (immediate !== 32'd8) $fatal("B-type immediate failed");

        // U-type: auipc x5, 0x12345
        instruction = 32'b00010010001101000101001010010111; #1;
        if (immediate !== 32'h12345000) $fatal("U-type immediate failed");

        // J-type: jal x1, 16
        instruction = 32'b00000001000000000000000011101111; #1;
        if (immediate !== 32'd16) $fatal("J-type immediate failed");

        $display("tb_immgen PASS");
        $finish;
    end
endmodule
