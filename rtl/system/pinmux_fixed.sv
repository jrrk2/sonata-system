// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Fixed-routing pinmux replacement — same module name and port interface as
// the auto-generated pinmux.sv, but all routing is hardwired to the default
// (reset) configuration.  No TileLink registers, no muxes.
//
// This eliminates ~550 prim_onehot_mux instances and the TileLink register
// adapter, significantly reducing FPGA routing congestion.

/* verilator lint_off DECLFILENAME */
module pinmux
  import sonata_pkg::*;
(
  // Clock and reset (unused — purely combinational)
  input logic clk_i,
  input logic rst_ni,

  // GPIO IOs
  output [31:0] gpio_ios_o   [GPIO_NUM],
  input  [31:0] gpio_ios_i   [GPIO_NUM],
  input  [31:0] gpio_ios_en_i[GPIO_NUM],

  // PWM IOs
  input  [6:0] pwm_out_i   [PWM_NUM],
  input  [6:0] pwm_out_en_i[PWM_NUM],

  // UART IOs
  output uart_rx_o[UART_NUM],
  input  uart_tx_i   [UART_NUM],
  input  uart_tx_en_i[UART_NUM],

  // I2C IOs
  output i2c_scl_o   [I2C_NUM],
  input  i2c_scl_i   [I2C_NUM],
  input  i2c_scl_en_i[I2C_NUM],
  output i2c_sda_o   [I2C_NUM],
  input  i2c_sda_i   [I2C_NUM],
  input  i2c_sda_en_i[I2C_NUM],

  // SPI IOs
  output spi_cipo_o[SPI_NUM],
  input  spi_copi_i   [SPI_NUM],
  input  spi_copi_en_i[SPI_NUM],
  input  spi_sclk_i   [SPI_NUM],
  input  spi_sclk_en_i[SPI_NUM],
  input  [3:0] spi_cs_i   [SPI_NUM],
  input  [3:0] spi_cs_en_i[SPI_NUM],

  // Pin Signals
  input  sonata_in_pins_t  in_from_pins_i,
  output sonata_out_pins_t out_to_pins_o,
  output sonata_out_pins_t out_to_pins_en_o,

  input  sonata_inout_pins_t inout_from_pins_i,
  output sonata_inout_pins_t inout_to_pins_o,
  output sonata_inout_pins_t inout_to_pins_en_o,

  // TileLink interfaces (tie off — no registers)
  input  tlul_pkg::tl_h2d_t tl_i,
  output tlul_pkg::tl_d2h_t tl_o
);

  // ===========================================================================
  // TileLink tie-off — always respond with error
  // ===========================================================================
  tlul_err_resp u_tl_err (
    .clk_i,
    .rst_ni,
    .tl_h_i (tl_i),
    .tl_h_o (tl_o)
  );

  // ===========================================================================
  // Output pins (active-high enable, directly from top_sonata padring)
  // ===========================================================================
  // Defaults are the first block_ios entry from pinmux.sv (selector reset = 2'b10)

  // --- UART TX ---
  assign out_to_pins_o   [OUT_PIN_SER0_TX]  = uart_tx_i   [0];
  assign out_to_pins_en_o[OUT_PIN_SER0_TX]  = uart_tx_en_i[0];

  assign out_to_pins_o   [OUT_PIN_SER1_TX]  = uart_tx_i   [1];
  assign out_to_pins_en_o[OUT_PIN_SER1_TX]  = uart_tx_en_i[1];

  assign out_to_pins_o   [OUT_PIN_RS232_TX] = uart_tx_i   [2];
  assign out_to_pins_en_o[OUT_PIN_RS232_TX] = uart_tx_en_i[2];

  // RS-485 TX: disabled at reset (no_default_out=true, selector reset = 2'b1)
  assign out_to_pins_o   [OUT_PIN_RS485_TX] = 1'b0;
  assign out_to_pins_en_o[OUT_PIN_RS485_TX] = 1'b0;

  // --- MikroBus output pins → SPI[2] ---
  assign out_to_pins_o   [OUT_PIN_MB1]  = spi_cs_i   [2][3];
  assign out_to_pins_en_o[OUT_PIN_MB1]  = spi_cs_en_i[2][3];

  assign out_to_pins_o   [OUT_PIN_MB2]  = spi_sclk_i   [2];
  assign out_to_pins_en_o[OUT_PIN_MB2]  = spi_sclk_en_i[2];

  assign out_to_pins_o   [OUT_PIN_MB4]  = spi_copi_i   [2];
  assign out_to_pins_en_o[OUT_PIN_MB4]  = spi_copi_en_i[2];

  assign out_to_pins_o   [OUT_PIN_MB7]  = uart_tx_i   [1];
  assign out_to_pins_en_o[OUT_PIN_MB7]  = uart_tx_en_i[1];

  assign out_to_pins_o   [OUT_PIN_MB10] = pwm_out_i   [0][0];
  assign out_to_pins_en_o[OUT_PIN_MB10] = pwm_out_en_i[0][0];

  // --- AppSPI / MicroSD output pins → SPI[0] ---
  // (bypassed in top_sonata by XIP controller — these are the pinmux defaults)
  assign out_to_pins_o   [OUT_PIN_APPSPI_D0]  = spi_copi_i   [0];
  assign out_to_pins_en_o[OUT_PIN_APPSPI_D0]  = spi_copi_en_i[0];

  assign out_to_pins_o   [OUT_PIN_APPSPI_CLK] = spi_sclk_i   [0];
  assign out_to_pins_en_o[OUT_PIN_APPSPI_CLK] = spi_sclk_en_i[0];

  assign out_to_pins_o   [OUT_PIN_APPSPI_CS]  = spi_cs_i   [0][0];
  assign out_to_pins_en_o[OUT_PIN_APPSPI_CS]  = spi_cs_en_i[0][0];

  assign out_to_pins_o   [OUT_PIN_MICROSD_CMD]  = spi_copi_i   [0];
  assign out_to_pins_en_o[OUT_PIN_MICROSD_CMD]  = spi_copi_en_i[0];

  assign out_to_pins_o   [OUT_PIN_MICROSD_CLK]  = spi_sclk_i   [0];
  assign out_to_pins_en_o[OUT_PIN_MICROSD_CLK]  = spi_sclk_en_i[0];

  assign out_to_pins_o   [OUT_PIN_MICROSD_DAT3] = spi_cs_i   [0][1];
  assign out_to_pins_en_o[OUT_PIN_MICROSD_DAT3] = spi_cs_en_i[0][1];

  // ===========================================================================
  // Input pins (active-low or direct sense)
  // ===========================================================================

  // --- UART RX ---
  assign uart_rx_o[0] = in_from_pins_i[IN_PIN_SER0_RX];
  assign uart_rx_o[1] = in_from_pins_i[IN_PIN_SER1_RX];
  // Default for UART2 RX: first entry = SER1_RX (from the mux list), but
  // the *intended* default is RS232_RX (index 2 in the mux, selector 5'b10).
  // At reset, selector = 5'b10 which picks in_i[1] = in_from_pins_i[IN_PIN_SER1_RX].
  // Wait — the mux inputs are listed MSB-first: {1'b1, SER1_RX, RS232_RX, RS485_RX, PMOD1_3}
  // sel=5'b00010 picks inputs[1] = SER1_RX.
  // Actually — one-hot selector: bit 1 selects the *second* entry from LSB side.
  // The prim_onehot_mux input list is MSB-first, so inputs[1] = SER1_RX.
  // Looking more carefully: inputs are {const, option1, option2, option3, option4},
  // and sel=5'b00010 picks option1 = SER1_RX.
  // But that seems wrong for a dedicated RS232 UART. Let me just follow pinmux.sv exactly:
  // inputs[4]=1'b1, inputs[3]=SER1_RX, inputs[2]=RS232_RX, inputs[1]=RS485_RX, inputs[0]=PMOD1_3
  // sel=5'b00010 → bit 1 → inputs[1] = RS485_RX?
  // No — the prim_onehot_mux in_i array is given as:
  //   .in_i({1'b1, SER1_RX, RS232_RX, RS485_RX, PMOD1_3})
  // This is a concat so in_i[4]=1'b1, in_i[3]=SER1_RX, in_i[2]=RS232_RX, in_i[1]=RS485_RX
  // Wait, no — in SystemVerilog {a,b,c,d,e} makes a 5-bit vector with a at MSB.
  // For a prim_onehot_mux with Width=1 and Inputs=5, in_i is [4:0] where:
  //   in_i[4]=PMOD1_3, in_i[3]=RS485_RX, in_i[2]=RS232_RX, in_i[1]=SER1_RX, in_i[0]=1'b1
  // Actually the concat {1'b1, SER1_RX, RS232_RX, RS485_RX, PMOD1_3} has:
  //   bit 4 = 1'b1 (first listed), bit 0 = PMOD1_3 (last listed).
  // sel = 5'b00010 → bit 1 → selects in_i[1] = SER1_RX.
  // Hmm, but the comment says "first pin in config". For uart_rx_2, the first pin
  // listed in config is SER1_RX, which is correct.
  // OK, so at default reset: uart_rx_o[2] = in_from_pins_i[IN_PIN_SER1_RX].
  assign uart_rx_o[2] = in_from_pins_i[IN_PIN_SER1_RX];

  // --- SPI CIPO ---
  // spi_cipo_0: default = in_from_pins_i[IN_PIN_APPSPI_D1]
  //   mux: {1'b0, APPSPI_D1, MICROSD_DAT0}, sel=3'b010 → bit 1 = APPSPI_D1
  assign spi_cipo_o[0] = in_from_pins_i[IN_PIN_APPSPI_D1];

  // spi_cipo_1: default = inout_from_pins_i[INOUT_PIN_RPH_G9]
  //   mux: {1'b0, RPH_G9, AH_TMPIO12, PMOD0_3}, sel=4'b0010 → bit 1 = RPH_G9
  assign spi_cipo_o[1] = inout_from_pins_i[INOUT_PIN_RPH_G9];

  // spi_cipo_2: default = inout_from_pins_i[INOUT_PIN_RPH_G19]
  //   mux: {1'b0, RPH_G19, MB3, PMOD1_3}, sel=4'b0010 → bit 1 = RPH_G19
  assign spi_cipo_o[2] = inout_from_pins_i[INOUT_PIN_RPH_G19];

  // --- I2C inputs (open-drain: AND of all connected pads) ---
  // At default, only the primary I2C pad is connected (selector for alt pads ≠ their I2C option),
  // so the AND simplifies to just the primary pad.
  assign i2c_scl_o[0] = inout_from_pins_i[INOUT_PIN_SCL0];
  assign i2c_sda_o[0] = inout_from_pins_i[INOUT_PIN_SDA0];
  assign i2c_scl_o[1] = inout_from_pins_i[INOUT_PIN_SCL1];
  assign i2c_sda_o[1] = inout_from_pins_i[INOUT_PIN_SDA1];

  // --- GPIO inputs from inout pins ---
  // GPIO[0] is the fixed instance (RPH pads), handled directly in sonata_system.
  // GPIO[1..4] inputs come from inout pad feedback.
  // Default: each GPIO bit reads from its default inout pin.

  // GPIO[0] (RPH pads) — bits [0..27] from RPH pad feedback, [28..31] = 0
  // Note: gpio_ios_o[0] connects to gpio_from_pins[1] (GPIO instance 1) in sonata_system.
  assign gpio_ios_o[0][0]  = inout_from_pins_i[INOUT_PIN_RPH_G0];
  assign gpio_ios_o[0][1]  = inout_from_pins_i[INOUT_PIN_RPH_G1];
  assign gpio_ios_o[0][2]  = inout_from_pins_i[INOUT_PIN_RPH_G2_SDA];
  assign gpio_ios_o[0][3]  = inout_from_pins_i[INOUT_PIN_RPH_G3_SCL];
  assign gpio_ios_o[0][4]  = inout_from_pins_i[INOUT_PIN_RPH_G4];
  assign gpio_ios_o[0][5]  = inout_from_pins_i[INOUT_PIN_RPH_G5];
  assign gpio_ios_o[0][6]  = inout_from_pins_i[INOUT_PIN_RPH_G6];
  assign gpio_ios_o[0][7]  = inout_from_pins_i[INOUT_PIN_RPH_G7];
  assign gpio_ios_o[0][8]  = inout_from_pins_i[INOUT_PIN_RPH_G8];
  assign gpio_ios_o[0][9]  = inout_from_pins_i[INOUT_PIN_RPH_G9];
  assign gpio_ios_o[0][10] = inout_from_pins_i[INOUT_PIN_RPH_G10];
  assign gpio_ios_o[0][11] = inout_from_pins_i[INOUT_PIN_RPH_G11];
  assign gpio_ios_o[0][12] = inout_from_pins_i[INOUT_PIN_RPH_G12];
  assign gpio_ios_o[0][13] = inout_from_pins_i[INOUT_PIN_RPH_G13];
  assign gpio_ios_o[0][14] = inout_from_pins_i[INOUT_PIN_RPH_TXD0];
  assign gpio_ios_o[0][15] = inout_from_pins_i[INOUT_PIN_RPH_RXD0];
  assign gpio_ios_o[0][16] = inout_from_pins_i[INOUT_PIN_RPH_G16];
  assign gpio_ios_o[0][17] = inout_from_pins_i[INOUT_PIN_RPH_G17];
  assign gpio_ios_o[0][18] = inout_from_pins_i[INOUT_PIN_RPH_G18];
  assign gpio_ios_o[0][19] = inout_from_pins_i[INOUT_PIN_RPH_G19];
  assign gpio_ios_o[0][20] = inout_from_pins_i[INOUT_PIN_RPH_G20];
  assign gpio_ios_o[0][21] = inout_from_pins_i[INOUT_PIN_RPH_G21];
  assign gpio_ios_o[0][22] = inout_from_pins_i[INOUT_PIN_RPH_G22];
  assign gpio_ios_o[0][23] = inout_from_pins_i[INOUT_PIN_RPH_G23];
  assign gpio_ios_o[0][24] = inout_from_pins_i[INOUT_PIN_RPH_G24];
  assign gpio_ios_o[0][25] = inout_from_pins_i[INOUT_PIN_RPH_G25];
  assign gpio_ios_o[0][26] = inout_from_pins_i[INOUT_PIN_RPH_G26];
  assign gpio_ios_o[0][27] = inout_from_pins_i[INOUT_PIN_RPH_G27];
  assign gpio_ios_o[0][31:28] = 4'b0;

  // GPIO[1] (Arduino header) — bits [0..13] from AH_TMPIO pads
  generate
    for (genvar i = 0; i < 32; i++) begin : gen_gpio1_in
      if (i <= 13) begin : gen_ah
        // AH_TMPIO0..13 → GPIO[1][0..13]
        assign gpio_ios_o[1][i] = inout_from_pins_i[INOUT_PIN_AH_TMPIO0 + i];
      end else begin : gen_zero
        assign gpio_ios_o[1][i] = 1'b0;
      end
    end
  endgenerate

  // GPIO[2] (PMOD0) — bits [0..7] from PMOD0 pads
  generate
    for (genvar i = 0; i < 32; i++) begin : gen_gpio2_in
      if (i < 4) begin : gen_lo
        assign gpio_ios_o[2][i] = inout_from_pins_i[INOUT_PIN_PMOD0_1 + i];
      end else if (i < 8) begin : gen_hi
        // PMOD0_7..10 are at indices 52..55 (INOUT_PIN_PMOD0_7 = INOUT_PIN_PMOD0_1 + 4)
        assign gpio_ios_o[2][i] = inout_from_pins_i[INOUT_PIN_PMOD0_7 + (i - 4)];
      end else begin : gen_zero
        assign gpio_ios_o[2][i] = 1'b0;
      end
    end
  endgenerate

  // GPIO[3] (PMOD1) — bits [0..7] from PMOD1 pads
  generate
    for (genvar i = 0; i < 32; i++) begin : gen_gpio3_in
      if (i < 4) begin : gen_lo
        assign gpio_ios_o[3][i] = inout_from_pins_i[INOUT_PIN_PMOD1_1 + i];
      end else if (i < 8) begin : gen_hi
        assign gpio_ios_o[3][i] = inout_from_pins_i[INOUT_PIN_PMOD1_7 + (i - 4)];
      end else begin : gen_zero
        assign gpio_ios_o[3][i] = 1'b0;
      end
    end
  endgenerate

  // GPIO[4] (PMODC) — bits [0..5] from PMODC pads
  generate
    for (genvar i = 0; i < 32; i++) begin : gen_gpio4_in
      if (i < 6) begin : gen_used
        assign gpio_ios_o[4][i] = inout_from_pins_i[INOUT_PIN_PMODC_1 + i];
      end else begin : gen_zero
        assign gpio_ios_o[4][i] = 1'b0;
      end
    end
  endgenerate

  // ===========================================================================
  // Inout pins (active-high enable, directly to padring)
  // ===========================================================================

  // --- I2C (open-drain) ---
  assign inout_to_pins_o   [INOUT_PIN_SCL0] = i2c_scl_i   [0];
  assign inout_to_pins_en_o[INOUT_PIN_SCL0] = i2c_scl_en_i[0];
  assign inout_to_pins_o   [INOUT_PIN_SDA0] = i2c_sda_i   [0];
  assign inout_to_pins_en_o[INOUT_PIN_SDA0] = i2c_sda_en_i[0];
  assign inout_to_pins_o   [INOUT_PIN_SCL1] = i2c_scl_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_SCL1] = i2c_scl_en_i[1];
  assign inout_to_pins_o   [INOUT_PIN_SDA1] = i2c_sda_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_SDA1] = i2c_sda_en_i[1];

  // --- RPi HAT → GPIO[0] pins (28 pins) ---
  // RPH_G0 = I2C SDA0, RPH_G1 = I2C SCL0, RPH_G2 = I2C SDA1, RPH_G3 = I2C SCL1
  assign inout_to_pins_o   [INOUT_PIN_RPH_G0]     = i2c_sda_i   [0];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G0]     = i2c_sda_en_i[0];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G1]     = i2c_scl_i   [0];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G1]     = i2c_scl_en_i[0];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G2_SDA] = i2c_sda_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G2_SDA] = i2c_sda_en_i[1];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G3_SCL] = i2c_scl_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G3_SCL] = i2c_scl_en_i[1];

  // RPH_G4..G6 → GPIO[0][4..6]
  assign inout_to_pins_o   [INOUT_PIN_RPH_G4] = gpio_ios_i   [0][4];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G4] = gpio_ios_en_i[0][4];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G5] = gpio_ios_i   [0][5];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G5] = gpio_ios_en_i[0][5];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G6] = gpio_ios_i   [0][6];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G6] = gpio_ios_en_i[0][6];

  // RPH_G7 → SPI[1] CS1
  assign inout_to_pins_o   [INOUT_PIN_RPH_G7] = spi_cs_i   [1][1];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G7] = spi_cs_en_i[1][1];

  // RPH_G8 → SPI[1] CS0
  assign inout_to_pins_o   [INOUT_PIN_RPH_G8] = spi_cs_i   [1][0];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G8] = spi_cs_en_i[1][0];

  // RPH_G9 → GPIO[0][9]
  assign inout_to_pins_o   [INOUT_PIN_RPH_G9] = gpio_ios_i   [0][9];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G9] = gpio_ios_en_i[0][9];

  // RPH_G10 → SPI[1] COPI
  assign inout_to_pins_o   [INOUT_PIN_RPH_G10] = spi_copi_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G10] = spi_copi_en_i[1];

  // RPH_G11 → SPI[1] SCLK
  assign inout_to_pins_o   [INOUT_PIN_RPH_G11] = spi_sclk_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G11] = spi_sclk_en_i[1];

  // RPH_G12..G13 → GPIO[0][12..13]
  assign inout_to_pins_o   [INOUT_PIN_RPH_G12] = gpio_ios_i   [0][12];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G12] = gpio_ios_en_i[0][12];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G13] = gpio_ios_i   [0][13];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G13] = gpio_ios_en_i[0][13];

  // RPH_TXD0 → UART[1] TX
  assign inout_to_pins_o   [INOUT_PIN_RPH_TXD0] = uart_tx_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_TXD0] = uart_tx_en_i[1];

  // RPH_RXD0 → GPIO[0][15]
  assign inout_to_pins_o   [INOUT_PIN_RPH_RXD0] = gpio_ios_i   [0][15];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_RXD0] = gpio_ios_en_i[0][15];

  // RPH_G16..G18 → SPI[2] CS2, CS1, CS0
  assign inout_to_pins_o   [INOUT_PIN_RPH_G16] = spi_cs_i   [2][2];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G16] = spi_cs_en_i[2][2];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G17] = spi_cs_i   [2][1];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G17] = spi_cs_en_i[2][1];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G18] = spi_cs_i   [2][0];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G18] = spi_cs_en_i[2][0];

  // RPH_G19 → GPIO[0][19]
  assign inout_to_pins_o   [INOUT_PIN_RPH_G19] = gpio_ios_i   [0][19];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G19] = gpio_ios_en_i[0][19];

  // RPH_G20 → SPI[2] COPI
  assign inout_to_pins_o   [INOUT_PIN_RPH_G20] = spi_copi_i   [2];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G20] = spi_copi_en_i[2];

  // RPH_G21 → SPI[2] SCLK
  assign inout_to_pins_o   [INOUT_PIN_RPH_G21] = spi_sclk_i   [2];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G21] = spi_sclk_en_i[2];

  // RPH_G22..G27 → GPIO[0][22..27]
  assign inout_to_pins_o   [INOUT_PIN_RPH_G22] = gpio_ios_i   [0][22];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G22] = gpio_ios_en_i[0][22];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G23] = gpio_ios_i   [0][23];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G23] = gpio_ios_en_i[0][23];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G24] = gpio_ios_i   [0][24];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G24] = gpio_ios_en_i[0][24];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G25] = gpio_ios_i   [0][25];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G25] = gpio_ios_en_i[0][25];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G26] = gpio_ios_i   [0][26];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G26] = gpio_ios_en_i[0][26];
  assign inout_to_pins_o   [INOUT_PIN_RPH_G27] = gpio_ios_i   [0][27];
  assign inout_to_pins_en_o[INOUT_PIN_RPH_G27] = gpio_ios_en_i[0][27];

  // --- Arduino header → GPIO[1] (14 pins: AH_TMPIO0..13) ---
  // AH_TMPIO0 → GPIO[1][0]
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO0] = gpio_ios_i   [1][0];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO0] = gpio_ios_en_i[1][0];

  // AH_TMPIO1 → UART[1] TX (default from pinmux)
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO1] = uart_tx_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO1] = uart_tx_en_i[1];

  // AH_TMPIO2..9 → GPIO[1][2..9]
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO2] = gpio_ios_i   [1][2];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO2] = gpio_ios_en_i[1][2];
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO3] = gpio_ios_i   [1][3];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO3] = gpio_ios_en_i[1][3];
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO4] = gpio_ios_i   [1][4];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO4] = gpio_ios_en_i[1][4];
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO5] = gpio_ios_i   [1][5];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO5] = gpio_ios_en_i[1][5];
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO6] = gpio_ios_i   [1][6];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO6] = gpio_ios_en_i[1][6];
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO7] = gpio_ios_i   [1][7];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO7] = gpio_ios_en_i[1][7];
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO8] = gpio_ios_i   [1][8];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO8] = gpio_ios_en_i[1][8];
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO9] = gpio_ios_i   [1][9];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO9] = gpio_ios_en_i[1][9];

  // AH_TMPIO10 → SPI[1] CS3
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO10] = spi_cs_i   [1][3];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO10] = spi_cs_en_i[1][3];

  // AH_TMPIO11 → SPI[1] COPI
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO11] = spi_copi_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO11] = spi_copi_en_i[1];

  // AH_TMPIO12 → GPIO[1][12]
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO12] = gpio_ios_i   [1][12];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO12] = gpio_ios_en_i[1][12];

  // AH_TMPIO13 → SPI[1] SCLK
  assign inout_to_pins_o   [INOUT_PIN_AH_TMPIO13] = spi_sclk_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_AH_TMPIO13] = spi_sclk_en_i[1];

  // --- MikroBus inout pins ---
  // MB5 → I2C SDA1
  assign inout_to_pins_o   [INOUT_PIN_MB5] = i2c_sda_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_MB5] = i2c_sda_en_i[1];

  // MB6 → I2C SCL1
  assign inout_to_pins_o   [INOUT_PIN_MB6] = i2c_scl_i   [1];
  assign inout_to_pins_en_o[INOUT_PIN_MB6] = i2c_scl_en_i[1];

  // --- PMOD0 → GPIO[2] (8 pins) ---
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_1]  = gpio_ios_i   [2][0];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_1]  = gpio_ios_en_i[2][0];
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_2]  = gpio_ios_i   [2][1];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_2]  = gpio_ios_en_i[2][1];
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_3]  = gpio_ios_i   [2][2];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_3]  = gpio_ios_en_i[2][2];
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_4]  = gpio_ios_i   [2][3];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_4]  = gpio_ios_en_i[2][3];
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_7]  = gpio_ios_i   [2][4];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_7]  = gpio_ios_en_i[2][4];
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_8]  = gpio_ios_i   [2][5];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_8]  = gpio_ios_en_i[2][5];
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_9]  = gpio_ios_i   [2][6];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_9]  = gpio_ios_en_i[2][6];
  assign inout_to_pins_o   [INOUT_PIN_PMOD0_10] = gpio_ios_i   [2][7];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD0_10] = gpio_ios_en_i[2][7];

  // --- PMOD1 → GPIO[3] (8 pins) ---
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_1]  = gpio_ios_i   [3][0];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_1]  = gpio_ios_en_i[3][0];
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_2]  = gpio_ios_i   [3][1];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_2]  = gpio_ios_en_i[3][1];
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_3]  = gpio_ios_i   [3][2];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_3]  = gpio_ios_en_i[3][2];
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_4]  = gpio_ios_i   [3][3];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_4]  = gpio_ios_en_i[3][3];
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_7]  = gpio_ios_i   [3][4];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_7]  = gpio_ios_en_i[3][4];
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_8]  = gpio_ios_i   [3][5];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_8]  = gpio_ios_en_i[3][5];
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_9]  = gpio_ios_i   [3][6];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_9]  = gpio_ios_en_i[3][6];
  assign inout_to_pins_o   [INOUT_PIN_PMOD1_10] = gpio_ios_i   [3][7];
  assign inout_to_pins_en_o[INOUT_PIN_PMOD1_10] = gpio_ios_en_i[3][7];

  // --- PMODC → GPIO[4] (6 pins) ---
  assign inout_to_pins_o   [INOUT_PIN_PMODC_1] = gpio_ios_i   [4][0];
  assign inout_to_pins_en_o[INOUT_PIN_PMODC_1] = gpio_ios_en_i[4][0];
  assign inout_to_pins_o   [INOUT_PIN_PMODC_2] = gpio_ios_i   [4][1];
  assign inout_to_pins_en_o[INOUT_PIN_PMODC_2] = gpio_ios_en_i[4][1];
  assign inout_to_pins_o   [INOUT_PIN_PMODC_3] = gpio_ios_i   [4][2];
  assign inout_to_pins_en_o[INOUT_PIN_PMODC_3] = gpio_ios_en_i[4][2];
  assign inout_to_pins_o   [INOUT_PIN_PMODC_4] = gpio_ios_i   [4][3];
  assign inout_to_pins_en_o[INOUT_PIN_PMODC_4] = gpio_ios_en_i[4][3];
  assign inout_to_pins_o   [INOUT_PIN_PMODC_5] = gpio_ios_i   [4][4];
  assign inout_to_pins_en_o[INOUT_PIN_PMODC_5] = gpio_ios_en_i[4][4];
  assign inout_to_pins_o   [INOUT_PIN_PMODC_6] = gpio_ios_i   [4][5];
  assign inout_to_pins_en_o[INOUT_PIN_PMODC_6] = gpio_ios_en_i[4][5];

  // ===========================================================================
  // Unused signal tie-offs
  // ===========================================================================
  logic _unused;
  assign _unused = ^{clk_i, rst_ni,
    in_from_pins_i[IN_PIN_RS232_RX],
    in_from_pins_i[IN_PIN_RS485_RX],
    in_from_pins_i[IN_PIN_MB3],
    in_from_pins_i[IN_PIN_MICROSD_DAT0],
    pwm_out_i[0], pwm_out_en_i[0],
    spi_copi_i[0], spi_copi_en_i[0],
    spi_sclk_i[0], spi_sclk_en_i[0],
    spi_cs_i[0], spi_cs_en_i[0],
    uart_tx_i[2], uart_tx_en_i[2],
    gpio_ios_i[0], gpio_ios_en_i[0],
    gpio_ios_i[1], gpio_ios_en_i[1],
    gpio_ios_i[2], gpio_ios_en_i[2],
    gpio_ios_i[3], gpio_ios_en_i[3],
    gpio_ios_i[4], gpio_ios_en_i[4],
    i2c_scl_i[0], i2c_scl_en_i[0],
    i2c_sda_i[0], i2c_sda_en_i[0],
    i2c_scl_i[1], i2c_scl_en_i[1],
    i2c_sda_i[1], i2c_sda_en_i[1],
    spi_copi_i[1], spi_copi_en_i[1],
    spi_sclk_i[1], spi_sclk_en_i[1],
    spi_cs_i[1], spi_cs_en_i[1],
    spi_copi_i[2], spi_copi_en_i[2],
    spi_sclk_i[2], spi_sclk_en_i[2],
    spi_cs_i[2], spi_cs_en_i[2],
    inout_from_pins_i};

endmodule
