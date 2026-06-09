`include "opcode.vh"

module imem (
    input  logic [31:0] addr,
    output logic [31:0] instr
);
    logic [31:0] memory [2048]; // 8KB imem (2048 words)

    initial begin
        $readmemh("insertion_sort/build_local/main.txt", memory);
    end

    assign instr = memory[addr[12:2]];
endmodule

