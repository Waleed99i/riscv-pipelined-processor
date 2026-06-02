`include "opcode.vh"

module tb_branch_compare;
    logic [31:0] rs1, rs2;
    logic [2:0] br_cond;
    logic branch_taken;

    branch_compare dut(
        .rs1(rs1),
        .rs2(rs2),
        .br_cond(br_cond),
        .branch_taken(branch_taken)
    );

    initial begin
        rs1 = 32'd5; rs2 = 32'd5; br_cond = `FNC_BEQ; #1; if (!branch_taken) $fatal("BEQ failed");
        br_cond = `FNC_BNE; #1; if (branch_taken) $fatal("BNE failed");
        rs1 = -32'sd3; rs2 = 32'd2; br_cond = `FNC_BLT; #1; if (!branch_taken) $fatal("BLT failed");
        br_cond = `FNC_BGE; #1; if (branch_taken) $fatal("BGE failed");
        rs1 = 32'd1; rs2 = 32'd2; br_cond = `FNC_BLTU; #1; if (!branch_taken) $fatal("BLTU failed");
        br_cond = `FNC_BGEU; #1; if (branch_taken) $fatal("BGEU failed");
        $display("\033[0;32mtb_branch_compare PASS\033[0m");
        $finish;
    end
endmodule
