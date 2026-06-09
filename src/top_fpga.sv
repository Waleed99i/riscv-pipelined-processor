module top_fpga (
    input  logic clk,    // Physical 100 MHz oscillator
    input  logic rst,    // Physical reset button
    output logic an0, an1, an2, an3, an4, an5, an6, an7,
    output logic segA, segB, segC, segD, segE, segF, segG
);

    // 1. Clock divider to run the CPU slow (1 Hz) so live sorting is visible
    logic clk_cpu;
    logic [26:0] clk_div;
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            clk_div <= 0;
            clk_cpu <= 0;
        end else begin
            if (clk_div == 27'd50_000_000 - 1) begin // Divide 100MHz to 1Hz
                clk_div <= 0;
                clk_cpu <= ~clk_cpu;
            end else begin
                clk_div <= clk_div + 1;
            end
        end
    end

    // 2. Instantiate CPU running on the slow clock
    logic [31:0] val0, val1, val2, val3;
    cpu dut (
        .clk(clk_cpu),
        .rst(rst),
        .val0(val0),
        .val1(val1),
        .val2(val2),
        .val3(val3)
    );

    // 3. Format values for unpacked array input in sim_dis
    logic [3:0] disp_nums [7:0];
    assign disp_nums[0] = val3[3:0]; // Show lower nibble of the array
    assign disp_nums[1] = val2[3:0];
    assign disp_nums[2] = val1[3:0];
    assign disp_nums[3] = val0[3:0];
    assign disp_nums[4] = 4'd0;
    assign disp_nums[5] = 4'd0;
    assign disp_nums[6] = 4'd0;
    assign disp_nums[7] = 4'd0;

    // 4. Instantiate Display Driver running on the fast 100 MHz clock
    sim_dis display_inst (
        .clk(clk),
        .reset(rst),
        .num(disp_nums),
        .an0(an0), .an1(an1), .an2(an2), .an3(an3),
        .an4(an4), .an5(an5), .an6(an6), .an7(an7),
        .segA(segA), .segB(segB), .segC(segC), .segD(segD),
        .segE(segE), .segF(segF), .segG(segG)
    );

endmodule
