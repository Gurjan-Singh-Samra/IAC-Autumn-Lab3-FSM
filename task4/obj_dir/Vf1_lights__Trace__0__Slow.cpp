// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_lights__Syms.h"


VL_ATTR_COLD void Vf1_lights___024root__trace_init_sub__TOP__0(Vf1_lights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+14,"en", false,-1);
    tracep->declBus(c+15,"N", false,-1, 15,0);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_lights ");
    tracep->declBus(c+19,"N_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"K_WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+14,"en", false,-1);
    tracep->declBus(c+15,"N", false,-1, 15,0);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"seq", false,-1);
    tracep->declBit(c+2,"delay", false,-1);
    tracep->declBus(c+3,"k", false,-1, 7,0);
    tracep->declBit(c+4,"i1", false,-1);
    tracep->declBit(c+5,"i0", false,-1);
    tracep->declBit(c+6,"mux_out", false,-1);
    tracep->pushNamePrefix("clocktick ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+15,"N", false,-1, 15,0);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1 ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBus(c+17,"data_out", false,-1, 7,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+18,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_lfsr ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+14,"en", false,-1);
    tracep->declBus(c+3,"data_out", false,-1, 7,0);
    tracep->declBus(c+3,"sreg", false,-1, 8,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("randon_delay ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+2,"trigger", false,-1);
    tracep->declBus(c+3,"n", false,-1, 7,0);
    tracep->declBit(c+5,"time_out", false,-1);
    tracep->declBus(c+9,"count", false,-1, 7,0);
    tracep->declBus(c+10,"current_state", false,-1, 31,0);
    tracep->declBus(c+11,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_lights___024root__trace_init_top(Vf1_lights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_init_top\n"); );
    // Body
    Vf1_lights___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_lights___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_lights___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_lights___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_lights___024root__trace_register(Vf1_lights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_lights___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_lights___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_lights___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_lights___024root__trace_full_sub_0(Vf1_lights___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_lights___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_full_top_0\n"); );
    // Init
    Vf1_lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_lights___024root*>(voidSelf);
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_lights___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_lights___024root__trace_full_sub_0(Vf1_lights___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_lights___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->f1_lights__DOT__seq));
    bufp->fullBit(oldp+2,(vlSelf->f1_lights__DOT__delay));
    bufp->fullCData(oldp+3,(vlSelf->f1_lights__DOT__f1_lfsr__DOT__sreg),8);
    bufp->fullBit(oldp+4,(vlSelf->f1_lights__DOT__i1));
    bufp->fullBit(oldp+5,(((0U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                           & ((1U != vlSelf->f1_lights__DOT__randon_delay__DOT__current_state) 
                              & (2U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)))));
    bufp->fullBit(oldp+6,(vlSelf->f1_lights__DOT__mux_out));
    bufp->fullSData(oldp+7,(vlSelf->f1_lights__DOT__clocktick__DOT__count),16);
    bufp->fullIData(oldp+8,(vlSelf->f1_lights__DOT__f1__DOT__current_state),32);
    bufp->fullCData(oldp+9,(vlSelf->f1_lights__DOT__randon_delay__DOT__count),8);
    bufp->fullIData(oldp+10,(vlSelf->f1_lights__DOT__randon_delay__DOT__current_state),32);
    bufp->fullIData(oldp+11,(((0U == vlSelf->f1_lights__DOT__randon_delay__DOT__current_state)
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
    bufp->fullBit(oldp+12,(vlSelf->clk));
    bufp->fullBit(oldp+13,(vlSelf->rst));
    bufp->fullBit(oldp+14,(vlSelf->en));
    bufp->fullSData(oldp+15,(vlSelf->N),16);
    bufp->fullBit(oldp+16,(vlSelf->trigger));
    bufp->fullCData(oldp+17,(vlSelf->data_out),8);
    bufp->fullIData(oldp+18,(vlSelf->f1_lights__DOT__f1__DOT__next_state),32);
    bufp->fullIData(oldp+19,(0x10U),32);
    bufp->fullIData(oldp+20,(8U),32);
}
