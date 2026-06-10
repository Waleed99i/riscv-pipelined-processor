`include "opcode.vh"

module imem (
    input  logic [31:0] addr,
    output logic [31:0] instr
);
    logic [31:0] memory [256]; // 1024B imem (256 words)

    initial begin
        $readmemh("insertion_sort/build/main.txt", memory);
    end

    assign instr = memory[addr[9:2]];
endmodule

