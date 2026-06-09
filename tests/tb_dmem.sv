`include "opcode.vh"

module tb_dmem;
    logic clk = 0;
    logic mem_wen;
    logic [31:0] addr;
    logic [1:0] rmask;
    logic [1:0] wmask;
    logic load_unsigned;
    logic [31:0] mem_wdata;
    logic [31:0] mem_rdata;

    dmem dut(
        .clk(clk),
        .mem_wen(mem_wen),
        .addr(addr),
        .rmask(rmask),
        .wmask(wmask),
        .load_unsigned(load_unsigned),
        .mem_wdata(mem_wdata),
        .mem_rdata(mem_rdata),
        .val0(),
        .val1(),
        .val2(),
        .val3()
    );

    always #5 clk = ~clk;

    initial begin
        for (int i = 0; i < 16; i++) dut.memory[i] = 32'd0;

        addr = 32'd0; mem_wdata = 32'h12345678; wmask = 2'd0; mem_wen = 1;
        @(posedge clk); #1 mem_wen = 0;
        #1;
        rmask = 2'd0; load_unsigned = 1;
        @(posedge clk);
        if (mem_rdata !== 32'h12345678) $fatal("Word store/load failed");

        #1;
        addr = 32'd2; mem_wdata = 32'h0000ABCD; wmask = 2'd1; mem_wen = 1;
        @(posedge clk); #1 mem_wen = 0;
        #1;
        addr = 32'd2; rmask = 2'd1; load_unsigned = 0;
        @(posedge clk);
        if (mem_rdata !== 32'hFFFFABCD) $fatal("Signed halfword load failed");

        #1;
        addr = 32'd1; mem_wdata = 32'h000000EF; wmask = 2'd2; mem_wen = 1;
        @(posedge clk); #1 mem_wen = 0;
        #1;
        addr = 32'd1; rmask = 2'd2; load_unsigned = 1;
        @(posedge clk);
        if (mem_rdata !== 32'h000000EF) $fatal("Unsigned byte load failed");

        $display("\033[0;32mtb_dmem PASS\033[0m");
        $finish;
    end
endmodule
