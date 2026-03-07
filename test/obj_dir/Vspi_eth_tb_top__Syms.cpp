// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspi_eth_tb_top__pch.h"
#include "Vspi_eth_tb_top.h"
#include "Vspi_eth_tb_top___024root.h"

// FUNCTIONS
Vspi_eth_tb_top__Syms::~Vspi_eth_tb_top__Syms()
{
}

Vspi_eth_tb_top__Syms::Vspi_eth_tb_top__Syms(VerilatedContext* contextp, const char* namep, Vspi_eth_tb_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(205);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
