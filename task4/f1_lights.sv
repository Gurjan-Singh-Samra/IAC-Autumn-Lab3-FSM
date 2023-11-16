module f1_lights #(
        parameter   N_WIDTH = 16,
                    D_WIDTH = 8,
                    K_WIDTH = 8
    )(
        input logic                 clk,
        input logic                 rst,
        input logic                 en,
        input logic [N_WIDTH-1:0]   N,
        input logic                 trigger,
        output logic [D_WIDTH-1:0]  data_out
    );

        //interconnect wires
        logic                   seq;
        logic                   delay;
        logic [K_WIDTH-1:0]     k;
        logic                   i1;
        logic                   i0;
        logic                   mux_out;

    always_comb begin
        mux_out = seq ? i1 : i0;
    end

    delay randon_delay (
        .clk(clk),
        .rst(rst),
        .trigger(delay),
        .n(k),
        .time_out(i0)
    );

    f1_fsm f1 (
        .clk(clk),
        .rst(rst),
        .en(mux_out),
        .trigger(trigger),
        .cmd_seq(seq),
        .cmd_delay(delay),
        .data_out(data_out)
    );

    clktick clocktick (
        .clk(clk),
        .rst(rst),
        .en(seq),
        .N(N),
        .tick(i1)
    );

    lfsr f1_lfsr(
        .clk(clk),
        .rst(rst),
        .en(en),
        .data_out(k)
    );

endmodule

