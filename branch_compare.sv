`include "opcode.vh"

module branch_compare (
    input  wire [31:0] rs1,        
    input  wire [31:0] rs2,        
    input  wire [2:0]       br_cond,    
    output wire             branch_taken 
);
    localparam BEQ  = 3'b000;  
    localparam BNE  = 3'b001;  
    localparam BLT  = 3'b100;  
    localparam BGE  = 3'b101;  
    localparam BLTU = 3'b110;  
    localparam BGEU = 3'b111;  

    wire eq  = (rs1 == rs2);
    wire lt  = ($signed(rs1) < $signed(rs2));   
    wire ltu = (rs1 < rs2);                     
    assign branch_taken = (br_cond == BEQ)  ? eq  :
                          (br_cond == BNE)  ? !eq :
                          (br_cond == BLT)  ? lt  :
                          (br_cond == BGE)  ? !lt :
                          (br_cond == BLTU) ? ltu :
                          (br_cond == BGEU) ? !ltu : 1'b0; 
endmodule

