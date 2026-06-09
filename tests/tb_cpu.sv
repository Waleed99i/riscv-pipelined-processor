`include "opcode.vh"

module tb_cpu;
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

    function automatic logic [31:0] instr_r(
        input logic [6:0] funct7,
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic [2:0] funct3,
        input logic [4:0] rd
    );
        instr_r = {funct7, rs2, rs1, funct3, rd, `OPC_ARI_RTYPE};
    endfunction

    function automatic logic [31:0] instr_i(
        input logic [31:0] imm,
        input logic [4:0] rs1,
        input logic [2:0] funct3,
        input logic [4:0] rd,
        input logic [6:0] opcode
    );
        instr_i = {imm[11:0], rs1, funct3, rd, opcode};
    endfunction

    function automatic logic [31:0] instr_s(
        input logic [31:0] imm,
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic [2:0] funct3
    );
        instr_s = {imm[11:5], rs2, rs1, funct3, imm[4:0], `OPC_STORE};
    endfunction

    function automatic logic [31:0] instr_b(
        input logic [31:0] imm,
        input logic [4:0] rs2,
        input logic [4:0] rs1,
        input logic [2:0] funct3
    );
        instr_b = {imm[12], imm[10:5], rs2, rs1, funct3, imm[4:1], imm[11], `OPC_BRANCH};
    endfunction

    function automatic logic [31:0] instr_u(
        input logic [31:0] imm,
        input logic [4:0] rd,
        input logic [6:0] opcode
    );
        instr_u = {imm[31:12], rd, opcode};
    endfunction

    function automatic logic [31:0] instr_j(
        input logic [31:0] imm,
        input logic [4:0] rd
    );
        instr_j = {imm[20], imm[10:1], imm[11], imm[19:12], rd, `OPC_JAL};
    endfunction

    initial begin
        for (int i = 0; i < 32; i++) dut.rf_inst.rf[i] = 32'd0;
        for (int i = 0; i < 64; i++) dut.dmem_inst.memory[i] = 32'd0;
        for (int i = 0; i < 64; i++) dut.imem_inst.memory[i] = `INST_NOP;

        dut.imem_inst.memory[0]  = instr_i(32'd5, 5'd0, `FNC_ADD_SUB, 5'd1, `OPC_ARI_ITYPE);  // addi x1, x0, 5
        dut.imem_inst.memory[1]  = instr_i(32'd10, 5'd1, `FNC_ADD_SUB, 5'd2, `OPC_ARI_ITYPE); // addi x2, x1, 10
        dut.imem_inst.memory[2]  = instr_r(`FNC7_0, 5'd2, 5'd1, `FNC_ADD_SUB, 5'd3);          // add x3, x1, x2
        dut.imem_inst.memory[3]  = instr_b(32'd8, 5'd1, 5'd1, `FNC_BEQ);                       // beq x1, x1, +8
        dut.imem_inst.memory[4]  = instr_i(32'd1, 5'd0, `FNC_ADD_SUB, 5'd6, `OPC_ARI_ITYPE);  // addi x6, x0, 1 (should be flushed)
        dut.imem_inst.memory[5]  = instr_s(32'd0, 5'd2, 5'd0, `FNC_SW);                       // sw x2, 0(x0)
        dut.imem_inst.memory[6]  = instr_i(32'd0, 5'd0, `FNC_LW, 5'd4, `OPC_LOAD);            // lw x4, 0(x0)
        dut.imem_inst.memory[7]  = instr_i(32'd3, 5'd4, `FNC_ADD_SUB, 5'd5, `OPC_ARI_ITYPE);  // addi x5, x4, 3
        dut.imem_inst.memory[8]  = instr_i(32'd31, 5'd0, `FNC_ADD_SUB, 5'd7, `OPC_ARI_ITYPE); // addi x7, x0, 31
        dut.imem_inst.memory[9]  = instr_i(32'd10, 5'd0, `FNC_ADD_SUB, 5'd8, `OPC_ARI_ITYPE); // addi x8, x0, 10
        dut.imem_inst.memory[10] = instr_r(`FNC7_1, 5'd8, 5'd7, `FNC_ADD_SUB, 5'd9);          // sub x9, x7, x8
        dut.imem_inst.memory[11] = instr_r(`FNC7_0, 5'd8, 5'd7, `FNC_XOR, 5'd10);             // xor x10, x7, x8
        dut.imem_inst.memory[12] = instr_r(`FNC7_0, 5'd8, 5'd7, `FNC_AND, 5'd11);             // and x11, x7, x8
        dut.imem_inst.memory[13] = instr_r(`FNC7_0, 5'd8, 5'd7, `FNC_OR, 5'd12);              // or x12, x7, x8
        dut.imem_inst.memory[14] = instr_i(32'd3, 5'd1, `FNC_SLL, 5'd13, `OPC_ARI_ITYPE);     // slli x13, x1, 3
        dut.imem_inst.memory[15] = instr_i(32'd2, 5'd13, `FNC_SRL_SRA, 5'd14, `OPC_ARI_ITYPE);// srli x14, x13, 2
        dut.imem_inst.memory[16] = instr_i(-32'sd8, 5'd0, `FNC_ADD_SUB, 5'd15, `OPC_ARI_ITYPE);// addi x15, x0, -8
        dut.imem_inst.memory[17] = instr_i(32'h401, 5'd15, `FNC_SRL_SRA, 5'd16, `OPC_ARI_ITYPE); // srai x16, x15, 1
        dut.imem_inst.memory[18] = instr_r(`FNC7_0, 5'd1, 5'd15, `FNC_SLT, 5'd17);            // slt x17, x15, x1
        dut.imem_inst.memory[19] = instr_r(`FNC7_0, 5'd1, 5'd15, `FNC_SLTU, 5'd18);           // sltu x18, x15, x1
        dut.imem_inst.memory[20] = instr_u(32'h12345000, 5'd19, `OPC_LUI);                    // lui x19, 0x12345
        dut.imem_inst.memory[21] = instr_u(32'h00001000, 5'd20, `OPC_AUIPC);                  // auipc x20, 0x1
        dut.imem_inst.memory[22] = instr_s(32'd4, 5'd15, 5'd0, `FNC_SB);                      // sb x15, 4(x0)
        dut.imem_inst.memory[23] = instr_i(32'd4, 5'd0, `FNC_LB, 5'd21, `OPC_LOAD);           // lb x21, 4(x0)
        dut.imem_inst.memory[24] = instr_i(32'd4, 5'd0, `FNC_LBU, 5'd22, `OPC_LOAD);          // lbu x22, 4(x0)
        dut.imem_inst.memory[25] = instr_s(32'd8, 5'd15, 5'd0, `FNC_SH);                      // sh x15, 8(x0)
        dut.imem_inst.memory[26] = instr_i(32'd8, 5'd0, `FNC_LH, 5'd23, `OPC_LOAD);           // lh x23, 8(x0)
        dut.imem_inst.memory[27] = instr_i(32'd8, 5'd0, `FNC_LHU, 5'd24, `OPC_LOAD);          // lhu x24, 8(x0)
        dut.imem_inst.memory[28] = instr_j(32'd12, 5'd25);                                    // jal x25, +12
        dut.imem_inst.memory[29] = instr_i(32'd1, 5'd25, `FNC_ADD_SUB, 5'd26, `OPC_ARI_ITYPE);// addi x26, x25, 1 (should be flushed)
        dut.imem_inst.memory[30] = instr_i(32'd99, 5'd0, `FNC_ADD_SUB, 5'd6, `OPC_ARI_ITYPE); // addi x6, x0, 99 (should be skipped)
        dut.imem_inst.memory[31] = instr_i(32'd2, 5'd25, `FNC_ADD_SUB, 5'd27, `OPC_ARI_ITYPE);// addi x27, x25, 2
        dut.imem_inst.memory[32] = instr_i(32'd144, 5'd0, `FNC_ADD_SUB, 5'd28, `OPC_ARI_ITYPE);// addi x28, x0, 144
        dut.imem_inst.memory[33] = instr_i(32'd0, 5'd28, `FNC_ADD_SUB, 5'd29, `OPC_JALR);     // jalr x29, 0(x28)
        dut.imem_inst.memory[34] = instr_i(32'd1, 5'd29, `FNC_ADD_SUB, 5'd30, `OPC_ARI_ITYPE);// addi x30, x29, 1 (should be flushed)
        dut.imem_inst.memory[35] = instr_i(32'd77, 5'd0, `FNC_ADD_SUB, 5'd6, `OPC_ARI_ITYPE); // addi x6, x0, 77 (should be skipped)
        dut.imem_inst.memory[36] = instr_i(32'd3, 5'd29, `FNC_ADD_SUB, 5'd31, `OPC_ARI_ITYPE);// addi x31, x29, 3
        dut.imem_inst.memory[37] = instr_j(32'd0, 5'd0);                                      // jal x0, 0

        @(posedge clk);
        @(posedge clk);
        rst = 0;
        repeat (220) @(posedge clk);

        //$display("CPU state: x1=%0d x2=%0d x3=%0d x4=%0d x5=%0d x6=%0d pc=%0d mem0=%0d", dut.rf_inst.rf[1], dut.rf_inst.rf[2], dut.rf_inst.rf[3], dut.rf_inst.rf[4], dut.rf_inst.rf[5], dut.rf_inst.rf[6], dut.pc, dut.dmem_inst.memory[0]);

        if (dut.rf_inst.rf[4] !== 32'd15) $fatal("CPU load result failed x4=%08x", dut.rf_inst.rf[4]);
        if (dut.rf_inst.rf[5] !== 32'd18) $fatal("CPU dependent add result failed x5=%08x", dut.rf_inst.rf[5]);
        if (dut.dmem_inst.memory[0] !== 32'd15) $fatal("CPU store result failed mem[0]=%08x", dut.dmem_inst.memory[0]);
        if (dut.rf_inst.rf[6] !== 32'd0) $fatal("CPU flushed/skipped instruction wrote x6=%08x", dut.rf_inst.rf[6]);
        if (dut.rf_inst.rf[9] !== 32'd21) $fatal("CPU sub result failed x9=%08x", dut.rf_inst.rf[9]);
        if (dut.rf_inst.rf[10] !== 32'd21) $fatal("CPU xor result failed x10=%08x", dut.rf_inst.rf[10]);
        if (dut.rf_inst.rf[11] !== 32'd10) $fatal("CPU and result failed x11=%08x", dut.rf_inst.rf[11]);
        if (dut.rf_inst.rf[12] !== 32'd31) $fatal("CPU or result failed x12=%08x", dut.rf_inst.rf[12]);
        if (dut.rf_inst.rf[13] !== 32'd40) $fatal("CPU slli result failed x13=%08x", dut.rf_inst.rf[13]);
        if (dut.rf_inst.rf[14] !== 32'd10) $fatal("CPU srli result failed x14=%08x", dut.rf_inst.rf[14]);
        if (dut.rf_inst.rf[16] !== -32'sd4) $fatal("CPU srai result failed x16=%08x", dut.rf_inst.rf[16]);
        if (dut.rf_inst.rf[17] !== 32'd1) $fatal("CPU slt result failed x17=%08x", dut.rf_inst.rf[17]);
        if (dut.rf_inst.rf[18] !== 32'd0) $fatal("CPU sltu result failed x18=%08x", dut.rf_inst.rf[18]);
        if (dut.rf_inst.rf[19] !== 32'h12345000) $fatal("CPU lui result failed x19=%08x", dut.rf_inst.rf[19]);
        if (dut.rf_inst.rf[20] !== 32'h00001054) $fatal("CPU auipc result failed x20=%08x", dut.rf_inst.rf[20]);
        if (dut.rf_inst.rf[21] !== 32'hfffffff8) $fatal("CPU lb result failed x21=%08x", dut.rf_inst.rf[21]);
        if (dut.rf_inst.rf[22] !== 32'h000000f8) $fatal("CPU lbu result failed x22=%08x", dut.rf_inst.rf[22]);
        if (dut.rf_inst.rf[23] !== 32'hfffffff8) $fatal("CPU lh result failed x23=%08x", dut.rf_inst.rf[23]);
        if (dut.rf_inst.rf[24] !== 32'h0000fff8) $fatal("CPU lhu result failed x24=%08x", dut.rf_inst.rf[24]);
        if (dut.rf_inst.rf[25] !== 32'd116) $fatal("CPU jal link failed x25=%08x", dut.rf_inst.rf[25]);
        if (dut.rf_inst.rf[26] !== 32'd0) $fatal("CPU jal flush failed x26=%08x", dut.rf_inst.rf[26]);
        if (dut.rf_inst.rf[27] !== 32'd118) $fatal("CPU jal target/dependency failed x27=%08x", dut.rf_inst.rf[27]);
        if (dut.rf_inst.rf[29] !== 32'd136) $fatal("CPU jalr link failed x29=%08x", dut.rf_inst.rf[29]);
        if (dut.rf_inst.rf[30] !== 32'd0) $fatal("CPU jalr flush failed x30=%08x", dut.rf_inst.rf[30]);
        if (dut.rf_inst.rf[31] !== 32'd139) $fatal("CPU jalr target/dependency failed x31=%08x", dut.rf_inst.rf[31]);

        $display("\033[0;32mtb_cpu PASS\033[0m");
        $finish;
    end
endmodule
