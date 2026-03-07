// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata__Syms.h"
#include "Vsonata_sonata.h"

// Parameter definitions for Vsonata_sonata
constexpr CData/*0:0*/ Vsonata_sonata::FDCE__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDCE_1__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDCE_2__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDCE_3__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDCE_4__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDCE_5__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDCE_6__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDCE_7__DOT__INIT;
constexpr CData/*6:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKFBOUT_MULT;
constexpr CData/*5:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT0_DIVIDE;
constexpr CData/*0:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT0_PHASE;
constexpr CData/*4:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT1_DIVIDE;
constexpr CData/*0:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT1_PHASE;
constexpr CData/*0:0*/ Vsonata_sonata::PLLE2_ADV__DOT__DIVCLK_DIVIDE;
constexpr CData/*0:0*/ Vsonata_sonata::FDPE__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDPE_1__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDPE_2__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::FDPE_3__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_1__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_2__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_3__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_4__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_5__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_6__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_7__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_8__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_9__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_10__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_1__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_1__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_2__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_2__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_3__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_3__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_11__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_12__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_4__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_4__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_13__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_14__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_15__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_16__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_17__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_18__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_19__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::ODDR_20__DOT__INIT;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_5__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_5__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_6__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_6__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_7__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_7__DOT__INIT_Q2;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_8__DOT__INIT_Q1;
constexpr CData/*0:0*/ Vsonata_sonata::IDDR_8__DOT__INIT_Q2;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__CSWidth;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__BufDepth;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__BufAw;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__BufWords;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__BufWaw;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__u_tx_ram__DOT__Depth;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__u_tx_ram__DOT__Aw;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__u_rx_ram__DOT__Depth;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__u_rx_ram__DOT__Aw;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__u_spi_core__DOT__CLK_COUNT_W;
constexpr IData/*31:0*/ Vsonata_sonata::spi_wb__DOT__u_spi_core__DOT__BYTE_COUNT_W;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::PLLE2_ADV__DOT__BANDWIDTH;
constexpr IData/*31:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT2_DIVIDE;
constexpr IData/*31:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT3_DIVIDE;
constexpr IData/*31:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT4_DIVIDE;
constexpr IData/*31:0*/ Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT5_DIVIDE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_1__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_1__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_2__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_2__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_3__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_3__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_4__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_4__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_5__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_5__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_6__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_6__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_7__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_7__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_8__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_8__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_9__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_9__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_10__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_10__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_1__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_1__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_2__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_2__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_3__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_3__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_11__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_11__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_12__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_12__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_4__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_4__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_13__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_13__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_14__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_14__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_15__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_15__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_16__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_16__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_17__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_17__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_18__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_18__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_19__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_19__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::ODDR_20__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::ODDR_20__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_5__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_5__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_6__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_6__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_7__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_7__DOT__SRTYPE;
constexpr VlWide<3>/*71:0*/ Vsonata_sonata::IDDR_8__DOT__DDR_CLK_EDGE;
constexpr IData/*31:0*/ Vsonata_sonata::IDDR_8__DOT__SRTYPE;
constexpr QData/*39:0*/ Vsonata_sonata::PLLE2_ADV__DOT__COMPENSATION;
constexpr QData/*39:0*/ Vsonata_sonata::PLLE2_ADV__DOT__STARTUP_WAIT;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKFBOUT_PHASE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKIN1_PERIOD;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKIN2_PERIOD;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT0_DUTY_CYCLE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT1_DUTY_CYCLE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT2_DUTY_CYCLE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT2_PHASE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT3_DUTY_CYCLE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT3_PHASE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT4_DUTY_CYCLE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT4_PHASE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT5_DUTY_CYCLE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__CLKOUT5_PHASE;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__REF_JITTER1;
constexpr double Vsonata_sonata::PLLE2_ADV__DOT__REF_JITTER2;


void Vsonata_sonata___ctor_var_reset(Vsonata_sonata* vlSelf);

Vsonata_sonata::Vsonata_sonata(Vsonata__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsonata_sonata___ctor_var_reset(this);
}

void Vsonata_sonata::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsonata_sonata::~Vsonata_sonata() {
}
