`include "opcode.vh"

module tb_cpu;
    logic clk = 0;
    logic rst = 1;

    cpu dut(
        .clk(clk),
        .rst(rst)
    );

    always #5 clk = ~clk;

    initial begin
        for (int i = 0; i < 32; i++) dut.rf_inst.rf[i] = 32'd0;
        for (int i = 0; i < 16; i++) dut.dmem_inst.memory[i] = 32'd0;
        for (int i = 0; i < 16; i++) dut.imem_inst.memory[i] = 32'd0;

        dut.imem_inst.memory[0] = 32'h00500093; // addi x1, x0, 5
        dut.imem_inst.memory[1] = 32'h00a08113; // addi x2, x1, 10
        dut.imem_inst.memory[2] = 32'h002081b3; // add x3, x1, x2
        dut.imem_inst.memory[3] = 32'h00108463; // beq x1, x1, +8
        dut.imem_inst.memory[4] = 32'h00100313; // addi x6, x0, 1 (should be flushed)
        dut.imem_inst.memory[5] = 32'h00202023; // sw x2, 0(x0)
        dut.imem_inst.memory[6] = 32'h00002203; // lw x4, 0(x0)
        dut.imem_inst.memory[7] = 32'h00320293; // addi x5, x4, 3

        @(posedge clk);
        @(posedge clk);
        rst = 0;
        repeat (80) @(posedge clk);

        $display("CPU state: x1=%0d x2=%0d x3=%0d x4=%0d x5=%0d x6=%0d pc=%0d mem0=%0d", dut.rf_inst.rf[1], dut.rf_inst.rf[2], dut.rf_inst.rf[3], dut.rf_inst.rf[4], dut.rf_inst.rf[5], dut.rf_inst.rf[6], dut.pc, dut.dmem_inst.memory[0]);

        if (dut.rf_inst.rf[4] !== 32'd15) $fatal("CPU load result failed x4=%08x", dut.rf_inst.rf[4]);
        if (dut.rf_inst.rf[5] !== 32'd18) $fatal("CPU dependent add result failed x5=%08x", dut.rf_inst.rf[5]);
        if (dut.dmem_inst.memory[0] !== 32'd15) $fatal("CPU store result failed mem[0]=%08x", dut.dmem_inst.memory[0]);

        $display("tb_cpu PASS");
        $finish;
    end
endmodule
