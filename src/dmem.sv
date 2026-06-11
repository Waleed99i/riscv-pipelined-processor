`include "opcode.vh"

module dmem (
    input  logic        clk,
    input  logic        mem_wen,
    input  logic [31:0] addr,
    input  logic [1:0]  rmask,
    input  logic [1:0]  wmask,
    input  logic        load_unsigned,
    input  logic [31:0] mem_wdata,
    output logic [31:0] mem_rdata,
    output logic [31:0] val0,
    output logic [31:0] val1,
    output logic [31:0] val2,
    output logic [31:0] val3
);
    logic [31:0] memory [256]; // 1024B dmem (256 words)

    initial begin
        $readmemh("insertion_sort/build/main.txt", memory);
    end

    assign val0 = memory[128];
    assign val1 = memory[129];
    assign val2 = memory[130];
    assign val3 = memory[131];

    logic [7:0] word_addr;
    assign word_addr = addr[9:2];

    always_ff @(posedge clk) begin
        if (mem_wen) begin
            case (wmask)
                2'd0: memory[word_addr] = mem_wdata;
                2'd1: begin // halfword store
                    case (addr[1:0])
                        2'd0: memory[word_addr] = {memory[word_addr][31:16], mem_wdata[15:0]};
                        2'd2: memory[word_addr] = {mem_wdata[15:0], memory[word_addr][15:0]};
                        default: memory[word_addr] = memory[word_addr]; // unaligned halfword, ignore
                    endcase
                end
                2'd2: begin // byte store
                    case (addr[1:0])
                        2'd0: memory[word_addr] = {memory[word_addr][31:8], mem_wdata[7:0]};
                        2'd1: memory[word_addr] = {memory[word_addr][31:16], mem_wdata[7:0], memory[word_addr][7:0]};
                        2'd2: memory[word_addr] = {memory[word_addr][31:24], mem_wdata[7:0], memory[word_addr][15:0]};
                        2'd3: memory[word_addr] = {mem_wdata[7:0], memory[word_addr][23:0]};
                        default: memory[word_addr] = memory[word_addr];
                    endcase
                end
                default: memory[word_addr] = memory[word_addr];
            endcase
        end
    end

    always_comb begin
        logic [31:0] current_word;
        logic [15:0] half_word;
        logic [7:0] byte_val;
        current_word = memory[word_addr];

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

