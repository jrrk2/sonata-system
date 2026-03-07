// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_eth_tb_top__Syms.h"


VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_init_sub__TOP__0(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+408,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"clk_25mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+412,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+415,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+420,0,"rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"rx_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("spi_eth_tb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+408,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"clk_25mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+412,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+415,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+420,0,"rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"rx_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"spi_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"spi_copi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"spi_cipo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"spi_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+218,0,"ksz_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+219,0,"ksz_tx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"ksz_tx_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"ksz_intrn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"ksz_chip_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+422,0,"ksz_rx_state_mon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+423,0,"ksz_tx_state_mon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+187,0,"ksz_rx_byte_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+449,0,"ksz_tx_byte_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+220,0,"ksz_rx_error_bad_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"ksz_rx_error_bad_fcs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"ksz_cmd_byte0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"ksz_cmd_byte1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+327,0,"ksz_read_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"ksz_write_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"ksz_gmii_txd_mon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+219,0,"ksz_gmii_tx_en_mon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"ksz_gmii_tx_er_mon",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"spi_wb_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ksz", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+356,0,"csn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"si",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"so",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"rx_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+420,0,"rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"rx_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"tx_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+219,0,"tx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"tx_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"clk_25mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"intrn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"chip_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+422,0,"rx_state_mon",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+423,0,"tx_state_mon",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+187,0,"rx_byte_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+449,0,"tx_byte_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+220,0,"rx_error_bad_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"rx_error_bad_fcs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"cmd_byte0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"cmd_byte1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+327,0,"read_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"write_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"gmii_txd_mon",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+219,0,"gmii_tx_en_mon",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"gmii_tx_er_mon",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+452,0,"STATE_RX_ONLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+453,0,"STATE_TX_ONLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+454,0,"STATE_RX_TX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+451,0,"SPI_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+452,0,"SPI_CMD_BYTE0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+453,0,"SPI_CMD_BYTE1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+454,0,"SPI_DATA_PHASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+455,0,"OP_REG_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+456,0,"OP_REG_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+457,0,"OP_FIFO_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+458,0,"OP_FIFO_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"register_MARL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+360,0,"register_MARM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+361,0,"register_MARH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+362,0,"register_TXCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1,0,"register_TXSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+363,0,"register_RXCR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"register_RXCR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+365,0,"register_TXMIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+366,0,"register_RXFHSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"register_RXFHBCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+424,0,"register_TXQCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"register_RXQCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+368,0,"register_TXFDPR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+369,0,"register_RXFDPR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+370,0,"register_IER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+425,0,"register_ISR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+371,0,"register_RXFCTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"register_CIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+328,0,"spi_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+329,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+330,0,"reg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"shift_reg_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+314,0,"shift_reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+333,0,"addr_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+405,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+372,0,"write_pulse_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+373,0,"mac_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+188,0,"rx_dest_mac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+375,0,"tx_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"rx_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"promiscuous_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"rx_buf_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+383,0,"rx_buf_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"rx_buf_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rx_packet_length", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+384+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rx_frame_start_pos", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+191+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+426,0,"rx_buf_avail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"tx_packet_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+400,0,"tx_frame_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+401,0,"tx_start_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"tx_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"tx_fifo_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+335,0,"tx_fifo_writing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"tx_header_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+337,0,"tx_frame_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+208,0,"rx_fifo_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+407,0,"rx_fifo_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+209,0,"rx_fifo_frame_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+427,0,"rx_fifo_advance",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"rx_fifo_reading",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rx_fifo_auto_release_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"byte_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"tx_fcs_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"rx_fcs_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"tx_fcs_reg_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"rx_fcs_reg_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"rx_axis_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+225,0,"rx_axis_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rx_axis_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"rx_axis_tuser",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"tx_axis_tdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+212,0,"tx_axis_tvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"tx_axis_tlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"tx_axis_tready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"tx_axis_tuser",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"irq_rx_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"irq_tx_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+459,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+215,0,"tx_enable_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"rx_addr_axis",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+402,0,"tx_int_toggle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rx_int_toggle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"tx_int_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"tx_int_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"tx_int_sync3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"rx_int_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"rx_int_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"rx_int_sync3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"tx_valid_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+346,0,"reg_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+315,0,"rx_fifo_byte_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+429,0,"rx_fifo_bit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+460,0,"ADDR_MARL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+461,0,"ADDR_MARM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+462,0,"ADDR_MARH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+463,0,"ADDR_GRR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+464,0,"ADDR_TXCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+465,0,"ADDR_TXMIR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+466,0,"ADDR_TXQCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+467,0,"ADDR_TXFDPR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+468,0,"ADDR_TXNTFSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+469,0,"ADDR_TXSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+470,0,"ADDR_RXCR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+471,0,"ADDR_RXCR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+472,0,"ADDR_RXFHSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+473,0,"ADDR_RXFHBCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+474,0,"ADDR_RXQCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+475,0,"ADDR_RXFDPR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+476,0,"ADDR_IER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+477,0,"ADDR_ISR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+478,0,"ADDR_RXFCTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+479,0,"ADDR_FCLWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+480,0,"ADDR_FCHWR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+481,0,"ADDR_CIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+482,0,"ADDR_P1MBCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+483,0,"ADDR_P1MBSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+484,0,"ADDR_P1SCLMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+485,0,"ADDR_P1CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+486,0,"ADDR_P1SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+487,0,"ADDR_TXFCS_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+488,0,"ADDR_TXFCS_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+489,0,"ADDR_RXFCS_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+490,0,"ADDR_RXFCS_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+491,0,"rxfhsr_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+492,0,"rxqcr_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+493,0,"txqcr_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("gmii_rx_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+410,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"gmii_rxd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+420,0,"gmii_rx_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"gmii_rx_er",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"output_axis_tdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+225,0,"output_axis_tvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"output_axis_tlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"output_axis_tuser",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"clk_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"mii_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"error_bad_frame",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"error_bad_fcs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"fcs_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+496,0,"STATE_PAYLOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+497,0,"STATE_WAIT_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+498,0,"STATE_CRC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+175,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+230,0,"reset_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"update_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"mii_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"mii_locked",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"gmii_rxd_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"gmii_rxd_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"gmii_rxd_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"gmii_rxd_d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"gmii_rxd_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+239,0,"gmii_rx_dv_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"gmii_rx_dv_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"gmii_rx_dv_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"gmii_rx_dv_d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"gmii_rx_dv_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"gmii_rx_er_d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"gmii_rx_er_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"gmii_rx_er_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"gmii_rx_er_d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"gmii_rx_er_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"output_axis_tdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"output_axis_tdata_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+225,0,"output_axis_tvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"output_axis_tvalid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"output_axis_tlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"output_axis_tlast_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"output_axis_tuser_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"output_axis_tuser_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"error_bad_frame_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"error_bad_frame_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"error_bad_fcs_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"error_bad_fcs_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"fcs_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"crc_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"crc_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+179,0,"crc_cnt_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"crc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("eth_crc_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+499,0,"LFSR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"LFSR_POLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+501,0,"LFSR_CONFIG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+503,0,"LFSR_FEED_FORWARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"REVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"STYLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"state_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+255,0,"state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("lfsr_mask_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lfsr_mask_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_mask_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+68+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_mask_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+84,0,"state_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"data_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+87,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+507,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declArray(c+508,0,"STYLE_INT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gmii_tx_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+504,0,"ENABLE_PADDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"MIN_FRAME_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+410,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"input_axis_tdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+212,0,"input_axis_tvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"input_axis_tready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"input_axis_tlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"input_axis_tuser",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"gmii_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+219,0,"gmii_tx_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"gmii_tx_er",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"clk_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"mii_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"ifg_delay",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"fcs_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+496,0,"STATE_PREAMBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+497,0,"STATE_PAYLOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+498,0,"STATE_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+512,0,"STATE_PAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+513,0,"STATE_FCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+514,0,"STATE_WAIT_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"STATE_IFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+258,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+316,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+259,0,"reset_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"update_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"input_tdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"input_tdata_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+262,0,"ifg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"ifg_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+263,0,"mii_odd_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"mii_odd_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"mii_msn_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+264,0,"mii_msn_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+265,0,"frame_ptr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+320,0,"frame_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+218,0,"gmii_txd_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"gmii_txd_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+219,0,"gmii_tx_en_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"gmii_tx_en_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"gmii_tx_er_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"gmii_tx_er_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"input_axis_tready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"input_axis_tready_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"crc_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"fcs_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"crc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("eth_crc_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+499,0,"LFSR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"LFSR_POLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+501,0,"LFSR_CONFIG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+503,0,"LFSR_FEED_FORWARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"REVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"STYLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+266,0,"state_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("lfsr_mask_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+88+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lfsr_mask_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+120+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_mask_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("output_mask_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+160+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+168,0,"state_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"data_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+171,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+516,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declArray(c+508,0,"STYLE_INT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+347,0,"frame_end_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_spi_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+517,0,"CSWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+518,0,"BufDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+408,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+412,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+415,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"irq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"spi_copi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"spi_cipo_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"spi_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+519,0,"BufAw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+520,0,"BufWords",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+521,0,"BufWaw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+172,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"is_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"is_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"is_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"reg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+174,0,"wb_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"buf_rd_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"reg_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"cfg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"cs_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+276,0,"intr_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"intr_enable_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"spi_half_clk_period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+279,0,"spi_msb_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"spi_cpha",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"spi_cpol",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"spi_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+435,0,"spi_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+295,0,"spi_data_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"spi_data_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"spi_data_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"spi_data_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"spi_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"spi_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"spi_byte_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+438,0,"sw_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"spi_idle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"event_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"w1c_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+441,0,"reg_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"reg_rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+442,0,"tx_cpu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"tx_cpu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"tx_cpu_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+412,0,"tx_cpu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"tx_cpu_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"tx_cpu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+444,0,"rx_cpu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"rx_cpu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"rx_cpu_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+412,0,"rx_cpu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"rx_cpu_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"rx_cpu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+286,0,"is_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"is_tx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"wb_dat_o_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"buf_byte_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+300,0,"tx_word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+301,0,"buf_byte_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+302,0,"tx_byte_lane_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+288,0,"tx_bram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"tx_byte_from_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+295,0,"tx_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"tx_fetch_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"tx_b_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"rx_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+305,0,"rx_wr_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"rx_byte_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+307,0,"rx_byte_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+305,0,"rx_b_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"rx_b_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+309,0,"rx_b_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"rx_b_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+289,0,"rx_bram_unused_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+290,0,"unused_rx_bram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_rx_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+520,0,"Depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+521,0,"Aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+408,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"a_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"a_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"a_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+412,0,"a_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"a_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"a_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+305,0,"b_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"b_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"b_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+309,0,"b_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"b_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+289,0,"b_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_spi_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+522,0,"CLK_COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"BYTE_COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+408,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"sw_reset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+295,0,"data_in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"data_in_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+296,0,"data_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"data_out_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"start_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"byte_count_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+298,0,"idle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"cpol_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"cpha_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"msb_first_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"half_clk_period_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+450,0,"copi_idle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"spi_copi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"spi_cipo_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"clk_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+348,0,"clk_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+311,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+181,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+312,0,"active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"output_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"sample_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"start_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"finish_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"clk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"clk_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"sample_phase_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"sample_phase_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"byte_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+183,0,"byte_count_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+445,0,"bit_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"bit_count_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+357,0,"copi_shift_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+446,0,"copi_shift_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+294,0,"cipo_shift_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+447,0,"cipo_shift_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+296,0,"data_out_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"data_out_valid_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"clk_running",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_tx_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+520,0,"Depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+521,0,"Aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+408,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"a_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"a_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"a_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+412,0,"a_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,0,"a_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"a_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"b_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"b_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"b_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+524,0,"b_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"b_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"b_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_init_top(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_init_top\n"); );
    // Body
    Vspi_eth_tb_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_eth_tb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_eth_tb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_register(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vspi_eth_tb_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vspi_eth_tb_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vspi_eth_tb_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vspi_eth_tb_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_const_0_sub_0(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_const_0\n"); );
    // Init
    Vspi_eth_tb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_eth_tb_top___024root*>(voidSelf);
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_eth_tb_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_const_0_sub_0(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    bufp->fullSData(oldp+449,(vlSelf->spi_eth_tb_top__DOT__ksz_tx_byte_count),12);
    bufp->fullBit(oldp+450,(0U));
    bufp->fullCData(oldp+451,(0U),4);
    bufp->fullCData(oldp+452,(1U),4);
    bufp->fullCData(oldp+453,(2U),4);
    bufp->fullCData(oldp+454,(3U),4);
    bufp->fullCData(oldp+455,(0U),2);
    bufp->fullCData(oldp+456,(1U),2);
    bufp->fullCData(oldp+457,(2U),2);
    bufp->fullCData(oldp+458,(3U),2);
    bufp->fullIData(oldp+459,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__i),32);
    bufp->fullCData(oldp+460,(0x10U),8);
    bufp->fullCData(oldp+461,(0x12U),8);
    bufp->fullCData(oldp+462,(0x14U),8);
    bufp->fullCData(oldp+463,(0x26U),8);
    bufp->fullCData(oldp+464,(0x70U),8);
    bufp->fullCData(oldp+465,(0x78U),8);
    bufp->fullCData(oldp+466,(0x80U),8);
    bufp->fullCData(oldp+467,(0x84U),8);
    bufp->fullCData(oldp+468,(0x9eU),8);
    bufp->fullCData(oldp+469,(0x72U),8);
    bufp->fullCData(oldp+470,(0x74U),8);
    bufp->fullCData(oldp+471,(0x76U),8);
    bufp->fullCData(oldp+472,(0x7cU),8);
    bufp->fullCData(oldp+473,(0x7eU),8);
    bufp->fullCData(oldp+474,(0x82U),8);
    bufp->fullCData(oldp+475,(0x86U),8);
    bufp->fullCData(oldp+476,(0x90U),8);
    bufp->fullCData(oldp+477,(0x92U),8);
    bufp->fullCData(oldp+478,(0x9cU),8);
    bufp->fullCData(oldp+479,(0xb0U),8);
    bufp->fullCData(oldp+480,(0xb2U),8);
    bufp->fullCData(oldp+481,(0xc0U),8);
    bufp->fullCData(oldp+482,(0xe4U),8);
    bufp->fullCData(oldp+483,(0xe6U),8);
    bufp->fullCData(oldp+484,(0xf4U),8);
    bufp->fullCData(oldp+485,(0xf6U),8);
    bufp->fullCData(oldp+486,(0xf8U),8);
    bufp->fullCData(oldp+487,(0xcU),8);
    bufp->fullCData(oldp+488,(0xdU),8);
    bufp->fullCData(oldp+489,(0xeU),8);
    bufp->fullCData(oldp+490,(0xfU),8);
    bufp->fullIData(oldp+491,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rxfhsr_t),32);
    bufp->fullIData(oldp+492,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rxqcr_t),32);
    bufp->fullIData(oldp+493,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__txqcr_t),32);
    bufp->fullBit(oldp+494,(1U));
    bufp->fullCData(oldp+495,(0U),3);
    bufp->fullCData(oldp+496,(1U),3);
    bufp->fullCData(oldp+497,(2U),3);
    bufp->fullCData(oldp+498,(3U),3);
    bufp->fullIData(oldp+499,(0x20U),32);
    bufp->fullIData(oldp+500,(0x4c11db7U),32);
    bufp->fullQData(oldp+501,(0x47414c4f4953ULL),48);
    bufp->fullIData(oldp+503,(0U),32);
    bufp->fullIData(oldp+504,(1U),32);
    bufp->fullIData(oldp+505,(8U),32);
    bufp->fullIData(oldp+506,(0x4155544fU),32);
    bufp->fullIData(oldp+507,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__k),32);
    __Vtemp_1[0U] = 0x54494f4eU;
    __Vtemp_1[1U] = 0x45445543U;
    __Vtemp_1[2U] = 0x52U;
    bufp->fullWData(oldp+508,(__Vtemp_1),72);
    bufp->fullIData(oldp+511,(0x40U),32);
    bufp->fullCData(oldp+512,(4U),3);
    bufp->fullCData(oldp+513,(5U),3);
    bufp->fullCData(oldp+514,(6U),3);
    bufp->fullCData(oldp+515,(7U),3);
    bufp->fullIData(oldp+516,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__k),32);
    bufp->fullIData(oldp+517,(4U),32);
    bufp->fullIData(oldp+518,(0x800U),32);
    bufp->fullIData(oldp+519,(0xbU),32);
    bufp->fullIData(oldp+520,(0x200U),32);
    bufp->fullIData(oldp+521,(9U),32);
    bufp->fullIData(oldp+522,(0x10U),32);
    bufp->fullIData(oldp+523,(0xbU),32);
    bufp->fullIData(oldp+524,(0U),32);
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_full_0_sub_0(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_full_0\n"); );
    // Init
    Vspi_eth_tb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_eth_tb_top___024root*>(voidSelf);
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_eth_tb_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root__trace_full_0_sub_0(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXSR),16);
    bufp->fullSData(oldp+2,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHBCR),16);
    bufp->fullSData(oldp+3,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_CIDER),16);
    bufp->fullIData(oldp+4,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[31]),32);
    bufp->fullCData(oldp+36,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0]),8);
    bufp->fullCData(oldp+37,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1]),8);
    bufp->fullCData(oldp+38,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2]),8);
    bufp->fullCData(oldp+39,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3]),8);
    bufp->fullCData(oldp+40,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4]),8);
    bufp->fullCData(oldp+41,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5]),8);
    bufp->fullCData(oldp+42,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6]),8);
    bufp->fullCData(oldp+43,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7]),8);
    bufp->fullCData(oldp+44,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8]),8);
    bufp->fullCData(oldp+45,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9]),8);
    bufp->fullCData(oldp+46,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[10]),8);
    bufp->fullCData(oldp+47,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[11]),8);
    bufp->fullCData(oldp+48,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[12]),8);
    bufp->fullCData(oldp+49,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[13]),8);
    bufp->fullCData(oldp+50,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[14]),8);
    bufp->fullCData(oldp+51,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[15]),8);
    bufp->fullCData(oldp+52,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[16]),8);
    bufp->fullCData(oldp+53,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[17]),8);
    bufp->fullCData(oldp+54,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[18]),8);
    bufp->fullCData(oldp+55,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[19]),8);
    bufp->fullCData(oldp+56,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[20]),8);
    bufp->fullCData(oldp+57,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[21]),8);
    bufp->fullCData(oldp+58,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[22]),8);
    bufp->fullCData(oldp+59,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[23]),8);
    bufp->fullCData(oldp+60,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[24]),8);
    bufp->fullCData(oldp+61,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[25]),8);
    bufp->fullCData(oldp+62,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[26]),8);
    bufp->fullCData(oldp+63,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[27]),8);
    bufp->fullCData(oldp+64,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[28]),8);
    bufp->fullCData(oldp+65,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[29]),8);
    bufp->fullCData(oldp+66,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[30]),8);
    bufp->fullCData(oldp+67,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[31]),8);
    bufp->fullIData(oldp+68,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0]),32);
    bufp->fullIData(oldp+69,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1]),32);
    bufp->fullIData(oldp+70,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2]),32);
    bufp->fullIData(oldp+71,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3]),32);
    bufp->fullIData(oldp+72,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4]),32);
    bufp->fullIData(oldp+73,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5]),32);
    bufp->fullIData(oldp+74,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6]),32);
    bufp->fullIData(oldp+75,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7]),32);
    bufp->fullCData(oldp+76,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0]),8);
    bufp->fullCData(oldp+77,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1]),8);
    bufp->fullCData(oldp+78,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2]),8);
    bufp->fullCData(oldp+79,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3]),8);
    bufp->fullCData(oldp+80,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4]),8);
    bufp->fullCData(oldp+81,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5]),8);
    bufp->fullCData(oldp+82,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6]),8);
    bufp->fullCData(oldp+83,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7]),8);
    bufp->fullIData(oldp+84,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val),32);
    bufp->fullCData(oldp+85,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val),8);
    bufp->fullIData(oldp+86,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i),32);
    bufp->fullIData(oldp+87,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__j),32);
    bufp->fullIData(oldp+88,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0]),32);
    bufp->fullIData(oldp+89,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1]),32);
    bufp->fullIData(oldp+90,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2]),32);
    bufp->fullIData(oldp+91,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3]),32);
    bufp->fullIData(oldp+92,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4]),32);
    bufp->fullIData(oldp+93,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5]),32);
    bufp->fullIData(oldp+94,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6]),32);
    bufp->fullIData(oldp+95,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7]),32);
    bufp->fullIData(oldp+96,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8]),32);
    bufp->fullIData(oldp+97,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9]),32);
    bufp->fullIData(oldp+98,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[10]),32);
    bufp->fullIData(oldp+99,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[11]),32);
    bufp->fullIData(oldp+100,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[12]),32);
    bufp->fullIData(oldp+101,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[13]),32);
    bufp->fullIData(oldp+102,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[14]),32);
    bufp->fullIData(oldp+103,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[15]),32);
    bufp->fullIData(oldp+104,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[16]),32);
    bufp->fullIData(oldp+105,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[17]),32);
    bufp->fullIData(oldp+106,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[18]),32);
    bufp->fullIData(oldp+107,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[19]),32);
    bufp->fullIData(oldp+108,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[20]),32);
    bufp->fullIData(oldp+109,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[21]),32);
    bufp->fullIData(oldp+110,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[22]),32);
    bufp->fullIData(oldp+111,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[23]),32);
    bufp->fullIData(oldp+112,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[24]),32);
    bufp->fullIData(oldp+113,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[25]),32);
    bufp->fullIData(oldp+114,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[26]),32);
    bufp->fullIData(oldp+115,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[27]),32);
    bufp->fullIData(oldp+116,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[28]),32);
    bufp->fullIData(oldp+117,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[29]),32);
    bufp->fullIData(oldp+118,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[30]),32);
    bufp->fullIData(oldp+119,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[31]),32);
    bufp->fullCData(oldp+120,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0]),8);
    bufp->fullCData(oldp+121,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1]),8);
    bufp->fullCData(oldp+122,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2]),8);
    bufp->fullCData(oldp+123,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3]),8);
    bufp->fullCData(oldp+124,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4]),8);
    bufp->fullCData(oldp+125,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5]),8);
    bufp->fullCData(oldp+126,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6]),8);
    bufp->fullCData(oldp+127,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7]),8);
    bufp->fullCData(oldp+128,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8]),8);
    bufp->fullCData(oldp+129,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9]),8);
    bufp->fullCData(oldp+130,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[10]),8);
    bufp->fullCData(oldp+131,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[11]),8);
    bufp->fullCData(oldp+132,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[12]),8);
    bufp->fullCData(oldp+133,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[13]),8);
    bufp->fullCData(oldp+134,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[14]),8);
    bufp->fullCData(oldp+135,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[15]),8);
    bufp->fullCData(oldp+136,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[16]),8);
    bufp->fullCData(oldp+137,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[17]),8);
    bufp->fullCData(oldp+138,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[18]),8);
    bufp->fullCData(oldp+139,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[19]),8);
    bufp->fullCData(oldp+140,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[20]),8);
    bufp->fullCData(oldp+141,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[21]),8);
    bufp->fullCData(oldp+142,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[22]),8);
    bufp->fullCData(oldp+143,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[23]),8);
    bufp->fullCData(oldp+144,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[24]),8);
    bufp->fullCData(oldp+145,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[25]),8);
    bufp->fullCData(oldp+146,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[26]),8);
    bufp->fullCData(oldp+147,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[27]),8);
    bufp->fullCData(oldp+148,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[28]),8);
    bufp->fullCData(oldp+149,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[29]),8);
    bufp->fullCData(oldp+150,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[30]),8);
    bufp->fullCData(oldp+151,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[31]),8);
    bufp->fullIData(oldp+152,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2]),32);
    bufp->fullIData(oldp+155,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3]),32);
    bufp->fullIData(oldp+156,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4]),32);
    bufp->fullIData(oldp+157,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5]),32);
    bufp->fullIData(oldp+158,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6]),32);
    bufp->fullIData(oldp+159,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7]),32);
    bufp->fullCData(oldp+160,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0]),8);
    bufp->fullCData(oldp+161,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1]),8);
    bufp->fullCData(oldp+162,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2]),8);
    bufp->fullCData(oldp+163,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3]),8);
    bufp->fullCData(oldp+164,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4]),8);
    bufp->fullCData(oldp+165,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5]),8);
    bufp->fullCData(oldp+166,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6]),8);
    bufp->fullCData(oldp+167,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7]),8);
    bufp->fullIData(oldp+168,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val),32);
    bufp->fullCData(oldp+169,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val),8);
    bufp->fullIData(oldp+170,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i),32);
    bufp->fullIData(oldp+171,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__j),32);
    bufp->fullBit(oldp+172,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni));
    bufp->fullBit(oldp+173,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx));
    bufp->fullBit(oldp+174,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req));
    bufp->fullCData(oldp+175,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next),3);
    bufp->fullBit(oldp+176,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next));
    bufp->fullBit(oldp+177,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next));
    bufp->fullBit(oldp+178,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next));
    bufp->fullCData(oldp+179,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next),2);
    bufp->fullBit(oldp+180,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start));
    bufp->fullCData(oldp+181,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d),2);
    bufp->fullBit(oldp+182,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge));
    bufp->fullSData(oldp+183,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d),11);
    bufp->fullCData(oldp+184,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d),4);
    bufp->fullBit(oldp+185,(vlSelf->spi_eth_tb_top__DOT__ksz_tx_last));
    bufp->fullBit(oldp+186,(vlSelf->spi_eth_tb_top__DOT__ksz_intrn));
    bufp->fullSData(oldp+187,(vlSelf->spi_eth_tb_top__DOT__ksz_rx_byte_count),12);
    bufp->fullQData(oldp+188,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac),48);
    bufp->fullCData(oldp+190,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_last),4);
    bufp->fullSData(oldp+191,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[0]),13);
    bufp->fullSData(oldp+192,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[1]),13);
    bufp->fullSData(oldp+193,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[2]),13);
    bufp->fullSData(oldp+194,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[3]),13);
    bufp->fullSData(oldp+195,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[4]),13);
    bufp->fullSData(oldp+196,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[5]),13);
    bufp->fullSData(oldp+197,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[6]),13);
    bufp->fullSData(oldp+198,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[7]),13);
    bufp->fullSData(oldp+199,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[8]),13);
    bufp->fullSData(oldp+200,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[9]),13);
    bufp->fullSData(oldp+201,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[10]),13);
    bufp->fullSData(oldp+202,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[11]),13);
    bufp->fullSData(oldp+203,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[12]),13);
    bufp->fullSData(oldp+204,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[13]),13);
    bufp->fullSData(oldp+205,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[14]),13);
    bufp->fullSData(oldp+206,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[15]),13);
    bufp->fullBit(oldp+207,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy));
    bufp->fullSData(oldp+208,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_wr_ptr),15);
    bufp->fullSData(oldp+209,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start),15);
    bufp->fullBit(oldp+210,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync));
    bufp->fullCData(oldp+211,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata),8);
    bufp->fullBit(oldp+212,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid));
    bufp->fullBit(oldp+213,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast));
    bufp->fullBit(oldp+214,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync));
    bufp->fullBit(oldp+215,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old));
    bufp->fullSData(oldp+216,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis),11);
    bufp->fullBit(oldp+217,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_valid_old));
    bufp->fullCData(oldp+218,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_reg),8);
    bufp->fullBit(oldp+219,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg));
    bufp->fullBit(oldp+220,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_reg));
    bufp->fullBit(oldp+221,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_reg));
    bufp->fullIData(oldp+222,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg),32);
    bufp->fullIData(oldp+223,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg),32);
    bufp->fullCData(oldp+224,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg),8);
    bufp->fullBit(oldp+225,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg));
    bufp->fullBit(oldp+226,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_reg));
    bufp->fullBit(oldp+227,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_reg));
    bufp->fullBit(oldp+228,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg));
    bufp->fullCData(oldp+229,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg),3);
    bufp->fullBit(oldp+230,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__reset_crc));
    bufp->fullBit(oldp+231,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc));
    bufp->fullBit(oldp+232,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_odd));
    bufp->fullBit(oldp+233,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_locked));
    bufp->fullCData(oldp+234,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0),8);
    bufp->fullCData(oldp+235,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1),8);
    bufp->fullCData(oldp+236,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2),8);
    bufp->fullCData(oldp+237,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3),8);
    bufp->fullCData(oldp+238,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4),8);
    bufp->fullBit(oldp+239,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d0));
    bufp->fullBit(oldp+240,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d1));
    bufp->fullBit(oldp+241,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d2));
    bufp->fullBit(oldp+242,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d3));
    bufp->fullBit(oldp+243,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4));
    bufp->fullBit(oldp+244,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0));
    bufp->fullBit(oldp+245,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1));
    bufp->fullBit(oldp+246,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2));
    bufp->fullBit(oldp+247,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3));
    bufp->fullBit(oldp+248,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4));
    bufp->fullCData(oldp+249,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next),8);
    bufp->fullBit(oldp+250,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next));
    bufp->fullBit(oldp+251,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next));
    bufp->fullIData(oldp+252,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next),32);
    bufp->fullIData(oldp+253,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state),32);
    bufp->fullCData(oldp+254,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt),2);
    bufp->fullIData(oldp+255,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next),32);
    bufp->fullCData(oldp+256,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_out),8);
    bufp->fullBit(oldp+257,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_reg));
    bufp->fullCData(oldp+258,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg),3);
    bufp->fullBit(oldp+259,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc));
    bufp->fullBit(oldp+260,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc));
    bufp->fullCData(oldp+261,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg),8);
    bufp->fullCData(oldp+262,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg),8);
    bufp->fullBit(oldp+263,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_reg));
    bufp->fullCData(oldp+264,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_reg),4);
    bufp->fullSData(oldp+265,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg),16);
    bufp->fullIData(oldp+266,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state),32);
    bufp->fullIData(oldp+267,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next),32);
    bufp->fullIData(oldp+268,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_next),32);
    bufp->fullCData(oldp+269,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_out),8);
    bufp->fullBit(oldp+270,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q));
    bufp->fullCData(oldp+271,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg),4);
    bufp->fullBit(oldp+272,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete) 
                             & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete))));
    bufp->fullBit(oldp+273,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q));
    bufp->fullBit(oldp+274,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending));
    bufp->fullIData(oldp+275,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg),32);
    bufp->fullBit(oldp+276,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete));
    bufp->fullBit(oldp+277,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete));
    bufp->fullSData(oldp+278,((0xffffU & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)),16);
    bufp->fullBit(oldp+279,((1U & (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+280,((1U & (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+281,((vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                             >> 0x1fU)));
    bufp->fullBit(oldp+282,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_idle_q));
    bufp->fullIData(oldp+283,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_rdata_q),32);
    bufp->fullIData(oldp+284,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_rdata),32);
    bufp->fullIData(oldp+285,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_rdata),32);
    bufp->fullBit(oldp+286,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_reg_q));
    bufp->fullBit(oldp+287,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx_q));
    bufp->fullIData(oldp+288,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata),32);
    bufp->fullIData(oldp+289,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_bram_unused_rdata),32);
    bufp->fullBit(oldp+290,((0U != vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_bram_unused_rdata)));
    bufp->fullSData(oldp+291,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q),16);
    bufp->fullBit(oldp+292,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q));
    bufp->fullSData(oldp+293,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q),11);
    bufp->fullCData(oldp+294,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q),8);
    bufp->fullBit(oldp+295,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid));
    bufp->fullBit(oldp+296,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__data_out_valid_q));
    bufp->fullBit(oldp+297,((0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))));
    bufp->fullBit(oldp+298,((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))));
    bufp->fullSData(oldp+299,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr),11);
    bufp->fullSData(oldp+300,((0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr) 
                                         >> 2U))),9);
    bufp->fullCData(oldp+301,((3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr))),2);
    bufp->fullCData(oldp+302,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q),2);
    bufp->fullBit(oldp+303,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending));
    bufp->fullSData(oldp+304,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count),11);
    bufp->fullBit(oldp+305,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_wr_pending));
    bufp->fullSData(oldp+306,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr),11);
    bufp->fullCData(oldp+307,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data),8);
    bufp->fullSData(oldp+308,((0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr) 
                                         >> 2U))),9);
    bufp->fullIData(oldp+309,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata),32);
    bufp->fullCData(oldp+310,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be),4);
    bufp->fullCData(oldp+311,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q),2);
    bufp->fullBit(oldp+312,((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))));
    bufp->fullBit(oldp+313,(vlSelf->spi_eth_tb_top__DOT__spi_cipo));
    bufp->fullSData(oldp+314,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out),16);
    bufp->fullCData(oldp+315,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out),8);
    bufp->fullCData(oldp+316,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next),3);
    bufp->fullCData(oldp+317,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next),8);
    bufp->fullCData(oldp+318,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next),8);
    bufp->fullBit(oldp+319,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next));
    bufp->fullSData(oldp+320,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next),16);
    bufp->fullCData(oldp+321,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next),8);
    bufp->fullBit(oldp+322,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next));
    bufp->fullBit(oldp+323,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_next));
    bufp->fullBit(oldp+324,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next));
    bufp->fullCData(oldp+325,(vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte0),8);
    bufp->fullCData(oldp+326,(vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte1),8);
    bufp->fullBit(oldp+327,(vlSelf->spi_eth_tb_top__DOT__ksz_read_pulse));
    bufp->fullCData(oldp+328,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg),4);
    bufp->fullCData(oldp+329,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode),2);
    bufp->fullCData(oldp+330,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),8);
    bufp->fullCData(oldp+331,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter),8);
    bufp->fullSData(oldp+332,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in),16);
    bufp->fullCData(oldp+333,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__addr_high),2);
    bufp->fullSData(oldp+334,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr),15);
    bufp->fullBit(oldp+335,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_writing));
    bufp->fullCData(oldp+336,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count),2);
    bufp->fullSData(oldp+337,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length),16);
    bufp->fullBit(oldp+338,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending));
    bufp->fullBit(oldp+339,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1));
    bufp->fullBit(oldp+340,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2));
    bufp->fullBit(oldp+341,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3));
    bufp->fullBit(oldp+342,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1));
    bufp->fullBit(oldp+343,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2));
    bufp->fullBit(oldp+344,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3));
    bufp->fullCData(oldp+345,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__read_addr),8);
    bufp->fullSData(oldp+346,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_read),16);
    bufp->fullSData(oldp+347,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__unnamedblk1__DOT__frame_end_pos),15);
    bufp->fullSData(oldp+348,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d),16);
    bufp->fullBit(oldp+349,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge));
    bufp->fullBit(oldp+350,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge));
    bufp->fullBit(oldp+351,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge));
    bufp->fullBit(oldp+352,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_d));
    bufp->fullBit(oldp+353,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_d));
    bufp->fullBit(oldp+354,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_running));
    bufp->fullBit(oldp+355,((1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                                   >> 7U))));
    bufp->fullBit(oldp+356,(vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn));
    bufp->fullCData(oldp+357,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q),8);
    bufp->fullCData(oldp+358,(vlSelf->spi_eth_tb_top__DOT__ksz_chip_state),4);
    bufp->fullSData(oldp+359,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARL),16);
    bufp->fullSData(oldp+360,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARM),16);
    bufp->fullSData(oldp+361,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARH),16);
    bufp->fullSData(oldp+362,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXCR),16);
    bufp->fullSData(oldp+363,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR1),16);
    bufp->fullSData(oldp+364,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR2),16);
    bufp->fullSData(oldp+365,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXMIR),16);
    bufp->fullSData(oldp+366,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHSR),16);
    bufp->fullSData(oldp+367,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXQCR),16);
    bufp->fullSData(oldp+368,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXFDPR),16);
    bufp->fullSData(oldp+369,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFDPR),16);
    bufp->fullSData(oldp+370,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_IER),16);
    bufp->fullSData(oldp+371,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFCTR),16);
    bufp->fullBit(oldp+372,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_pulse_old));
    bufp->fullQData(oldp+373,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address),48);
    bufp->fullBit(oldp+375,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable));
    bufp->fullBit(oldp+376,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable));
    bufp->fullBit(oldp+377,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__promiscuous_mode));
    bufp->fullSData(oldp+378,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_packet_length),11);
    bufp->fullIData(oldp+379,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg_rev),32);
    bufp->fullIData(oldp+380,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg_rev),32);
    bufp->fullBit(oldp+381,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_rx_enable));
    bufp->fullBit(oldp+382,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_tx_enable));
    bufp->fullCData(oldp+383,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next),4);
    bufp->fullSData(oldp+384,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[0]),11);
    bufp->fullSData(oldp+385,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[1]),11);
    bufp->fullSData(oldp+386,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[2]),11);
    bufp->fullSData(oldp+387,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[3]),11);
    bufp->fullSData(oldp+388,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[4]),11);
    bufp->fullSData(oldp+389,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[5]),11);
    bufp->fullSData(oldp+390,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[6]),11);
    bufp->fullSData(oldp+391,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[7]),11);
    bufp->fullSData(oldp+392,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[8]),11);
    bufp->fullSData(oldp+393,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[9]),11);
    bufp->fullSData(oldp+394,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[10]),11);
    bufp->fullSData(oldp+395,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[11]),11);
    bufp->fullSData(oldp+396,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[12]),11);
    bufp->fullSData(oldp+397,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[13]),11);
    bufp->fullSData(oldp+398,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[14]),11);
    bufp->fullSData(oldp+399,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[15]),11);
    bufp->fullSData(oldp+400,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr),11);
    bufp->fullBit(oldp+401,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending));
    bufp->fullBit(oldp+402,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle));
    bufp->fullBit(oldp+403,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle));
    bufp->fullBit(oldp+404,(vlSelf->spi_eth_tb_top__DOT__ksz_write_pulse));
    bufp->fullSData(oldp+405,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data),16);
    bufp->fullCData(oldp+406,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first),4);
    bufp->fullSData(oldp+407,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr),15);
    bufp->fullBit(oldp+408,(vlSelf->clk_i));
    bufp->fullBit(oldp+409,(vlSelf->rst_i));
    bufp->fullBit(oldp+410,(vlSelf->clk_25mhz));
    bufp->fullSData(oldp+411,(vlSelf->wb_adr_i),13);
    bufp->fullIData(oldp+412,(vlSelf->wb_dat_i),32);
    bufp->fullIData(oldp+413,(vlSelf->wb_dat_o),32);
    bufp->fullCData(oldp+414,(vlSelf->wb_sel_i),4);
    bufp->fullBit(oldp+415,(vlSelf->wb_we_i));
    bufp->fullBit(oldp+416,(vlSelf->wb_cyc_i));
    bufp->fullBit(oldp+417,(vlSelf->wb_stb_i));
    bufp->fullBit(oldp+418,(vlSelf->wb_ack_o));
    bufp->fullCData(oldp+419,(vlSelf->rx_data),8);
    bufp->fullBit(oldp+420,(vlSelf->rx_valid));
    bufp->fullBit(oldp+421,(vlSelf->rx_last));
    bufp->fullCData(oldp+422,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync)
                                ? 2U : ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg)
                                         ? 1U : 0U))),3);
    bufp->fullCData(oldp+423,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg)
                                ? 2U : ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy)
                                         ? 1U : 0U))),3);
    bufp->fullSData(oldp+424,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR),16);
    bufp->fullSData(oldp+425,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR),16);
    bufp->fullBit(oldp+426,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail));
    bufp->fullBit(oldp+427,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_advance));
    bufp->fullBit(oldp+428,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_reading));
    bufp->fullCData(oldp+429,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count),3);
    bufp->fullBit(oldp+430,((1U & (~ ((IData)(vlSelf->wb_adr_i) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+431,((IData)((0x1800U == (0x1800U 
                                                 & (IData)(vlSelf->wb_adr_i))))));
    bufp->fullCData(oldp+432,((0x3fU & ((IData)(vlSelf->wb_adr_i) 
                                        >> 2U))),6);
    bufp->fullBit(oldp+433,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr));
    bufp->fullCData(oldp+434,((0xffU & ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                         ? ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                             ? (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                >> 0x18U)
                                             : (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                >> 0x10U))
                                         : ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                             ? (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                >> 8U)
                                             : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata)))),8);
    bufp->fullCData(oldp+435,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_out),8);
    bufp->fullBit(oldp+436,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready));
    bufp->fullSData(oldp+437,((0x7ffU & vlSelf->wb_dat_i)),11);
    bufp->fullBit(oldp+438,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
                             & (IData)(((0x10U == (0xfcU 
                                                   & (IData)(vlSelf->wb_adr_i))) 
                                        & (vlSelf->wb_dat_i 
                                           >> 0x1fU))))));
    bufp->fullBit(oldp+439,(((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_idle_q)) 
                             & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))));
    bufp->fullBit(oldp+440,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
                             & (IData)(((0U == (0xfcU 
                                                & (IData)(vlSelf->wb_adr_i))) 
                                        & (vlSelf->wb_dat_i 
                                           >> 4U))))));
    bufp->fullIData(oldp+441,(((0x80U & (IData)(vlSelf->wb_adr_i))
                                ? 0U : ((0x40U & (IData)(vlSelf->wb_adr_i))
                                         ? 0U : ((0x20U 
                                                  & (IData)(vlSelf->wb_adr_i))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->wb_adr_i))
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->wb_adr_i))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->wb_adr_i))
                                                     ? 0U
                                                     : (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg))
                                                    : 0U))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->wb_adr_i))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->wb_adr_i))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->wb_adr_i))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)) 
                                                     << 0x1aU)
                                                     : 0U))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->wb_adr_i))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->wb_adr_i))
                                                     ? vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->wb_adr_i))
                                                     ? 
                                                    ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete) 
                                                     << 4U)
                                                     : 
                                                    ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete) 
                                                     << 4U)))))))),32);
    bufp->fullBit(oldp+442,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_req));
    bufp->fullSData(oldp+443,((0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                         >> 2U))),9);
    bufp->fullBit(oldp+444,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_req));
    bufp->fullCData(oldp+445,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q),4);
    bufp->fullCData(oldp+446,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d),8);
    bufp->fullCData(oldp+447,(((0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q) 
                                         << 1U)) | (IData)(vlSelf->spi_eth_tb_top__DOT__spi_cipo))),8);
    bufp->fullBit(oldp+448,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge) 
                             & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q)))));
}
