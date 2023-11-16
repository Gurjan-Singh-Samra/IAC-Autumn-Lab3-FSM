// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdelayed_f1.h for the primary calling header

#include "verilated.h"

#include "Vdelayed_f1___024root.h"

VL_ATTR_COLD void Vdelayed_f1___024root___settle__TOP__0(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state) 
               | (1U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) 
              | (2U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) 
             | (3U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) 
            | (4U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) 
           | (5U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) 
          | (6U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) 
         | (7U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state))) {
        if ((0U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 1U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        } else if ((1U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 2U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        } else if ((2U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 3U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        } else if ((3U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 4U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        } else if ((4U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 5U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        } else if ((5U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 6U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        } else if ((6U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 7U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
                = ((IData)(vlSelf->delayed_f1__DOT__delay)
                    ? 8U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
        }
    } else if ((8U == vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state 
            = ((IData)(vlSelf->delayed_f1__DOT__delay)
                ? 0U : vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state);
    } else {
        vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vdelayed_f1___024root___eval_initial(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vdelayed_f1___024root___eval_settle(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___eval_settle\n"); );
    // Body
    Vdelayed_f1___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdelayed_f1___024root___final(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___final\n"); );
}

VL_ATTR_COLD void Vdelayed_f1___024root___ctor_var_reset(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->delayed_f1__DOT__delay = VL_RAND_RESET_I(1);
    vlSelf->delayed_f1__DOT__clkdelay__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state = 0;
    vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
