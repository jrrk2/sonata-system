// spi_eth_tb_top.sv
// Top module for SPI-Ethernet testbench: spi_wb <-> ksz8851snl_mac_model via SPI
//
// Exposes Wishbone interface and RX injection interface to C++ testbench.

`default_nettype none

module spi_eth_tb_top (
    input  wire        clk_i,
    input  wire        rst_i,       // active high for spi_wb
    input  wire        clk_25mhz,

    // Wishbone interface (directly from C++)
    input  wire [12:0] wb_adr_i,
    input  wire [31:0] wb_dat_i,
    output wire [31:0] wb_dat_o,
    input  wire [3:0]  wb_sel_i,
    input  wire        wb_we_i,
    input  wire        wb_cyc_i,
    input  wire        wb_stb_i,
    output wire        wb_ack_o,

    // RX data injection interface (for injecting Ethernet frames into KSZ model)
    input  wire [7:0]  rx_data,
    input  wire        rx_valid,
    input  wire        rx_last
);

    // SPI signals between spi_wb and KSZ model
    wire spi_clk;
    wire spi_copi;
    wire spi_cipo;
    wire [3:0] spi_cs;

    // KSZ model unused outputs
    wire [7:0]  ksz_tx_data;
    wire        ksz_tx_valid;
    wire        ksz_tx_last;
    wire        ksz_intrn;
    wire [3:0]  ksz_chip_state;
    wire [2:0]  ksz_rx_state_mon;
    wire [2:0]  ksz_tx_state_mon;
    wire [11:0] ksz_rx_byte_count;
    wire [11:0] ksz_tx_byte_count;
    wire        ksz_rx_error_bad_frame;
    wire        ksz_rx_error_bad_fcs;
    wire [7:0]  ksz_cmd_byte0;
    wire [7:0]  ksz_cmd_byte1;
    wire        ksz_read_pulse;
    wire        ksz_write_pulse;
    wire [7:0]  ksz_gmii_txd_mon;
    wire        ksz_gmii_tx_en_mon;
    wire        ksz_gmii_tx_er_mon;
    wire        spi_wb_irq;

    // SPI WB controller
    spi_wb #(
        .CSWidth  (4),
        .BufDepth (2048)
    ) u_spi_wb (
        .clk_i      (clk_i),
        .rst_i      (rst_i),
        .wb_adr_i   (wb_adr_i),
        .wb_dat_i   (wb_dat_i),
        .wb_dat_o   (wb_dat_o),
        .wb_sel_i   (wb_sel_i),
        .wb_we_i    (wb_we_i),
        .wb_cyc_i   (wb_cyc_i),
        .wb_stb_i   (wb_stb_i),
        .wb_ack_o   (wb_ack_o),
        .irq_o      (spi_wb_irq),
        .spi_clk_o  (spi_clk),
        .spi_copi_o (spi_copi),
        .spi_cipo_i (spi_cipo),
        .spi_cs_o   (spi_cs)
    );

    // KSZ8851SNL MAC model
    ksz8851snl_mac_model u_ksz (
        .csn        (spi_cs[0]),
        .sclk       (spi_clk),
        .si         (spi_copi),
        .so         (spi_cipo),
        .rx_data    (rx_data),
        .rx_valid   (rx_valid),
        .rx_last    (rx_last),
        .tx_data    (ksz_tx_data),
        .tx_valid   (ksz_tx_valid),
        .tx_last    (ksz_tx_last),
        .rstn       (~rst_i),
        .clk_25mhz  (clk_25mhz),
        .intrn      (ksz_intrn),
        .chip_state (ksz_chip_state),
        .rx_state_mon       (ksz_rx_state_mon),
        .tx_state_mon       (ksz_tx_state_mon),
        .rx_byte_count      (ksz_rx_byte_count),
        .tx_byte_count      (ksz_tx_byte_count),
        .rx_error_bad_frame (ksz_rx_error_bad_frame),
        .rx_error_bad_fcs   (ksz_rx_error_bad_fcs),
        .cmd_byte0          (ksz_cmd_byte0),
        .cmd_byte1          (ksz_cmd_byte1),
        .read_pulse         (ksz_read_pulse),
        .write_pulse        (ksz_write_pulse),
        .gmii_txd_mon       (ksz_gmii_txd_mon),
        .gmii_tx_en_mon     (ksz_gmii_tx_en_mon),
        .gmii_tx_er_mon     (ksz_gmii_tx_er_mon)
    );

endmodule

`default_nettype wire
