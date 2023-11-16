module f1_fsm (
    input logic         clk,         // clock signal
    input logic         rst,         // reset
    input logic         en,          // enable
    input logic         trigger,     // trigger
    output logic        cmd_seq,     // high during the sequence of data
    output logic        cmd_delay,   // triggers start of delay sequence
    output logic [7:0]  data_out     // output
);

    // define our states
    typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8} my_state;
    my_state current_state, next_state;

    // state transitions
    always_ff @(posedge clk)
        if (rst)              current_state <= S0;
        else     current_state <= next_state;

    // next state logic
    always_comb
    case (current_state)
        S0:     if ((en == 1'b1) && (trigger == 1'b1))     next_state = S1;
                else                next_state = current_state;
        S1:     if (en == 1'b1)     next_state = S2;
                else                next_state = current_state;
        S2:     if (en == 1'b1)     next_state = S3;
                else                next_state = current_state;
        S3:     if (en == 1'b1)     next_state = S4;
                else                next_state = current_state;
        S4:     if (en == 1'b1)     next_state = S5;
                else                next_state = current_state;
        S5:     if (en == 1'b1)     next_state = S6;
                else                next_state = current_state;
        S6:     if (en == 1'b1)     next_state = S7;
                else                next_state = current_state;
        S7:     if (en == 1'b1)     next_state = S8;
                else                next_state = current_state;
        S8:     if (en == 1'b1)     next_state = S0;
                else                next_state = current_state;
        default: next_state = S0;
    endcase

    //  output logic
    always_comb
        case (current_state)
            S0: begin     
                        data_out = 8'b0;
                        cmd_seq = 1'b1;
                        cmd_delay = 1'b0;
                end  

            S1:     data_out = 8'b1;
            S2:     data_out = 8'b11;
            S3:     data_out = 8'b111;
            S4:     data_out = 8'b1111;
            S5:     data_out = 8'b11111;
            S6:     data_out = 8'b111111;
            S7:     data_out = 8'b1111111;
            S8: begin
                        data_out = 8'b11111111;
                        cmd_seq = 1'b0;
                        cmd_delay = 1'b1;
                end
        endcase
endmodule
