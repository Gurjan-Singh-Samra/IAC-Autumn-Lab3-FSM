#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f Vdelayed_f1.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace delayed_f1.sv --exe delayed_f1_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vdelayed_f1.mk Vdelayed_f1

# run executable simulation file
echo "\nRunning simulation"
obj_dir/Vdelayed_f1
echo "\nSimulation completed"


