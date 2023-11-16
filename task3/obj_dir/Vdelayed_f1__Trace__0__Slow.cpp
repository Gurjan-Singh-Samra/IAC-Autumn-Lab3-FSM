// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdelayed_f1__Syms.h"


VL_ATTR_COLD void Vdelayed_f1___024root__trace_init_sub__TOP__0(Vdelayed_f1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"N", false,-1, 15,0);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("delayed_f1 ");
    tracep->declBus(c+10,"N_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"N", false,-1, 15,0);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"delay", false,-1);
    tracep->pushNamePrefix("clkdelay ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+8,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+2,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_delay ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->declBus(c+3,"current_state", false,-1, 31,0);
    tracep->declBus(c+4,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdelayed_f1___024root__trace_init_top(Vdelayed_f1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root__trace_init_top\n"); );
    // Body
    Vdelayed_f1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdelayed_f1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdelayed_f1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdelayed_f1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdelayed_f1___024root__trace_register(Vdelayed_f1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdelayed_f1___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdelayed_f1___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdelayed_f1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdelayed_f1___024root__trace_full_sub_0(Vdelayed_f1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdelayed_f1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root__trace_full_top_0\n"); );
    // Init
    Vdelayed_f1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdelayed_f1___024root*>(voidSelf);
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdelayed_f1___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdelayed_f1___024root__trace_full_sub_0(Vdelayed_f1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdelayed_f1___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->delayed_f1__DOT__delay));
    bufp->fullSData(oldp+2,(vlSelf->delayed_f1__DOT__clkdelay__DOT__count),16);
    bufp->fullIData(oldp+3,(vlSelf->delayed_f1__DOT__f1_delay__DOT__current_state),32);
    bufp->fullIData(oldp+4,(vlSelf->delayed_f1__DOT__f1_delay__DOT__next_state),32);
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->rst));
    bufp->fullBit(oldp+7,(vlSelf->en));
    bufp->fullSData(oldp+8,(vlSelf->N),16);
    bufp->fullCData(oldp+9,(vlSelf->data_out),8);
    bufp->fullIData(oldp+10,(0x10U),32);
    bufp->fullIData(oldp+11,(8U),32);
}
