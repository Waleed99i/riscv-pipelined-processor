// List of RISC-V opcodes and funct codes.
// Use `include "opcode.vh" to use these in the decoder

`ifndef OPCODE
`define OPCODE


// ***** Opcodes *****
// CSR instructions
`define OPC_CSR         7'b1110011

// Special immediate instructions
`define OPC_LUI         7'b0110111
`define OPC_AUIPC       7'b0010111

// Jump instructions
`define OPC_JAL         7'b1101111
`define OPC_JALR        7'b1100111

// Branch instructions
`define OPC_BRANCH      7'b1100011

// Load and store instructions
`define OPC_STORE       7'b0100011
`define OPC_LOAD        7'b0000011

// Arithmetic instructions
`define OPC_ARI_RTYPE   7'b0110011
`define OPC_ARI_ITYPE   7'b0010011

// ***** Function codes *****

// Branch function codes
`define FNC_BEQ         3'b000
`define FNC_BNE         3'b001
`define FNC_BLT         3'b100
`define FNC_BGE         3'b101
`define FNC_BLTU        3'b110
`define FNC_BGEU        3'b111

// Load and store function codes
`define FNC_LB          3'b000
`define FNC_LH          3'b001
`define FNC_LW          3'b010
`define FNC_LBU         3'b100
`define FNC_LHU         3'b101
`define FNC_SB          3'b000
`define FNC_SH          3'b001
`define FNC_SW          3'b010

// Arithmetic R-type and I-type functions codes
`define FNC_ADD_SUB     3'b000
`define FNC_SLL         3'b001
`define FNC_SLT         3'b010
`define FNC_SLTU        3'b011
`define FNC_XOR         3'b100
`define FNC_OR          3'b110
`define FNC_AND         3'b111
`define FNC_SRL_SRA     3'b101

// ADD and SUB use the same opcode + function code
// SRA and SRL also use the same opcode + function code
// For these operations, we also need to look at bit 30 of the instruction
`define FNC2_ADD        1'b0
`define FNC2_SUB        1'b1
`define FNC2_SRL        1'b0
`define FNC2_SRA        1'b1

`define FNC7_0          7'b0000000 // ADD, SRL
`define FNC7_1          7'b0100000 // SUB, SRA

// ***** Special instructions *****
`define INST_NOP        {12'd0, 5'd0, `FNC_ADD_SUB, 5'd0, `OPC_ARI_ITYPE}

`endif //OPCODE


module tb_with_hazards;
    logic clk = 0;
    logic rst = 1;

    cpu dut(
        .clk(clk),
        .rst(rst)
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

    initial begin
        // Initialize registers and memory
        for (int i = 0; i < 32; i++) dut.rf_inst.rf[i] = 32'd0;
        for (int i = 0; i < 64; i++) dut.dmem_inst.memory[i] = 32'd0;
        for (int i = 0; i < 64; i++) dut.imem_inst.memory[i] = `INST_NOP;

        // Load instructions:
        // addi x1, x0, 6
        dut.imem_inst.memory[0] = instr_i(32'd6, 5'd0, `FNC_ADD_SUB, 5'd1, `OPC_ARI_ITYPE);

        // addi x2, x0, 2
        dut.imem_inst.memory[1] = instr_i(32'd2, 5'd0, `FNC_ADD_SUB, 5'd2, `OPC_ARI_ITYPE);

        // add x4, x1, x2
        dut.imem_inst.memory[2] = instr_r(`FNC7_0, 5'd2, 5'd1, `FNC_ADD_SUB, 5'd4);

        // sw x4, 0x20(x0)
        dut.imem_inst.memory[3] = instr_s(32'h20, 5'd4, 5'd0, `FNC_SW);

        // lw x9, 0x20(x0)
        dut.imem_inst.memory[4] = instr_i(32'h20, 5'd0, `FNC_LW, 5'd9, `OPC_LOAD);

        // add x5, x9, x2
        dut.imem_inst.memory[5] = instr_r(`FNC7_0, 5'd2, 5'd9, `FNC_ADD_SUB, 5'd5);

        // add x11, x1, x2
        dut.imem_inst.memory[6] = instr_r(`FNC7_0, 5'd2, 5'd1, `FNC_ADD_SUB, 5'd11);

        // beq x4, x11, label (branch forward by 2 instructions to skip the next 2 instructions)
        // Offset should be 8 (2 instructions * 4 bytes)
        dut.imem_inst.memory[7] = instr_b(32'd12, 5'd11, 5'd4, `FNC_BEQ);

        // addi x9, x0, 2 (skipped if branch taken)
        dut.imem_inst.memory[8] = instr_i(32'd2, 5'd0, `FNC_ADD_SUB, 5'd9, `OPC_ARI_ITYPE);

        // addi x4, x0, 16 (skipped if branch taken)
        dut.imem_inst.memory[9] = instr_i(32'd16, 5'd0, `FNC_ADD_SUB, 5'd4, `OPC_ARI_ITYPE);

        // label: or x2, x9, x4
        dut.imem_inst.memory[10] = instr_r(`FNC7_0, 5'd4, 5'd9, `FNC_OR, 5'd2);

        // NOP for final cycle
        dut.imem_inst.memory[11] = `INST_NOP;

        // Release reset after a few cycles
        @(negedge clk);
        @(negedge clk);
        rst = 0;

        // Run simulation for enough cycles to complete all instructions
        // With a 3-stage pipeline, we need instruction count + 2 cycles
        repeat(100) @(posedge clk);

        $finish;
    end

endmodule
