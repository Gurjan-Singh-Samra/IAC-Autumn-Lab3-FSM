module lfsr(
    input logic           clk,         // input clock
    input logic           rst,         // reset
    input logic           en,           // enable
    output logic [7:0]    data_out     // serial data out
    );          // end of port list

     logic [8:1]     sreg;       // shift register

    always_ff @ (posedge clk)
        if (rst)
            sreg <= 8'b1;
        else if (en)
            sreg <= {sreg[7:1], sreg[7] ^ sreg[3]};
        
    assign data_out = sreg;
endmodule
