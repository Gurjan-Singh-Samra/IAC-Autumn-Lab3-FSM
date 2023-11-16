// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_lights__Syms.h"


void Vf1_lights___024root__trace_chg_sub_0(Vf1_lights___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_lights___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_chg_top_0\n"); );
    // Init
    Vf1_lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_lights___024root*>(voidSelf);
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_lights___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_lights___024root__trace_chg_sub_0(Vf1_lights___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->f1_lights__DOT__seq));
        bufp->chgBit(oldp+1,(vlSelf->f1_lights__DOT__delay));
        bufp->chgCData(oldp+2,(vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg),8);
        bufp->chgBit(oldp+3,(vlSelf->f1_lights__DOT__i1));
        bufp->chgBit(oldp+4,(((0U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                              & ((1U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                                 & (2U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)))));
        bufp->chgBit(oldp+5,(vlSelf->f1_lights__DOT__mux_out));
        bufp->chgSData(oldp+6,(vlSelf->f1_lights__DOT__clocktick__DOT__count),16);
        bufp->chgIData(oldp+7,(vlSelf->f1_lights__DOT__f1__DOT__current_state),32);
        bufp->chgCData(oldp+8,(vlSelf->f1_lights__DOT__randon_delay__DOT__count),8);
        bufp->chgIData(oldp+9,(vlSelf->f1_lights__DOT__randon_delay__DOT__current_state),32);
        bufp->chgIData(oldp+10,(((0U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                                  ? ((IData)(vlSelf->f1_lights__DOT__delay)
                                      ? 1U : vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                                  : ((1U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                                      ? ((0U == (IData)(vlSelf->f1_lights__DOT__randon_delay__DOT__count))
                                          ? 2U : vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                                      : ((2U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                                          ? ((IData)(vlSelf->f1_lights__DOT__delay)
                                              ? 3U : 0U)
                                          : ((3U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
                                              ? ((IData)(vlSelf->f1_lights__DOT__delay)
                                                  ? vlSelf->f1_lights__DOT__randon_delay__DOT__current_state
                                                  : 0U)
                                              : 0U))))),32);
    }
    bufp->chgBit(oldp+11,(vlSelf->clk));
    bufp->chgBit(oldp+12,(vlSelf->rst));
    bufp->chgBit(oldp+13,(vlSelf->en));
    bufp->chgSData(oldp+14,(vlSelf->N),16);
    bufp->chgBit(oldp+15,(vlSelf->trigger));
    bufp->chgCData(oldp+16,(vlSelf->data_out),8);
    bufp->chgIData(oldp+17,(vlSelf->f1_lights__DOT__f1__DOT__next_state),32);
}

void Vf1_lights___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_cleanup\n"); );
    // Init
    Vf1_lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_lights___024root*>(voidSelf);
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
