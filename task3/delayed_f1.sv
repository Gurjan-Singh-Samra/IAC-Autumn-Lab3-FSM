module delayed_f1 #(
        parameter   N_WIDTH = 16,
                    D_WIDTH = 8

)(
    input logic                 clk,
    input logic                 rst,
    input logic                 en,
    input logic [N_WIDTH-1:0]   N,
    output logic [D_WIDTH-1:0]  data_out
);

    logic delay;    // interconnect wire

clktick clkdelay (
    .clk(clk),
    .rst(rst),
    .en(en),
    .N(N),
    .tick(delay)
);

 f1_fsm f1_delay (
    .clk(clk),
    .rst(rst),
    .en(delay),
    .data_out(data_out)
);

endmodule
