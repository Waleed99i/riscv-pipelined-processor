`include "opcode.vh"

module dmem (
    input  logic        clk,
    input  logic        mem_wen,
    input  logic [31:0] addr,
    input  logic [1:0]  rmask,
    input  logic [1:0]  wmask,
    input  logic        load_unsigned,
    input  logic [31:0] mem_wdata,
    output logic [31:0] mem_rdata
);
    reg [31:0] memory [1024*1024];

    always_ff @(posedge clk) begin
        if (mem_wen) begin
            case (wmask)
                2'd0: memory[addr[21:2]] = mem_wdata;
                2'd1: begin // halfword store
                    case (addr[1:0])
                        2'd0: memory[addr[21:2]] = {memory[addr[21:2]][31:16], mem_wdata[15:0]};
                        2'd2: memory[addr[21:2]] = {mem_wdata[15:0], memory[addr[21:2]][15:0]};
                        default: memory[addr[21:2]] = memory[addr[21:2]]; // unaligned halfword, ignore
                    endcase
                end
                2'd2: begin // byte store
                    case (addr[1:0])
                        2'd0: memory[addr[21:2]] = {memory[addr[21:2]][31:8], mem_wdata[7:0]};
                        2'd1: memory[addr[21:2]] = {memory[addr[21:2]][31:16], mem_wdata[7:0], memory[addr[21:2]][7:0]};
                        2'd2: memory[addr[21:2]] = {memory[addr[21:2]][31:24], mem_wdata[7:0], memory[addr[21:2]][15:0]};
                        2'd3: memory[addr[21:2]] = {mem_wdata[7:0], memory[addr[21:2]][23:0]};
                        default: memory[addr[21:2]] = memory[addr[21:2]];
                    endcase
                end
                default: memory[addr[21:2]] = memory[addr[21:2]];
            endcase
        end
    end

    always_comb begin
        logic [31:0] current_word;
        logic [15:0] half_word;
        logic [7:0] byte_val;
        current_word = memory[addr[21:2]];

        case (rmask)
            2'd0: mem_rdata = current_word;
            2'd1: begin // halfword load
                if (addr[1:0] == 2'd2) half_word = current_word[31:16];
                else half_word = current_word[15:0];
                if (load_unsigned) mem_rdata = {16'd0, half_word};
                else mem_rdata = {{16{half_word[15]}}, half_word};
            end
            2'd2: begin // byte load
                case (addr[1:0])
                    2'd0: byte_val = current_word[7:0];
                    2'd1: byte_val = current_word[15:8];
                    2'd2: byte_val = current_word[23:16];
                    default: byte_val = current_word[31:24];
                endcase
                if (load_unsigned) mem_rdata = {24'd0, byte_val};
                else mem_rdata = {{24{byte_val[7]}}, byte_val};
            end
            default: mem_rdata = 32'd0;
        endcase
    end
endmodule

