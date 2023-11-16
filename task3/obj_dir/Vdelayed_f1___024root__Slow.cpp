// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdelayed_f1.h for the primary calling header

#include "verilated.h"

#include "Vdelayed_f1__Syms.h"
#include "Vdelayed_f1___024root.h"

void Vdelayed_f1___024root___ctor_var_reset(Vdelayed_f1___024root* vlSelf);

Vdelayed_f1___024root::Vdelayed_f1___024root(Vdelayed_f1__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdelayed_f1___024root___ctor_var_reset(this);
}

void Vdelayed_f1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdelayed_f1___024root::~Vdelayed_f1___024root() {
}
