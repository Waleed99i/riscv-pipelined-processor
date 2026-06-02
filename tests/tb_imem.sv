`include "opcode.vh"

module tb_imem;
    logic [31:0] addr;
    logic [31:0] instr;

    imem dut(
        .addr(addr),
        .instr(instr)
    );

    initial begin
        dut.memory[0] = 32'hDEADBEEF;
        dut.memory[1] = 32'hCAFEBABE;

        addr = 32'd0; #1; if (instr !== 32'hDEADBEEF) $fatal("IMEM read word 0 failed");
        addr = 32'd4; #1; if (instr !== 32'hCAFEBABE) $fatal("IMEM read word 1 failed");

        $display("\033[0;32mtb_imem PASS\033[0m");
        $finish;
    end
endmodule
