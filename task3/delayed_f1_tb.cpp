#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vdelayed_f1.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog
    Vdelayed_f1* top = new Vdelayed_f1;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("delayed_f1.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("Lab 3: delayed f1");
    vbdSetMode(1);

    //initialise simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->N = 16;

    //run simulation for many clock cycles
    for (i = 0; i < 1000; i++){
        
        //dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }
        
        // send result value to Vbuddy 7 segment display
        vbdHex(1, top->data_out & 0xF);
        vbdHex(2, (top->data_out & 0xF0) >> 4);


        // display result on neopixel strip
        vbdBar(top->data_out & 0xFF);
        vbdCycle(i);

        // put reset back down to zero
        top->rst = (i < 2);
        top->rst = vbdFlag();

        if((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
            exit (0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}