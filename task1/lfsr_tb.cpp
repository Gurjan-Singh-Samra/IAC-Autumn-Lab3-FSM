#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog
    Vlfsr* top = new Vlfsr;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("lfsr.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("Lab 3: LFSR");
    //vbdSetMode(1);

    //initialise simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 1;

    //run simulation for many clock cycles
    for (i = 0; i < 500; i++){
        
        //dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }
        
        // send result value to Vbuddy 7 segment display
        vbdHex(1, top->data_out & 0xF);

        // display result on neopixel strip
        vbdBar(top->data_out & 0xFF);
        vbdCycle(i);

        // put reset back down to zero
        top->rst = (i < 2);

        //top->en = vbdFlag();

        if((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
            exit (0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}