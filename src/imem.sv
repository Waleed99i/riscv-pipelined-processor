`include "opcode.vh"

module imem (
    input  logic [31:0] addr,
    output logic [31:0] instr
);
    logic [31:0] memory [1024*1024]; // 1MB imem
    assign instr = memory[addr[21:2]];
endmodule

