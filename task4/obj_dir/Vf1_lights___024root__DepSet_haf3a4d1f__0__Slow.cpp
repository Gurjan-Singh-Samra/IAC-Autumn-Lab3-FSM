// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_lights.h for the primary calling header

#include "verilated.h"

#include "Vf1_lights___024root.h"

VL_ATTR_COLD void Vf1_lights___024root___initial__TOP__0(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->f1_lights__DOT__randon_delay__DOT__count = 0U;
}

VL_ATTR_COLD void Vf1_lights___024root___settle__TOP__0(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___settle__TOP__0\n"); );
    // Body
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
    if (((((((((0U == vlSelf->f1_lights__DOT__f1__DOT__current_state) 
               | (1U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
              | (2U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
             | (3U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
            | (4U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
           | (5U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
          | (6U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) 
         | (7U == vlSelf->f1_lights__DOT__f1__DOT__current_state))) {
        if ((0U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) {
            vlSelf->f1_lights__DOT__seq = 1U;
        }
    } else if ((8U == vlSelf->f1_lights__DOT__f1__DOT__current_state)) {
        vlSelf->f1_lights__DOT__seq = 0U;
    }
    vlSelf->f1_lights__DOT__mux_out = ((IData)(vlSelf->f1_lights__DOT__seq)
                                        ? (IData)(vlSelf->f1_lights__DOT__i1)
                                        : ((0U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                                           & ((1U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                                              & (2U 
                                                 == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state))));
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

VL_ATTR_COLD void Vf1_lights___024root___eval_initial(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vf1_lights___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_lights___024root___eval_settle(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___eval_settle\n"); );
    // Body
    Vf1_lights___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_lights___024root___final(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_lights___024root___ctor_var_reset(Vf1_lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_lights__DOT__seq = VL_RAND_RESET_I(1);
    vlSelf->f1_lights__DOT__delay = VL_RAND_RESET_I(1);
    vlSelf->f1_lights__DOT__i1 = VL_RAND_RESET_I(1);
    vlSelf->f1_lights__DOT__mux_out = VL_RAND_RESET_I(1);
    vlSelf->f1_lights__DOT__randon_delay__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->f1_lights__DOT__randon_delay__DOT__current_state = 0;
    vlSelf->f1_lights__DOT__randon_delay__DOT__next_state = 0;
    vlSelf->f1_lights__DOT__f1__DOT__current_state = 0;
    vlSelf->f1_lights__DOT__f1__DOT__next_state = 0;
    vlSelf->f1_lights__DOT__clocktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
