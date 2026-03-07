// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspi_eth_tb_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vspi_eth_tb_top::Vspi_eth_tb_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vspi_eth_tb_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , clk_25mhz{vlSymsp->TOP.clk_25mhz}
    , rst_i{vlSymsp->TOP.rst_i}
    , wb_sel_i{vlSymsp->TOP.wb_sel_i}
    , wb_we_i{vlSymsp->TOP.wb_we_i}
    , wb_cyc_i{vlSymsp->TOP.wb_cyc_i}
    , wb_stb_i{vlSymsp->TOP.wb_stb_i}
    , wb_ack_o{vlSymsp->TOP.wb_ack_o}
    , rx_data{vlSymsp->TOP.rx_data}
    , rx_valid{vlSymsp->TOP.rx_valid}
    , rx_last{vlSymsp->TOP.rx_last}
    , wb_adr_i{vlSymsp->TOP.wb_adr_i}
    , wb_dat_i{vlSymsp->TOP.wb_dat_i}
    , wb_dat_o{vlSymsp->TOP.wb_dat_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vspi_eth_tb_top::Vspi_eth_tb_top(const char* _vcname__)
    : Vspi_eth_tb_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vspi_eth_tb_top::~Vspi_eth_tb_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspi_eth_tb_top___024root___eval_debug_assertions(Vspi_eth_tb_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vspi_eth_tb_top___024root___eval_static(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___eval_initial(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___eval_settle(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___eval(Vspi_eth_tb_top___024root* vlSelf);

void Vspi_eth_tb_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspi_eth_tb_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspi_eth_tb_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspi_eth_tb_top___024root___eval_static(&(vlSymsp->TOP));
        Vspi_eth_tb_top___024root___eval_initial(&(vlSymsp->TOP));
        Vspi_eth_tb_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspi_eth_tb_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vspi_eth_tb_top::eventsPending() { return false; }

uint64_t Vspi_eth_tb_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vspi_eth_tb_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vspi_eth_tb_top___024root___eval_final(Vspi_eth_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_eth_tb_top::final() {
    Vspi_eth_tb_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspi_eth_tb_top::hierName() const { return vlSymsp->name(); }
const char* Vspi_eth_tb_top::modelName() const { return "Vspi_eth_tb_top"; }
unsigned Vspi_eth_tb_top::threads() const { return 1; }
void Vspi_eth_tb_top::prepareClone() const { contextp()->prepareClone(); }
void Vspi_eth_tb_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vspi_eth_tb_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vspi_eth_tb_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vspi_eth_tb_top___024root__trace_init_top(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_eth_tb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_eth_tb_top___024root*>(voidSelf);
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vspi_eth_tb_top___024root__trace_decl_types(tracep);
    Vspi_eth_tb_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_register(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vspi_eth_tb_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vspi_eth_tb_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vspi_eth_tb_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
