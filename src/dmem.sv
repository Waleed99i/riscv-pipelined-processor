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

//    initial begin
//        $readmemh("/home/waleed/Documents/6th_semester/CA_LAB/riscv-pipelined-processor/insertion_sort/build/main.mem", memory);
//    end
//


initial begin
	memory[0] = 32'h40000113; 
	memory[1] = 32'h008000ef;
	memory[2] = 32'h0000006f;
	memory[3] = 32'hff010113;
	memory[4] = 32'h00112623;
	memory[5] = 32'h00812423;
	memory[6] = 32'h01010413;
	memory[7] = 32'h00400513;
	memory[8] = 32'h01c000ef;
	memory[9] = 32'h00000793;
	memory[10] = 32'h00078513;
	memory[11] = 32'h00c12083;
	memory[12] = 32'h00812403;
	memory[13] = 32'h01010113;
	memory[14] = 32'h00008067;
	memory[15] = 32'hfd010113;
	memory[16] = 32'h02812623;
	memory[17] = 32'h03010413;
	memory[18] = 32'hfca42e23;
	memory[19] = 32'h00100793;
	memory[20] = 32'hfef42623;
	memory[21] = 32'h0b00006f;
	memory[22] = 32'h20000713;
	memory[23] = 32'hfec42783;
	memory[24] = 32'h00279793;
	memory[25] = 32'h00f707b3;
	memory[26] = 32'h0007a783;
	memory[27] = 32'hfef42223;
	memory[28] = 32'hfec42783;
	memory[29] = 32'hfff78793;
	memory[30] = 32'hfef42423;
	memory[31] = 32'h03c0006f;
	memory[32] = 32'hfe842783;
	memory[33] = 32'h00178793;
	memory[34] = 32'h20000693;
	memory[35] = 32'hfe842703;
	memory[36] = 32'h00271713;
	memory[37] = 32'h00e68733;
	memory[38] = 32'h00072703;
	memory[39] = 32'h20000693;
	memory[40] = 32'h00279793;
	memory[41] = 32'h00f687b3;
	memory[42] = 32'h00e7a023;
	memory[43] = 32'hfe842783;
	memory[44] = 32'hfff78793;
	memory[45] = 32'hfef42423;
	memory[46] = 32'hfe842783;
	memory[47] = 32'h0207c063;
	memory[48] = 32'h20000713;
	memory[49] = 32'hfe842783;
	memory[50] = 32'h00279793;
	memory[51] = 32'h00f707b3;
	memory[52] = 32'h0007a783;
	memory[53] = 32'hfe442703;
	memory[54] = 32'hfaf744e3;
	memory[55] = 32'hfe842783;
	memory[56] = 32'h00178793;
	memory[57] = 32'h20000713;
	memory[58] = 32'h00279793;
	memory[59] = 32'h00f707b3;
	memory[60] = 32'hfe442703;
	memory[61] = 32'h00e7a023;
	memory[62] = 32'hfec42783;
	memory[63] = 32'h00178793;
	memory[64] = 32'hfef42623;
	memory[65] = 32'hfec42703;
	memory[66] = 32'hfdc42783;
	memory[67] = 32'hf4f746e3;
	memory[68] = 32'h00000013;
	memory[69] = 32'h00000013;
	memory[70] = 32'h02c12403;
	memory[71] = 32'h03010113;
	memory[72] = 32'h00008067;
	memory[73] = 32'h00000000;
	memory[74] = 32'h00000000;
	memory[75] = 32'h00000000;
	memory[76] = 32'h00000000;
	memory[77] = 32'h00000000;
	memory[78] = 32'h00000000;
	memory[79] = 32'h00000000;
	memory[80] = 32'h00000000;
	memory[81] = 32'h00000000;
	memory[82] = 32'h00000000;
	memory[83] = 32'h00000000;
	memory[84] = 32'h00000000;
	memory[85] = 32'h00000000;
	memory[86] = 32'h00000000;
	memory[87] = 32'h00000000;
	memory[88] = 32'h00000000;
	memory[89] = 32'h00000000;
	memory[90] = 32'h00000000;
	memory[91] = 32'h00000000;
	memory[92] = 32'h00000000;
	memory[93] = 32'h00000000;
	memory[94] = 32'h00000000;
	memory[95] = 32'h00000000;
	memory[96] = 32'h00000000;
	memory[97] = 32'h00000000;
	memory[98] = 32'h00000000;
	memory[99] = 32'h00000000;
	memory[100] = 32'h00000000;
	memory[101] = 32'h00000000;
	memory[102] = 32'h00000000;
	memory[103] = 32'h00000000;
	memory[104] = 32'h00000000;
	memory[105] = 32'h00000000;
	memory[106] = 32'h00000000;
	memory[107] = 32'h00000000;
	memory[108] = 32'h00000000;
	memory[109] = 32'h00000000;
	memory[110] = 32'h00000000;
	memory[111] = 32'h00000000;
	memory[112] = 32'h00000000;
	memory[113] = 32'h00000000;
	memory[114] = 32'h00000000;
	memory[115] = 32'h00000000;
	memory[116] = 32'h00000000;
	memory[117] = 32'h00000000;
	memory[118] = 32'h00000000;
	memory[119] = 32'h00000000;
	memory[120] = 32'h00000000;
	memory[121] = 32'h00000000;
	memory[122] = 32'h00000000;
	memory[123] = 32'h00000000;
	memory[124] = 32'h00000000;
	memory[125] = 32'h00000000;
	memory[126] = 32'h00000000;
	memory[127] = 32'h00000000;
	memory[128] = 32'h00000002;
	memory[129] = 32'h00000004;
	memory[130] = 32'h00000001;
	memory[131] = 32'h00000003;
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

