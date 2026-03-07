// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsonata__pch.h"

//============================================================
// Constructors

Vsonata::Vsonata(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsonata__Syms(contextp(), _vcname__, this)}
    , clk25{vlSymsp->TOP.clk25}
    , eth_rst_n{vlSymsp->TOP.eth_rst_n}
    , hyperram0_clk{vlSymsp->TOP.hyperram0_clk}
    , hyperram0_cs_n{vlSymsp->TOP.hyperram0_cs_n}
    , hyperram0_dq{vlSymsp->TOP.hyperram0_dq}
    , hyperram0_rst_n{vlSymsp->TOP.hyperram0_rst_n}
    , hyperram0_rwds{vlSymsp->TOP.hyperram0_rwds}
    , jtag_tck{vlSymsp->TOP.jtag_tck}
    , jtag_tdi{vlSymsp->TOP.jtag_tdi}
    , jtag_tdo{vlSymsp->TOP.jtag_tdo}
    , jtag_tms{vlSymsp->TOP.jtag_tms}
    , sdcard_cd{vlSymsp->TOP.sdcard_cd}
    , sdcard_clk{vlSymsp->TOP.sdcard_clk}
    , sdcard_cmd{vlSymsp->TOP.sdcard_cmd}
    , sdcard_data{vlSymsp->TOP.sdcard_data}
    , serial_rx{vlSymsp->TOP.serial_rx}
    , serial_tx{vlSymsp->TOP.serial_tx}
    , spi_eth_clk{vlSymsp->TOP.spi_eth_clk}
    , spi_eth_cs_n{vlSymsp->TOP.spi_eth_cs_n}
    , spi_eth_miso{vlSymsp->TOP.spi_eth_miso}
    , spi_eth_mosi{vlSymsp->TOP.spi_eth_mosi}
    , spiflash4x_clk{vlSymsp->TOP.spiflash4x_clk}
    , spiflash4x_cs_n{vlSymsp->TOP.spiflash4x_cs_n}
    , spiflash4x_dq{vlSymsp->TOP.spiflash4x_dq}
    , user_led0{vlSymsp->TOP.user_led0}
    , user_led1{vlSymsp->TOP.user_led1}
    , user_led2{vlSymsp->TOP.user_led2}
    , user_led3{vlSymsp->TOP.user_led3}
    , user_led4{vlSymsp->TOP.user_led4}
    , user_led5{vlSymsp->TOP.user_led5}
    , user_led6{vlSymsp->TOP.user_led6}
    , user_led7{vlSymsp->TOP.user_led7}
    , user_sw0{vlSymsp->TOP.user_sw0}
    , user_sw1{vlSymsp->TOP.user_sw1}
    , user_sw2{vlSymsp->TOP.user_sw2}
    , sonata{vlSymsp->TOP.sonata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsonata::Vsonata(const char* _vcname__)
    : Vsonata(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsonata::~Vsonata() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsonata___024root___eval_debug_assertions(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG
void Vsonata___024root___eval_static(Vsonata___024root* vlSelf);
void Vsonata___024root___eval_initial(Vsonata___024root* vlSelf);
void Vsonata___024root___eval_settle(Vsonata___024root* vlSelf);
void Vsonata___024root___eval(Vsonata___024root* vlSelf);

void Vsonata::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsonata::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsonata___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsonata___024root___eval_static(&(vlSymsp->TOP));
        Vsonata___024root___eval_initial(&(vlSymsp->TOP));
        Vsonata___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsonata___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsonata::eventsPending() { return false; }

uint64_t Vsonata::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsonata::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsonata___024root___eval_final(Vsonata___024root* vlSelf);

VL_ATTR_COLD void Vsonata::final() {
    Vsonata___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsonata::hierName() const { return vlSymsp->name(); }
const char* Vsonata::modelName() const { return "Vsonata"; }
unsigned Vsonata::threads() const { return 1; }
void Vsonata::prepareClone() const { contextp()->prepareClone(); }
void Vsonata::atClone() const {
    contextp()->threadPoolpOnClone();
}
