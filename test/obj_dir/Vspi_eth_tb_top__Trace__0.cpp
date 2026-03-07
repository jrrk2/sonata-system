// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_eth_tb_top__Syms.h"


void Vspi_eth_tb_top___024root__trace_chg_0_sub_0(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_eth_tb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_chg_0\n"); );
    // Init
    Vspi_eth_tb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_eth_tb_top___024root*>(voidSelf);
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_eth_tb_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_eth_tb_top___024root__trace_chg_0_sub_0(Vspi_eth_tb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgSData(oldp+0,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXSR),16);
        bufp->chgSData(oldp+1,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHBCR),16);
        bufp->chgSData(oldp+2,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_CIDER),16);
        bufp->chgIData(oldp+3,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[13]),32);
        bufp->chgIData(oldp+17,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[14]),32);
        bufp->chgIData(oldp+18,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[15]),32);
        bufp->chgIData(oldp+19,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[16]),32);
        bufp->chgIData(oldp+20,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[17]),32);
        bufp->chgIData(oldp+21,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[18]),32);
        bufp->chgIData(oldp+22,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[19]),32);
        bufp->chgIData(oldp+23,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[20]),32);
        bufp->chgIData(oldp+24,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[21]),32);
        bufp->chgIData(oldp+25,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[22]),32);
        bufp->chgIData(oldp+26,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[23]),32);
        bufp->chgIData(oldp+27,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[24]),32);
        bufp->chgIData(oldp+28,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[25]),32);
        bufp->chgIData(oldp+29,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[26]),32);
        bufp->chgIData(oldp+30,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[27]),32);
        bufp->chgIData(oldp+31,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[28]),32);
        bufp->chgIData(oldp+32,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[29]),32);
        bufp->chgIData(oldp+33,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[30]),32);
        bufp->chgIData(oldp+34,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[31]),32);
        bufp->chgCData(oldp+35,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0]),8);
        bufp->chgCData(oldp+36,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1]),8);
        bufp->chgCData(oldp+37,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2]),8);
        bufp->chgCData(oldp+38,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3]),8);
        bufp->chgCData(oldp+39,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4]),8);
        bufp->chgCData(oldp+40,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5]),8);
        bufp->chgCData(oldp+41,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6]),8);
        bufp->chgCData(oldp+42,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7]),8);
        bufp->chgCData(oldp+43,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8]),8);
        bufp->chgCData(oldp+44,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9]),8);
        bufp->chgCData(oldp+45,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[10]),8);
        bufp->chgCData(oldp+46,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[11]),8);
        bufp->chgCData(oldp+47,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[12]),8);
        bufp->chgCData(oldp+48,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[13]),8);
        bufp->chgCData(oldp+49,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[14]),8);
        bufp->chgCData(oldp+50,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[15]),8);
        bufp->chgCData(oldp+51,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[16]),8);
        bufp->chgCData(oldp+52,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[17]),8);
        bufp->chgCData(oldp+53,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[18]),8);
        bufp->chgCData(oldp+54,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[19]),8);
        bufp->chgCData(oldp+55,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[20]),8);
        bufp->chgCData(oldp+56,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[21]),8);
        bufp->chgCData(oldp+57,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[22]),8);
        bufp->chgCData(oldp+58,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[23]),8);
        bufp->chgCData(oldp+59,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[24]),8);
        bufp->chgCData(oldp+60,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[25]),8);
        bufp->chgCData(oldp+61,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[26]),8);
        bufp->chgCData(oldp+62,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[27]),8);
        bufp->chgCData(oldp+63,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[28]),8);
        bufp->chgCData(oldp+64,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[29]),8);
        bufp->chgCData(oldp+65,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[30]),8);
        bufp->chgCData(oldp+66,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[31]),8);
        bufp->chgIData(oldp+67,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[0]),32);
        bufp->chgIData(oldp+68,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[1]),32);
        bufp->chgIData(oldp+69,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[2]),32);
        bufp->chgIData(oldp+70,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[3]),32);
        bufp->chgIData(oldp+71,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[4]),32);
        bufp->chgIData(oldp+72,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[5]),32);
        bufp->chgIData(oldp+73,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[6]),32);
        bufp->chgIData(oldp+74,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[7]),32);
        bufp->chgCData(oldp+75,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[0]),8);
        bufp->chgCData(oldp+76,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[1]),8);
        bufp->chgCData(oldp+77,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[2]),8);
        bufp->chgCData(oldp+78,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[3]),8);
        bufp->chgCData(oldp+79,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[4]),8);
        bufp->chgCData(oldp+80,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[5]),8);
        bufp->chgCData(oldp+81,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[6]),8);
        bufp->chgCData(oldp+82,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[7]),8);
        bufp->chgIData(oldp+83,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val),32);
        bufp->chgCData(oldp+84,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val),8);
        bufp->chgIData(oldp+85,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i),32);
        bufp->chgIData(oldp+86,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__j),32);
        bufp->chgIData(oldp+87,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[0]),32);
        bufp->chgIData(oldp+88,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[1]),32);
        bufp->chgIData(oldp+89,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[2]),32);
        bufp->chgIData(oldp+90,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[3]),32);
        bufp->chgIData(oldp+91,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[4]),32);
        bufp->chgIData(oldp+92,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[5]),32);
        bufp->chgIData(oldp+93,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[6]),32);
        bufp->chgIData(oldp+94,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[7]),32);
        bufp->chgIData(oldp+95,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[8]),32);
        bufp->chgIData(oldp+96,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[9]),32);
        bufp->chgIData(oldp+97,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[10]),32);
        bufp->chgIData(oldp+98,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[11]),32);
        bufp->chgIData(oldp+99,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[12]),32);
        bufp->chgIData(oldp+100,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[13]),32);
        bufp->chgIData(oldp+101,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[14]),32);
        bufp->chgIData(oldp+102,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[15]),32);
        bufp->chgIData(oldp+103,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[16]),32);
        bufp->chgIData(oldp+104,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[17]),32);
        bufp->chgIData(oldp+105,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[18]),32);
        bufp->chgIData(oldp+106,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[19]),32);
        bufp->chgIData(oldp+107,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[20]),32);
        bufp->chgIData(oldp+108,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[21]),32);
        bufp->chgIData(oldp+109,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[22]),32);
        bufp->chgIData(oldp+110,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[23]),32);
        bufp->chgIData(oldp+111,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[24]),32);
        bufp->chgIData(oldp+112,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[25]),32);
        bufp->chgIData(oldp+113,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[26]),32);
        bufp->chgIData(oldp+114,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[27]),32);
        bufp->chgIData(oldp+115,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[28]),32);
        bufp->chgIData(oldp+116,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[29]),32);
        bufp->chgIData(oldp+117,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[30]),32);
        bufp->chgIData(oldp+118,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[31]),32);
        bufp->chgCData(oldp+119,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[0]),8);
        bufp->chgCData(oldp+120,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[1]),8);
        bufp->chgCData(oldp+121,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[2]),8);
        bufp->chgCData(oldp+122,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[3]),8);
        bufp->chgCData(oldp+123,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[4]),8);
        bufp->chgCData(oldp+124,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[5]),8);
        bufp->chgCData(oldp+125,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[6]),8);
        bufp->chgCData(oldp+126,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[7]),8);
        bufp->chgCData(oldp+127,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[8]),8);
        bufp->chgCData(oldp+128,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[9]),8);
        bufp->chgCData(oldp+129,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[10]),8);
        bufp->chgCData(oldp+130,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[11]),8);
        bufp->chgCData(oldp+131,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[12]),8);
        bufp->chgCData(oldp+132,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[13]),8);
        bufp->chgCData(oldp+133,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[14]),8);
        bufp->chgCData(oldp+134,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[15]),8);
        bufp->chgCData(oldp+135,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[16]),8);
        bufp->chgCData(oldp+136,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[17]),8);
        bufp->chgCData(oldp+137,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[18]),8);
        bufp->chgCData(oldp+138,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[19]),8);
        bufp->chgCData(oldp+139,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[20]),8);
        bufp->chgCData(oldp+140,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[21]),8);
        bufp->chgCData(oldp+141,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[22]),8);
        bufp->chgCData(oldp+142,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[23]),8);
        bufp->chgCData(oldp+143,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[24]),8);
        bufp->chgCData(oldp+144,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[25]),8);
        bufp->chgCData(oldp+145,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[26]),8);
        bufp->chgCData(oldp+146,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[27]),8);
        bufp->chgCData(oldp+147,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[28]),8);
        bufp->chgCData(oldp+148,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[29]),8);
        bufp->chgCData(oldp+149,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[30]),8);
        bufp->chgCData(oldp+150,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[31]),8);
        bufp->chgIData(oldp+151,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0]),32);
        bufp->chgIData(oldp+152,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1]),32);
        bufp->chgIData(oldp+153,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2]),32);
        bufp->chgIData(oldp+154,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3]),32);
        bufp->chgIData(oldp+155,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4]),32);
        bufp->chgIData(oldp+156,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5]),32);
        bufp->chgIData(oldp+157,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6]),32);
        bufp->chgIData(oldp+158,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7]),32);
        bufp->chgCData(oldp+159,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0]),8);
        bufp->chgCData(oldp+160,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1]),8);
        bufp->chgCData(oldp+161,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2]),8);
        bufp->chgCData(oldp+162,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3]),8);
        bufp->chgCData(oldp+163,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4]),8);
        bufp->chgCData(oldp+164,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5]),8);
        bufp->chgCData(oldp+165,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6]),8);
        bufp->chgCData(oldp+166,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7]),8);
        bufp->chgIData(oldp+167,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val),32);
        bufp->chgCData(oldp+168,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val),8);
        bufp->chgIData(oldp+169,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i),32);
        bufp->chgIData(oldp+170,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+171,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni));
        bufp->chgBit(oldp+172,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx));
        bufp->chgBit(oldp+173,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+174,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next),3);
        bufp->chgBit(oldp+175,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next));
        bufp->chgBit(oldp+176,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next));
        bufp->chgBit(oldp+177,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next));
        bufp->chgCData(oldp+178,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+179,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start));
        bufp->chgCData(oldp+180,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d),2);
        bufp->chgBit(oldp+181,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge));
        bufp->chgSData(oldp+182,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d),11);
        bufp->chgCData(oldp+183,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+184,(vlSelf->spi_eth_tb_top__DOT__ksz_tx_last));
        bufp->chgBit(oldp+185,(vlSelf->spi_eth_tb_top__DOT__ksz_intrn));
        bufp->chgSData(oldp+186,(vlSelf->spi_eth_tb_top__DOT__ksz_rx_byte_count),12);
        bufp->chgQData(oldp+187,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac),48);
        bufp->chgCData(oldp+189,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_last),4);
        bufp->chgSData(oldp+190,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[0]),13);
        bufp->chgSData(oldp+191,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[1]),13);
        bufp->chgSData(oldp+192,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[2]),13);
        bufp->chgSData(oldp+193,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[3]),13);
        bufp->chgSData(oldp+194,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[4]),13);
        bufp->chgSData(oldp+195,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[5]),13);
        bufp->chgSData(oldp+196,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[6]),13);
        bufp->chgSData(oldp+197,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[7]),13);
        bufp->chgSData(oldp+198,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[8]),13);
        bufp->chgSData(oldp+199,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[9]),13);
        bufp->chgSData(oldp+200,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[10]),13);
        bufp->chgSData(oldp+201,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[11]),13);
        bufp->chgSData(oldp+202,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[12]),13);
        bufp->chgSData(oldp+203,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[13]),13);
        bufp->chgSData(oldp+204,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[14]),13);
        bufp->chgSData(oldp+205,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[15]),13);
        bufp->chgBit(oldp+206,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy));
        bufp->chgSData(oldp+207,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_wr_ptr),15);
        bufp->chgSData(oldp+208,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start),15);
        bufp->chgBit(oldp+209,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync));
        bufp->chgCData(oldp+210,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata),8);
        bufp->chgBit(oldp+211,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid));
        bufp->chgBit(oldp+212,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast));
        bufp->chgBit(oldp+213,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync));
        bufp->chgBit(oldp+214,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old));
        bufp->chgSData(oldp+215,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis),11);
        bufp->chgBit(oldp+216,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_valid_old));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+217,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_reg),8);
        bufp->chgBit(oldp+218,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg));
        bufp->chgBit(oldp+219,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_reg));
        bufp->chgBit(oldp+220,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_reg));
        bufp->chgIData(oldp+221,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg),32);
        bufp->chgIData(oldp+222,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg),32);
        bufp->chgCData(oldp+223,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg),8);
        bufp->chgBit(oldp+224,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg));
        bufp->chgBit(oldp+225,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_reg));
        bufp->chgBit(oldp+226,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_reg));
        bufp->chgBit(oldp+227,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg));
        bufp->chgCData(oldp+228,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg),3);
        bufp->chgBit(oldp+229,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__reset_crc));
        bufp->chgBit(oldp+230,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc));
        bufp->chgBit(oldp+231,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_odd));
        bufp->chgBit(oldp+232,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_locked));
        bufp->chgCData(oldp+233,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0),8);
        bufp->chgCData(oldp+234,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1),8);
        bufp->chgCData(oldp+235,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2),8);
        bufp->chgCData(oldp+236,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3),8);
        bufp->chgCData(oldp+237,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4),8);
        bufp->chgBit(oldp+238,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d0));
        bufp->chgBit(oldp+239,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d1));
        bufp->chgBit(oldp+240,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d2));
        bufp->chgBit(oldp+241,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d3));
        bufp->chgBit(oldp+242,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4));
        bufp->chgBit(oldp+243,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0));
        bufp->chgBit(oldp+244,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1));
        bufp->chgBit(oldp+245,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2));
        bufp->chgBit(oldp+246,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3));
        bufp->chgBit(oldp+247,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4));
        bufp->chgCData(oldp+248,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next),8);
        bufp->chgBit(oldp+249,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next));
        bufp->chgBit(oldp+250,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next));
        bufp->chgIData(oldp+251,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next),32);
        bufp->chgIData(oldp+252,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state),32);
        bufp->chgCData(oldp+253,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt),2);
        bufp->chgIData(oldp+254,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next),32);
        bufp->chgCData(oldp+255,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_out),8);
        bufp->chgBit(oldp+256,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_reg));
        bufp->chgCData(oldp+257,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg),3);
        bufp->chgBit(oldp+258,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc));
        bufp->chgBit(oldp+259,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc));
        bufp->chgCData(oldp+260,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg),8);
        bufp->chgCData(oldp+261,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg),8);
        bufp->chgBit(oldp+262,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_reg));
        bufp->chgCData(oldp+263,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_reg),4);
        bufp->chgSData(oldp+264,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg),16);
        bufp->chgIData(oldp+265,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state),32);
        bufp->chgIData(oldp+266,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next),32);
        bufp->chgIData(oldp+267,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_next),32);
        bufp->chgCData(oldp+268,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_out),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+269,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q));
        bufp->chgCData(oldp+270,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg),4);
        bufp->chgBit(oldp+271,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete) 
                                & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete))));
        bufp->chgBit(oldp+272,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q));
        bufp->chgBit(oldp+273,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending));
        bufp->chgIData(oldp+274,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg),32);
        bufp->chgBit(oldp+275,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete));
        bufp->chgBit(oldp+276,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete));
        bufp->chgSData(oldp+277,((0xffffU & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)),16);
        bufp->chgBit(oldp+278,((1U & (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+279,((1U & (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+280,((vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                >> 0x1fU)));
        bufp->chgBit(oldp+281,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_idle_q));
        bufp->chgIData(oldp+282,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_rdata_q),32);
        bufp->chgIData(oldp+283,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_rdata),32);
        bufp->chgIData(oldp+284,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_rdata),32);
        bufp->chgBit(oldp+285,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_reg_q));
        bufp->chgBit(oldp+286,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx_q));
        bufp->chgIData(oldp+287,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata),32);
        bufp->chgIData(oldp+288,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_bram_unused_rdata),32);
        bufp->chgBit(oldp+289,((0U != vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_bram_unused_rdata)));
        bufp->chgSData(oldp+290,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q),16);
        bufp->chgBit(oldp+291,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q));
        bufp->chgSData(oldp+292,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q),11);
        bufp->chgCData(oldp+293,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+294,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid));
        bufp->chgBit(oldp+295,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__data_out_valid_q));
        bufp->chgBit(oldp+296,((0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))));
        bufp->chgBit(oldp+297,((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))));
        bufp->chgSData(oldp+298,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr),11);
        bufp->chgSData(oldp+299,((0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr) 
                                            >> 2U))),9);
        bufp->chgCData(oldp+300,((3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr))),2);
        bufp->chgCData(oldp+301,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q),2);
        bufp->chgBit(oldp+302,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending));
        bufp->chgSData(oldp+303,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count),11);
        bufp->chgBit(oldp+304,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_wr_pending));
        bufp->chgSData(oldp+305,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr),11);
        bufp->chgCData(oldp+306,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data),8);
        bufp->chgSData(oldp+307,((0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr) 
                                            >> 2U))),9);
        bufp->chgIData(oldp+308,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata),32);
        bufp->chgCData(oldp+309,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be),4);
        bufp->chgCData(oldp+310,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q),2);
        bufp->chgBit(oldp+311,((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+312,(vlSelf->spi_eth_tb_top__DOT__spi_cipo));
        bufp->chgSData(oldp+313,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out),16);
        bufp->chgCData(oldp+314,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+315,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next),3);
        bufp->chgCData(oldp+316,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next),8);
        bufp->chgCData(oldp+317,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next),8);
        bufp->chgBit(oldp+318,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next));
        bufp->chgSData(oldp+319,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next),16);
        bufp->chgCData(oldp+320,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next),8);
        bufp->chgBit(oldp+321,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next));
        bufp->chgBit(oldp+322,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_next));
        bufp->chgBit(oldp+323,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgCData(oldp+324,(vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte0),8);
        bufp->chgCData(oldp+325,(vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte1),8);
        bufp->chgBit(oldp+326,(vlSelf->spi_eth_tb_top__DOT__ksz_read_pulse));
        bufp->chgCData(oldp+327,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg),4);
        bufp->chgCData(oldp+328,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode),2);
        bufp->chgCData(oldp+329,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),8);
        bufp->chgCData(oldp+330,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter),8);
        bufp->chgSData(oldp+331,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in),16);
        bufp->chgCData(oldp+332,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__addr_high),2);
        bufp->chgSData(oldp+333,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr),15);
        bufp->chgBit(oldp+334,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_writing));
        bufp->chgCData(oldp+335,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count),2);
        bufp->chgSData(oldp+336,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length),16);
        bufp->chgBit(oldp+337,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending));
        bufp->chgBit(oldp+338,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1));
        bufp->chgBit(oldp+339,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2));
        bufp->chgBit(oldp+340,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3));
        bufp->chgBit(oldp+341,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1));
        bufp->chgBit(oldp+342,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2));
        bufp->chgBit(oldp+343,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3));
        bufp->chgCData(oldp+344,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__read_addr),8);
        bufp->chgSData(oldp+345,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_read),16);
        bufp->chgSData(oldp+346,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__unnamedblk1__DOT__frame_end_pos),15);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgSData(oldp+347,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d),16);
        bufp->chgBit(oldp+348,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge));
        bufp->chgBit(oldp+349,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge));
        bufp->chgBit(oldp+350,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge));
        bufp->chgBit(oldp+351,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_d));
        bufp->chgBit(oldp+352,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_d));
        bufp->chgBit(oldp+353,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_running));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+354,((1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                                      >> 7U))));
        bufp->chgBit(oldp+355,(vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn));
        bufp->chgCData(oldp+356,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgCData(oldp+357,(vlSelf->spi_eth_tb_top__DOT__ksz_chip_state),4);
        bufp->chgSData(oldp+358,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARL),16);
        bufp->chgSData(oldp+359,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARM),16);
        bufp->chgSData(oldp+360,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARH),16);
        bufp->chgSData(oldp+361,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXCR),16);
        bufp->chgSData(oldp+362,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR1),16);
        bufp->chgSData(oldp+363,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR2),16);
        bufp->chgSData(oldp+364,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXMIR),16);
        bufp->chgSData(oldp+365,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHSR),16);
        bufp->chgSData(oldp+366,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXQCR),16);
        bufp->chgSData(oldp+367,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXFDPR),16);
        bufp->chgSData(oldp+368,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFDPR),16);
        bufp->chgSData(oldp+369,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_IER),16);
        bufp->chgSData(oldp+370,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFCTR),16);
        bufp->chgBit(oldp+371,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_pulse_old));
        bufp->chgQData(oldp+372,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address),48);
        bufp->chgBit(oldp+374,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable));
        bufp->chgBit(oldp+375,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable));
        bufp->chgBit(oldp+376,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__promiscuous_mode));
        bufp->chgSData(oldp+377,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_packet_length),11);
        bufp->chgIData(oldp+378,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg_rev),32);
        bufp->chgIData(oldp+379,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg_rev),32);
        bufp->chgBit(oldp+380,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_rx_enable));
        bufp->chgBit(oldp+381,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_tx_enable));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgCData(oldp+382,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next),4);
        bufp->chgSData(oldp+383,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[0]),11);
        bufp->chgSData(oldp+384,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[1]),11);
        bufp->chgSData(oldp+385,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[2]),11);
        bufp->chgSData(oldp+386,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[3]),11);
        bufp->chgSData(oldp+387,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[4]),11);
        bufp->chgSData(oldp+388,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[5]),11);
        bufp->chgSData(oldp+389,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[6]),11);
        bufp->chgSData(oldp+390,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[7]),11);
        bufp->chgSData(oldp+391,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[8]),11);
        bufp->chgSData(oldp+392,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[9]),11);
        bufp->chgSData(oldp+393,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[10]),11);
        bufp->chgSData(oldp+394,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[11]),11);
        bufp->chgSData(oldp+395,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[12]),11);
        bufp->chgSData(oldp+396,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[13]),11);
        bufp->chgSData(oldp+397,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[14]),11);
        bufp->chgSData(oldp+398,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[15]),11);
        bufp->chgSData(oldp+399,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr),11);
        bufp->chgBit(oldp+400,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending));
        bufp->chgBit(oldp+401,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle));
        bufp->chgBit(oldp+402,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+403,(vlSelf->spi_eth_tb_top__DOT__ksz_write_pulse));
        bufp->chgSData(oldp+404,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data),16);
        bufp->chgCData(oldp+405,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first),4);
        bufp->chgSData(oldp+406,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr),15);
    }
    bufp->chgBit(oldp+407,(vlSelf->clk_i));
    bufp->chgBit(oldp+408,(vlSelf->rst_i));
    bufp->chgBit(oldp+409,(vlSelf->clk_25mhz));
    bufp->chgSData(oldp+410,(vlSelf->wb_adr_i),13);
    bufp->chgIData(oldp+411,(vlSelf->wb_dat_i),32);
    bufp->chgIData(oldp+412,(vlSelf->wb_dat_o),32);
    bufp->chgCData(oldp+413,(vlSelf->wb_sel_i),4);
    bufp->chgBit(oldp+414,(vlSelf->wb_we_i));
    bufp->chgBit(oldp+415,(vlSelf->wb_cyc_i));
    bufp->chgBit(oldp+416,(vlSelf->wb_stb_i));
    bufp->chgBit(oldp+417,(vlSelf->wb_ack_o));
    bufp->chgCData(oldp+418,(vlSelf->rx_data),8);
    bufp->chgBit(oldp+419,(vlSelf->rx_valid));
    bufp->chgBit(oldp+420,(vlSelf->rx_last));
    bufp->chgCData(oldp+421,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync)
                               ? 2U : ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg)
                                        ? 1U : 0U))),3);
    bufp->chgCData(oldp+422,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg)
                               ? 2U : ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy)
                                        ? 1U : 0U))),3);
    bufp->chgSData(oldp+423,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR),16);
    bufp->chgSData(oldp+424,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR),16);
    bufp->chgBit(oldp+425,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail));
    bufp->chgBit(oldp+426,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_advance));
    bufp->chgBit(oldp+427,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_reading));
    bufp->chgCData(oldp+428,(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count),3);
    bufp->chgBit(oldp+429,((1U & (~ ((IData)(vlSelf->wb_adr_i) 
                                     >> 0xcU)))));
    bufp->chgBit(oldp+430,((IData)((0x1800U == (0x1800U 
                                                & (IData)(vlSelf->wb_adr_i))))));
    bufp->chgCData(oldp+431,((0x3fU & ((IData)(vlSelf->wb_adr_i) 
                                       >> 2U))),6);
    bufp->chgBit(oldp+432,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr));
    bufp->chgCData(oldp+433,((0xffU & ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                        ? ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                            ? (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                               >> 0x18U)
                                            : (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                               >> 0x10U))
                                        : ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                            ? (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                               >> 8U)
                                            : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata)))),8);
    bufp->chgCData(oldp+434,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_out),8);
    bufp->chgBit(oldp+435,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready));
    bufp->chgSData(oldp+436,((0x7ffU & vlSelf->wb_dat_i)),11);
    bufp->chgBit(oldp+437,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
                            & (IData)(((0x10U == (0xfcU 
                                                  & (IData)(vlSelf->wb_adr_i))) 
                                       & (vlSelf->wb_dat_i 
                                          >> 0x1fU))))));
    bufp->chgBit(oldp+438,(((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_idle_q)) 
                            & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))));
    bufp->chgBit(oldp+439,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
                            & (IData)(((0U == (0xfcU 
                                               & (IData)(vlSelf->wb_adr_i))) 
                                       & (vlSelf->wb_dat_i 
                                          >> 4U))))));
    bufp->chgIData(oldp+440,(((0x80U & (IData)(vlSelf->wb_adr_i))
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
    bufp->chgBit(oldp+441,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_req));
    bufp->chgSData(oldp+442,((0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                        >> 2U))),9);
    bufp->chgBit(oldp+443,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_req));
    bufp->chgCData(oldp+444,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q),4);
    bufp->chgCData(oldp+445,(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d),8);
    bufp->chgCData(oldp+446,(((0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q) 
                                        << 1U)) | (IData)(vlSelf->spi_eth_tb_top__DOT__spi_cipo))),8);
    bufp->chgBit(oldp+447,(((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge) 
                            & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q)))));
}

void Vspi_eth_tb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root__trace_cleanup\n"); );
    // Init
    Vspi_eth_tb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_eth_tb_top___024root*>(voidSelf);
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
}
