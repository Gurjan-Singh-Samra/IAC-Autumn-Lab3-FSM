// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdelayed_f1.h"
#include "Vdelayed_f1__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdelayed_f1::Vdelayed_f1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdelayed_f1__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdelayed_f1::Vdelayed_f1(const char* _vcname__)
    : Vdelayed_f1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdelayed_f1::~Vdelayed_f1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdelayed_f1___024root___eval_initial(Vdelayed_f1___024root* vlSelf);
void Vdelayed_f1___024root___eval_settle(Vdelayed_f1___024root* vlSelf);
void Vdelayed_f1___024root___eval(Vdelayed_f1___024root* vlSelf);
#ifdef VL_DEBUG
void Vdelayed_f1___024root___eval_debug_assertions(Vdelayed_f1___024root* vlSelf);
#endif  // VL_DEBUG
void Vdelayed_f1___024root___final(Vdelayed_f1___024root* vlSelf);

static void _eval_initial_loop(Vdelayed_f1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdelayed_f1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdelayed_f1___024root___eval_settle(&(vlSymsp->TOP));
        Vdelayed_f1___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdelayed_f1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdelayed_f1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdelayed_f1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdelayed_f1___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vdelayed_f1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdelayed_f1::final() {
    Vdelayed_f1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdelayed_f1::hierName() const { return vlSymsp->name(); }
const char* Vdelayed_f1::modelName() const { return "Vdelayed_f1"; }
unsigned Vdelayed_f1::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdelayed_f1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdelayed_f1___024root__trace_init_top(Vdelayed_f1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdelayed_f1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdelayed_f1___024root*>(voidSelf);
    Vdelayed_f1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdelayed_f1___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdelayed_f1___024root__trace_register(Vdelayed_f1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdelayed_f1::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdelayed_f1___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
