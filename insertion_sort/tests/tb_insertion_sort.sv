`include "opcode.vh"

module tb_insertion_sort;
    logic clk = 0;
    logic rst = 1;

    cpu dut(
        .clk(clk),
        .rst(rst)
    );

    localparam string DEFAULT_IMEM_FILE = "insertion_sort/build/main.bin";
    localparam int CYCLE_LIMIT = 20000;

    always #5 clk = ~clk;

    task automatic load_imem_binary(input string path);
        integer fd;
        integer rbytes;
        integer idx;
        fd = $fopen(path, "rb");
        if (fd == 0) begin
            $fatal("Failed to open IMEM binary file: %s", path);
        end

        for (idx = 0; idx < 1024*1024; idx++) begin
            rbytes = $fread(dut.imem_inst.memory[idx], fd);
            if (rbytes == 0) begin
                break;
            end
            if (rbytes != 4) begin
                $display("WARNING: partial read (%0d bytes) at word %0d from %s", rbytes, idx, path);
            end
        end

        $fclose(fd);
        $display("Loaded %0d words into IMEM from %s", idx, path);
    endtask

    initial begin
        for (int i = 0; i < 4096; i++) begin
            dut.imem_inst.memory[i] = `INST_NOP;
        end

        string imem_file = DEFAULT_IMEM_FILE;
        if ($value$plusargs("imem=%s", imem_file)) begin
            $display("Using IMEM binary from plusarg: %s", imem_file);
        end else begin
            $display("Using default IMEM binary: %s", imem_file);
        end

        load_imem_binary(imem_file);

        $dumpfile("insertion_sort/tests/insertion_sort.vcd");
        $dumpvars(0, tb_insertion_sort);

        rst = 1;
        @(posedge clk);
        @(posedge clk);
        rst = 0;

        repeat (CYCLE_LIMIT) @(posedge clk);

        $display("Simulation completed after %0d cycles", CYCLE_LIMIT);
        $finish;
    end
endmodule
