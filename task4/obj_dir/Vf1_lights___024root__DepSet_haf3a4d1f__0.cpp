// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_lights.h for the primary calling header

#include "verilated.h"

#include "Vf1_lights___024root.h"

VL_INLINE_OPT void Vf1_lights___024root___sequent__TOP__0(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__f1_lights__DOT__clocktick__DOT__count;
    CData/*7:0*/ __Vdly__f1_lights__DOT__f1_lfsr__DOT__sreg;
    // Body
    __Vdly__f1_lights__DOT__f1_lfsr__DOT__sreg = vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg;
    __Vdly__f1_lights__DOT__clocktick__DOT__count = vlSelf->f1_lights__DOT__clocktick__DOT__count;
    if (vlSelf->rst) {
        __Vdly__f1_lights__DOT__f1_lfsr__DOT__sreg = 1U;
        vlSelf->f1_lights__DOT__randon_delay__DOT__current_state = 0U;
        vlSelf->f1_lights__DOT__i1 = 0U;
        __Vdly__f1_lights__DOT__clocktick__DOT__count 
            = vlSelf->N;
        vlSelf->f1_lights__DOT__f1__DOT__current_state = 0U;
    } else {
        if (vlSelf->en) {
            __Vdly__f1_lights__DOT__f1_lfsr__DOT__sreg 
                = ((0xfeU & ((IData)(vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg) 
                             << 1U)) | (1U & VL_REDXOR_8(
                                                         (0x44U 
                                                          & (IData)(vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg)))));
        }
        vlSelf->f1_lights__DOT__randon_delay__DOT__current_state 
            = vlSelf->f1_lights__DOT__randon_delay__DOT__next_state;
        if (vlSelf->f1_lights__DOT__seq) {
            if ((0U == (IData)(vlSelf->f1_lights__DOT__clocktick__DOT__count))) {
                vlSelf->f1_lights__DOT__i1 = 1U;
                __Vdly__f1_lights__DOT__clocktick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1_lights__DOT__clocktick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1_lights__DOT__clocktick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->f1_lights__DOT__i1 = 0U;
            }
        }
        vlSelf->f1_lights__DOT__f1__DOT__current_state 
            = vlSelf->f1_lights__DOT__f1__DOT__next_state;
    }
    vlSelf->f1_lights__DOT__randon_delay__DOT__count 
        = (0xffU & ((((IData)(vlSelf->rst) | (IData)(vlSelf->f1_lights__DOT__delay)) 
                     | (0U == (IData)(vlSelf->f1_lights__DOT__randon_delay__DOT__count)))
                     ? ((IData)(vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg) 
                        - (IData)(1U)) : ((IData)(vlSelf->f1_lights__DOT__randon_delay__DOT__count) 
                                          - (IData)(1U))));
    vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg = __Vdly__f1_lights__DOT__f1_lfsr__DOT__sreg;
    vlSelf->f1_lights__DOT__clocktick__DOT__count = __Vdly__f1_lights__DOT__clocktick__DOT__count;
    if (((((((((0U == vlSelf->f1_lights__DOT__f1__DOT__current_state) 
               | (1U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
              | (2U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
             | (3U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
            | (4U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
           | (5U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
          | (6U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
         | (7U == vlSelf->f1_lights__DOT__f1__DOT__current_state))) {
        if ((0U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->f1_lights__DOT__delay = 0U;
            vlSelf->f1_lights__DOT__seq = 1U;
        } else {
            vlSelf->data_out = ((1U == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                 ? 1U : ((2U == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                          ? 3U : ((3U 
                                                   == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU))))));
        }
    } else if ((8U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->f1_lights__DOT__delay = 1U;
        vlSelf->f1_lights__DOT__seq = 0U;
    }
    vlSelf->f1_lights__DOT__randon_delay__DOT__next_state 
        = ((0U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
            ? ((IData)(vlSelf->f1_lights__DOT__delay)
                ? 1U : vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
            : ((1U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->f1_lights__DOT__randon_delay__DOT__count))
                    ? 2U : vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                : ((2U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                    ? ((IData)(vlSelf->f1_lights__DOT__delay)
                        ? 3U : 0U) : ((3U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                                       ? ((IData)(vlSelf->f1_lights__DOT__delay)
                                           ? vlSelf->f1_lights__DOT__randon_delay__DOT__current_state
                                           : 0U) : 0U))));
    vlSelf->f1_lights__DOT__mux_out = ((IData)(vlSelf->f1_lights__DOT__seq)
                                        ? (IData)(vlSelf->f1_lights__DOT__i1)
                                        : ((0U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                                           & ((1U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                                              & (2U 
                                                 == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state))));
}

VL_INLINE_OPT void Vf1_lights___024root___combo__TOP__0(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->f1_lights__DOT__f1__DOT__next_state = (
                                                   ((((((((0U 
                                                           == vlSelf->f1_lights__DOT__f1__DOT__current_state) 
                                                          | (1U 
                                                             == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
                                                         | (2U 
                                                            == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
                                                        | (3U 
                                                           == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
                                                       | (4U 
                                                          == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
                                                      | (5U 
                                                         == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
                                                     | (6U 
                                                        == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
                                                    | (7U 
                                                       == vlSelf->f1_lights__DOT__f1__DOT__current_state))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                     ? 
                                                    (((IData)(vlSelf->f1_lights__DOT__mux_out) 
                                                      & (IData)(vlSelf->trigger))
                                                      ? 1U
                                                      : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                     : 
                                                    ((1U 
                                                      == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                      ? 
                                                     ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                       ? 2U
                                                       : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                      : 
                                                     ((2U 
                                                       == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                       ? 
                                                      ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                        ? 3U
                                                        : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                       : 
                                                      ((3U 
                                                        == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                        ? 
                                                       ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                         ? 4U
                                                         : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                        : 
                                                       ((4U 
                                                         == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                         ? 
                                                        ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                          ? 5U
                                                          : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                         : 
                                                        ((5U 
                                                          == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                          ? 
                                                         ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                           ? 6U
                                                           : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                          : 
                                                         ((6U 
                                                           == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                           ? 
                                                          ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                            ? 7U
                                                            : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                           : 
                                                          ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                            ? 8U
                                                            : vlSelf->f1_lights__DOT__f1__DOT__current_state))))))))
                                                    : 
                                                   ((8U 
                                                     == vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                     ? 
                                                    ((IData)(vlSelf->f1_lights__DOT__mux_out)
                                                      ? 0U
                                                      : vlSelf->f1_lights__DOT__f1__DOT__current_state)
                                                     : 0U));
}

void Vf1_lights___024root___eval(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vf1_lights___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vf1_lights___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vf1_lights___024root___eval_debug_assertions(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
