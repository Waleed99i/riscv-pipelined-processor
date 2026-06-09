`include "opcode.vh"

module tb_insertion_sort;
		logic clk = 0;
		logic rst = 1;
    cpu dut(
        .clk(clk),
        .rst(rst),
        .val0(),
        .val1(),
        .val2(),
        .val3()
    );
		always #5 clk = ~clk;
    initial begin
        // Initialize registers
        for (int i = 0; i < 32; i++) dut.rf_inst.rf[i] = 32'd0;

        // Load the compiled binary from build_local
        $readmemh("insertion_sort/build/main.txt", dut.imem_inst.memory);
        $readmemh("insertion_sort/build/main.txt", dut.dmem_inst.memory);

        @(posedge clk);
        @(posedge clk);
        rst = 0;
    end

    // Monitor for the program reaching the end of main.
    // Since main is at 0x00, we just wait for the `ret` instruction.
    // The exact PC of `ret` depends on compilation, but when `main` returns,
    // `pc` will be set to 0 (since `ra` is 0).
    // We can also just wait a fixed number of cycles.
    initial begin
        // Wait for reset to deassert
        @(negedge rst);
        
        // Wait a few cycles to let PC leave 0
        repeat (5) @(posedge clk);

        // main() returns to 0 when it finishes because `ra` is 0.
        // We wait for PC to hit 0 again to know the program completed exactly one pass.
        wait(dut.pc == 32'd0);
        
        // Wait a couple more cycles to ensure all pipeline stages complete
        repeat (2) @(posedge clk);

        $display("Execution finished.");
        
        // Validate the sorted array at dmem[0:3]
        if (dut.dmem_inst.memory[0] !== 32'd1) $fatal(1, "arr[0] failed: %0d", dut.dmem_inst.memory[0]);
        if (dut.dmem_inst.memory[1] !== 32'd2) $fatal(1, "arr[1] failed: %0d", dut.dmem_inst.memory[1]);
        if (dut.dmem_inst.memory[2] !== 32'd3) $fatal(1, "arr[2] failed: %0d", dut.dmem_inst.memory[2]);
        if (dut.dmem_inst.memory[3] !== 32'd4) $fatal(1, "arr[3] failed: %0d", dut.dmem_inst.memory[3]);

        $display("\033[0;32mtb_insertion_sort PASS\033[0m");
        $finish;
    end

endmodule
