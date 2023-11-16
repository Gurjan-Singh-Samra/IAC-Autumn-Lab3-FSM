// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdelayed_f1.h for the primary calling header

#include "verilated.h"

#include "Vdelayed_f1___024root.h"

VL_INLINE_OPT void Vdelayed_f1___024root___sequent__TOP__0(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__delayed_f1__DOT__clkdelay__DOT__count;
    // Body
    __Vdly__delayed_f1__DOT__clkdelay__DOT__count = vlSelf->delayed_f1__DOT__clkdelay__DOT__count;
    if (vlSelf->rst) {
        vlSelf->delayed_f1__DOT__delay = 0U;
        __Vdly__delayed_f1__DOT__clkdelay__DOT__count 
            = vlSelf->N;
        vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state = 0U;
    } else {
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->delayed_f1__DOT__clkdelay__DOT__count))) {
                vlSelf->delayed_f1__DOT__delay = 1U;
                __Vdly__delayed_f1__DOT__clkdelay__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__delayed_f1__DOT__clkdelay__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->delayed_f1__DOT__clkdelay__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->delayed_f1__DOT__delay = 0U;
            }
        }
        vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state 
            = vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state;
    }
    vlSelf->delayed_f1__DOT__clkdelay__DOT__count = __Vdly__delayed_f1__DOT__clkdelay__DOT__count;
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

void Vdelayed_f1___024root___eval(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdelayed_f1___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdelayed_f1___024root___eval_debug_assertions(Vdelayed_f1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
