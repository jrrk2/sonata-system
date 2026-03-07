// Verilator C++ testbench for full Sonata SoC
// Runs sim_test.S from ROM, monitors UART output and spi_wb bus

#include "Vsonata.h"
#include "Vsonata_sonata.h"
#include "verilated.h"
#include <cstdio>

vluint64_t sim_time = 0;
Vsonata *dut;

void tick() {
    dut->clk25 = !dut->clk25;
    dut->eval();
    sim_time++;
    dut->clk25 = !dut->clk25;
    dut->eval();
    sim_time++;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vsonata;

    dut->clk25 = 0;
    dut->serial_rx = 1;
    dut->sdcard_cd = 1;
    dut->spi_eth_miso = 0;
    dut->jtag_tck = 0;
    dut->jtag_tdi = 0;
    dut->jtag_tms = 1;

    auto s = dut->sonata;

    printf("=== Sonata SoC Verilator: sim_test ===\n");

    // Wait for sys_rst deassert
    for (int i = 0; i < 200; i++) {
        tick();
        if (s->sys_rst == 0) {
            printf("sys_rst deasserted at cycle %d\n", i);
            break;
        }
    }
    if (s->sys_rst) { printf("ERROR: sys_rst stuck\n"); return 1; }

    // Run CPU and monitor UART + spi_wb
    printf("\nRunning test program (500K cycles max)...\n");
    printf("UART: ");
    fflush(stdout);

    int spi_cyc_count = 0;
    int uart_chars = 0;
    uint8_t last_serial_tx = 1;
    int wfi_count = 0;

    for (int i = 0; i < 500000; i++) {
        tick();

        // Monitor spi_wb bus
        if (s->main_spihost_bus_cyc) {
            if (spi_cyc_count < 50)
                printf("\n  [cycle %d] SPI: cyc=%d stb=%d we=%d ack=%d adr=0x%04x dat_w=0x%08x dat_r=0x%08x",
                    i, s->main_spihost_bus_cyc, s->main_spihost_bus_stb,
                    s->main_spihost_bus_we, s->main_spihost_bus_ack,
                    (s->main_spihost_bus_adr << 2) | s->main_spihost,
                    s->main_spihost_bus_dat_w, s->main_spihost_bus_dat_r);
            spi_cyc_count++;
        }

        // Monitor slave_sel[6] (spi_eth decode)
        if ((s->builder_socbushandler_slave_sel >> 6) & 1) {
            if (spi_cyc_count == 0)
                printf("\n  [cycle %d] slave_sel[6]=1 adr=0x%08x cyc=%d",
                    i, s->builder_socbushandler_shared_adr, s->builder_socbushandler_shared_cyc);
        }

        // Monitor shared bus for accesses to the 0x80302xxx range
        uint32_t adr = s->builder_socbushandler_shared_adr;
        if ((adr >> 11) == 0x40181 && s->builder_socbushandler_shared_cyc) {
            printf("\n  [cycle %d] BUS to spi_eth: adr=0x%08x cyc=%d stb=%d ack=%d",
                i, adr, s->builder_socbushandler_shared_cyc,
                s->builder_socbushandler_shared_stb,
                s->builder_socbushandler_shared_ack);
        }

        // Simple UART character detection
        // LiteX UART uses CSR writes. We can detect serial_tx transitions.
        // Actually, check for bus errors (access to 0x80302000 triggers timeout)
        // Monitor bus error counter
    }

    printf("\n\nResults:\n");
    printf("  SPI_WB cyc asserted: %d times\n", spi_cyc_count);
    printf("  spi_wb.rst_i=%d ack_q=%d\n", s->spi_wb__DOT__rst_i, s->spi_wb__DOT__ack_q);
    printf("  spi_wb.cfg_reg=0x%08x cs_reg=%d\n", s->spi_wb__DOT__cfg_reg, s->spi_wb__DOT__cs_reg);

    printf("\n=== Done ===\n");
    delete dut;
    return 0;
}
