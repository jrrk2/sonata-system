// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata__Syms.h"
#include "Vsonata___024root.h"

void Vsonata___024root___ctor_var_reset(Vsonata___024root* vlSelf);

Vsonata___024root::Vsonata___024root(Vsonata__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsonata___024root___ctor_var_reset(this);
}

void Vsonata___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsonata___024root::~Vsonata___024root() {
}
