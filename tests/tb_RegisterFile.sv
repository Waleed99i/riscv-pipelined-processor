`include "opcode.vh"

module tb_RegisterFile;
    logic clk = 0;
    logic [4:0] rs1, rs2, waddr_rf;
    logic we_rf;
    logic [31:0] wd_rf;
    logic [31:0] rd1, rd2;

    RegisterFile dut(
        .clk(clk),
        .rs1(rs1),
        .rs2(rs2),
        .we_rf(we_rf),
        .waddr_rf(waddr_rf),
        .wd_rf(wd_rf),
        .rd1(rd1),
        .rd2(rd2)
    );

    always #5 clk = ~clk;

    initial begin
        for (int i = 0; i < 32; i++) dut.rf[i] = 32'd0;
        we_rf = 0; rs1 = 5'd0; rs2 = 5'd0; @(posedge clk);

        waddr_rf = 5'd1; wd_rf = 32'hDEADBEEF; we_rf = 1; @(posedge clk);
        we_rf = 0; rs1 = 5'd1; rs2 = 5'd0; @(posedge clk);
        if (rd1 !== 32'hDEADBEEF) $fatal("Register write/read failed");

        waddr_rf = 5'd0; wd_rf = 32'hCAFEBABE; we_rf = 1; @(posedge clk);
        we_rf = 0; @(posedge clk);
        if (dut.rf[0] !== 32'd0) $fatal("x0 must stay zero");

        $display("tb_RegisterFile PASS");
        $finish;
    end
endmodule
