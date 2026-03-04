// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// SPI Flash I/O buffer — DDR pads, IDELAY, capture BRAM.
// All I/O primitives for the QSPI flash, clocked by clk_sys.
//
// When SPI_CAPTURE_EN is defined: full capture BRAM + FSM + MMCM + IDELAYCTRL + IDELAYE2.
// When not defined: no BRAM, no capture FSM, no MMCM, IDDR fed directly from IBUF.

module spi_flash_iobuf #(
  parameter bit SimMode = 1'b0  // 1 = simulation: bypass IOBUF, use sim_d_i/sim_d_o
) (
  input  logic       clk_sys_i,     // system clock (30 MHz on FPGA)
  input  logic       rst_sys_ni,

  // ---- Pad-facing signals (directly to top-level ports) ----
  output logic       appspi_clk_o,  // SPI clock pad
  output logic       appspi_cs_o,   // SPI CS pad
  inout  wire        appspi_d0_io,  // QSPI data pads
  inout  wire        appspi_d1_io,
  inout  wire        appspi_d2_io,
  inout  wire        appspi_d3_io,

  // ---- Simulation-only flash model ports (active when SimMode=1) ----
  input  logic [3:0] sim_d_i,       // Flash model data output → IDELAY → IDDR
  output logic [3:0] sim_d_o,       // ODDR data output → flash model d_i

  // ---- Core-facing signals (from/to spi_flash_xip) ----
  input  logic       spi_clk_d1_i,
  input  logic       spi_clk_d2_i,
  input  logic       spi_cs_n_i,
  input  logic [3:0] spi_d_d1_i,
  input  logic [3:0] spi_d_d2_i,
  output logic [3:0] spi_d_q1_o,
  output logic [3:0] spi_d_q2_o,
  input  logic [3:0] spi_d_oe_i,

  // ---- Capture BRAM interface ----
  input  logic        cap_arm_i,
  input  logic        cap_force_trig_i,
  input  logic [3:0]  cap_trig_sel_i,
  output logic        cap_done_o,
  output logic        cap_idelay_rdy_o,
  input  logic [10:0] cap_rd_addr_i,
  output logic [31:0] cap_rd_data_o,
  input  logic [11:0] cap_length_i,

  // ---- IDELAY tap control ----
  input  logic [31:0] idelay_tap_i,
  input  logic        idelay_tap_wr_i
);

  // =========================================================================
  // SPI Clock ODDR
  // =========================================================================
  ODDR #(
    .DDR_CLK_EDGE ("SAME_EDGE"),
    .INIT         (1'b0),
    .SRTYPE       ("ASYNC")
  ) u_spi_clk_oddr (
    .Q  (appspi_clk_o),
    .C  (clk_sys_i),
    .CE (1'b1),
    .D1 (spi_clk_d1_i),
    .D2 (spi_clk_d2_i),
    .R  (1'b0),
    .S  (1'b0)
  );

  // =========================================================================
  // SPI CS — ODDR pass-through (D1=D2 for matched timing with data/clock ODDRs)
  // =========================================================================
  ODDR #(
    .DDR_CLK_EDGE ("SAME_EDGE"),
    .INIT         (1'b1),       // CS deasserted at reset
    .SRTYPE       ("ASYNC")
  ) u_oddr_cs (
    .Q  (appspi_cs_o),
    .C  (clk_sys_i),
    .CE (1'b1),
    .D1 (spi_cs_n_i),
    .D2 (spi_cs_n_i),
    .R  (1'b0),
    .S  (1'b0)
  );

  // =========================================================================
  // QSPI Data I/O chains — IOBUF + ODDR + IDDR (×4)
  // =========================================================================
  wire [3:0] iobuf_o;      // IOBUF output (from pad)
  wire [3:0] iobuf_i;      // IOBUF input (to pad, from ODDR)

  // sim_d_o exposes ODDR outputs for flash model d_i
  assign sim_d_o = iobuf_i;

  // =========================================================================
  // Simulation pad-delay model (SimMode only)
  // =========================================================================
  // On real FPGA, the round-trip ODDR→pad→flash→pad→IDDR adds ~12-18 ns
  // of propagation delay. At 30 MHz (33 ns period) this shifts the flash
  // response by roughly one clk_sys cycle relative to simulation, where the
  // flash model responds with zero delay.  Adding a 1-cycle register on the
  // sim_d_i path before the IDELAYE2/IDDR input models this propagation
  // delay and allows div=0 (full-speed DDR) to work correctly in simulation
  // with the same read_delay settings used on FPGA.
  logic [3:0] sim_d_i_delayed;
  if (SimMode) begin : gen_sim_pad_delay
    always_ff @(posedge clk_sys_i or negedge rst_sys_ni) begin
      if (!rst_sys_ni)
        sim_d_i_delayed <= 4'h0;
      else
        sim_d_i_delayed <= sim_d_i;
    end
  end else begin : gen_no_pad_delay
    assign sim_d_i_delayed = 4'h0;  // unused in FPGA mode
  end

`ifdef SPI_CAPTURE_EN
  // =========================================================================
  // MMCM: clk_sys → 200 MHz for IDELAYCTRL
  // NOTE: parameters below must match SysClkFreq (currently 30 MHz).
  // =========================================================================
  wire clk_200m;
  wire mmcm_locked;
  wire mmcm_fb;

  MMCME2_BASE #(
    .CLKFBOUT_MULT_F  (20.0),    // 30 × 20 = 600 MHz VCO
    .CLKOUT0_DIVIDE_F (3.0),     // 600 / 3 = 200 MHz
    .CLKIN1_PERIOD     (33.333),  // 30 MHz = 33.333 ns
    .DIVCLK_DIVIDE     (1)
  ) u_mmcm_200m (
    .CLKOUT0   (clk_200m),
    .CLKOUT0B  (),
    .CLKOUT1   (),
    .CLKOUT1B  (),
    .CLKOUT2   (),
    .CLKOUT2B  (),
    .CLKOUT3   (),
    .CLKOUT3B  (),
    .CLKOUT4   (),
    .CLKOUT5   (),
    .CLKOUT6   (),
    .CLKFBOUT  (mmcm_fb),
    .CLKFBOUTB (),
    .LOCKED    (mmcm_locked),
    .CLKIN1    (clk_sys_i),
    .PWRDWN    (1'b0),
    .RST       (~rst_sys_ni),
    .CLKFBIN   (mmcm_fb)
  );

  // =========================================================================
  // IDELAYCTRL
  // =========================================================================
  wire idelay_rdy;

  IDELAYCTRL u_idelayctrl (
    .RDY    (idelay_rdy),
    .REFCLK (clk_200m),
    .RST    (~rst_sys_ni | ~mmcm_locked)
  );

  assign cap_idelay_rdy_o = idelay_rdy;

  // IDELAYE2 outputs
  wire [3:0] idelay_out;

  // In SimMode, IDELAYE2 input comes from the delayed sim_d_i (flash model
  // output + pad-delay register) instead of iobuf_o (bidirectional pad).
  wire [3:0] idelay_in = SimMode ? sim_d_i_delayed : iobuf_o;

  // Per-bit IDELAY tap values
  wire [4:0] tap_d0 = idelay_tap_i[4:0];
  wire [4:0] tap_d1 = idelay_tap_i[12:8];
  wire [4:0] tap_d2 = idelay_tap_i[20:16];
  wire [4:0] tap_d3 = idelay_tap_i[28:24];

  // --- D0 IDELAYE2 ---
  IDELAYE2 #(.IDELAY_TYPE("VAR_LOAD"), .DELAY_SRC("IDATAIN"), .IDELAY_VALUE(0),
             .SIGNAL_PATTERN("DATA"), .REFCLK_FREQUENCY(200.0),
             .HIGH_PERFORMANCE_MODE("TRUE"), .PIPE_SEL("FALSE"), .CINVCTRL_SEL("FALSE"))
  u_idelay_d0 (.DATAOUT(idelay_out[0]), .IDATAIN(idelay_in[0]), .DATAIN(1'b0),
               .C(clk_sys_i), .CE(1'b0), .INC(1'b0), .LD(idelay_tap_wr_i),
               .LDPIPEEN(1'b0), .REGRST(1'b0), .CNTVALUEIN(tap_d0), .CNTVALUEOUT());

  // --- D1 IDELAYE2 ---
  IDELAYE2 #(.IDELAY_TYPE("VAR_LOAD"), .DELAY_SRC("IDATAIN"), .IDELAY_VALUE(0),
             .SIGNAL_PATTERN("DATA"), .REFCLK_FREQUENCY(200.0),
             .HIGH_PERFORMANCE_MODE("TRUE"), .PIPE_SEL("FALSE"), .CINVCTRL_SEL("FALSE"))
  u_idelay_d1 (.DATAOUT(idelay_out[1]), .IDATAIN(idelay_in[1]), .DATAIN(1'b0),
               .C(clk_sys_i), .CE(1'b0), .INC(1'b0), .LD(idelay_tap_wr_i),
               .LDPIPEEN(1'b0), .REGRST(1'b0), .CNTVALUEIN(tap_d1), .CNTVALUEOUT());

  // --- D2 IDELAYE2 ---
  IDELAYE2 #(.IDELAY_TYPE("VAR_LOAD"), .DELAY_SRC("IDATAIN"), .IDELAY_VALUE(0),
             .SIGNAL_PATTERN("DATA"), .REFCLK_FREQUENCY(200.0),
             .HIGH_PERFORMANCE_MODE("TRUE"), .PIPE_SEL("FALSE"), .CINVCTRL_SEL("FALSE"))
  u_idelay_d2 (.DATAOUT(idelay_out[2]), .IDATAIN(idelay_in[2]), .DATAIN(1'b0),
               .C(clk_sys_i), .CE(1'b0), .INC(1'b0), .LD(idelay_tap_wr_i),
               .LDPIPEEN(1'b0), .REGRST(1'b0), .CNTVALUEIN(tap_d2), .CNTVALUEOUT());

  // --- D3 IDELAYE2 ---
  IDELAYE2 #(.IDELAY_TYPE("VAR_LOAD"), .DELAY_SRC("IDATAIN"), .IDELAY_VALUE(0),
             .SIGNAL_PATTERN("DATA"), .REFCLK_FREQUENCY(200.0),
             .HIGH_PERFORMANCE_MODE("TRUE"), .PIPE_SEL("FALSE"), .CINVCTRL_SEL("FALSE"))
  u_idelay_d3 (.DATAOUT(idelay_out[3]), .IDATAIN(idelay_in[3]), .DATAIN(1'b0),
               .C(clk_sys_i), .CE(1'b0), .INC(1'b0), .LD(idelay_tap_wr_i),
               .LDPIPEEN(1'b0), .REGRST(1'b0), .CNTVALUEIN(tap_d3), .CNTVALUEOUT());

  // IDDR input comes from IDELAYE2
  wire [3:0] iddr_in = idelay_out;

  logic _unused_idelay_bits;
  assign _unused_idelay_bits = ^{idelay_tap_i[31:29], idelay_tap_i[23:21],
                                  idelay_tap_i[15:13], idelay_tap_i[7:5]};

`else // !SPI_CAPTURE_EN
  // No MMCM, no IDELAYCTRL, no IDELAYE2 — IDDR fed directly from IBUF/sim_d_i
  assign cap_idelay_rdy_o = 1'b0;

  wire [3:0] iddr_in = SimMode ? sim_d_i_delayed : iobuf_o;

  logic _unused_idelay;
  assign _unused_idelay = ^{idelay_tap_i, idelay_tap_wr_i};
`endif

  // =========================================================================
  // IOBUF + ODDR + IDDR (×4)
  // =========================================================================

  // --- D0 ---
  IOBUF u_iobuf_d0 (
    .O  (iobuf_o[0]),
    .IO (appspi_d0_io),
    .I  (iobuf_i[0]),
    .T  (~spi_d_oe_i[0])
  );

  ODDR #(.DDR_CLK_EDGE("SAME_EDGE"), .INIT(1'b0), .SRTYPE("ASYNC"))
  u_oddr_d0 (.Q(iobuf_i[0]), .C(clk_sys_i), .CE(1'b1),
             .D1(spi_d_d1_i[0]), .D2(spi_d_d2_i[0]), .R(1'b0), .S(1'b0));

  IDDR #(.DDR_CLK_EDGE("SAME_EDGE_PIPELINED"), .INIT_Q1(1'b0), .INIT_Q2(1'b0), .SRTYPE("ASYNC"))
  u_iddr_d0 (.Q1(spi_d_q1_o[0]), .Q2(spi_d_q2_o[0]), .C(clk_sys_i), .CE(1'b1),
             .D(iddr_in[0]), .R(1'b0), .S(1'b0));

  // --- D1 ---
  IOBUF u_iobuf_d1 (
    .O  (iobuf_o[1]),
    .IO (appspi_d1_io),
    .I  (iobuf_i[1]),
    .T  (~spi_d_oe_i[1])
  );

  ODDR #(.DDR_CLK_EDGE("SAME_EDGE"), .INIT(1'b0), .SRTYPE("ASYNC"))
  u_oddr_d1 (.Q(iobuf_i[1]), .C(clk_sys_i), .CE(1'b1),
             .D1(spi_d_d1_i[1]), .D2(spi_d_d2_i[1]), .R(1'b0), .S(1'b0));

  IDDR #(.DDR_CLK_EDGE("SAME_EDGE_PIPELINED"), .INIT_Q1(1'b0), .INIT_Q2(1'b0), .SRTYPE("ASYNC"))
  u_iddr_d1 (.Q1(spi_d_q1_o[1]), .Q2(spi_d_q2_o[1]), .C(clk_sys_i), .CE(1'b1),
             .D(iddr_in[1]), .R(1'b0), .S(1'b0));

  // --- D2 ---
  IOBUF u_iobuf_d2 (
    .O  (iobuf_o[2]),
    .IO (appspi_d2_io),
    .I  (iobuf_i[2]),
    .T  (~spi_d_oe_i[2])
  );

  ODDR #(.DDR_CLK_EDGE("SAME_EDGE"), .INIT(1'b0), .SRTYPE("ASYNC"))
  u_oddr_d2 (.Q(iobuf_i[2]), .C(clk_sys_i), .CE(1'b1),
             .D1(spi_d_d1_i[2]), .D2(spi_d_d2_i[2]), .R(1'b0), .S(1'b0));

  IDDR #(.DDR_CLK_EDGE("SAME_EDGE_PIPELINED"), .INIT_Q1(1'b0), .INIT_Q2(1'b0), .SRTYPE("ASYNC"))
  u_iddr_d2 (.Q1(spi_d_q1_o[2]), .Q2(spi_d_q2_o[2]), .C(clk_sys_i), .CE(1'b1),
             .D(iddr_in[2]), .R(1'b0), .S(1'b0));

  // --- D3 ---
  IOBUF u_iobuf_d3 (
    .O  (iobuf_o[3]),
    .IO (appspi_d3_io),
    .I  (iobuf_i[3]),
    .T  (~spi_d_oe_i[3])
  );

  ODDR #(.DDR_CLK_EDGE("SAME_EDGE"), .INIT(1'b0), .SRTYPE("ASYNC"))
  u_oddr_d3 (.Q(iobuf_i[3]), .C(clk_sys_i), .CE(1'b1),
             .D1(spi_d_d1_i[3]), .D2(spi_d_d2_i[3]), .R(1'b0), .S(1'b0));

  IDDR #(.DDR_CLK_EDGE("SAME_EDGE_PIPELINED"), .INIT_Q1(1'b0), .INIT_Q2(1'b0), .SRTYPE("ASYNC"))
  u_iddr_d3 (.Q1(spi_d_q1_o[3]), .Q2(spi_d_q2_o[3]), .C(clk_sys_i), .CE(1'b1),
             .D(iddr_in[3]), .R(1'b0), .S(1'b0));

`ifdef SPI_CAPTURE_EN
  // =========================================================================
  // Capture BRAM + FSM
  // =========================================================================
  // 9-bit sample format: {cs_n, d_out[3:0], d_in[3:0]}
  //   bit 8: cs_n (chip select, active low)
  //   bits 7:4: d_out[3:0] — ODDR D1 values (what controller is sending)
  //   bits 3:0: d_in[3:0]  — IDDR Q1 values (what flash is returning)
  // One sample per clk_sys cycle.

  typedef enum logic [1:0] {
    CAP_IDLE,
    CAP_ARMED,
    CAP_CAPTURING,
    CAP_DONE
  } cap_state_e;

  cap_state_e cap_state_q;
  logic [11:0] cap_wr_cnt;

  // 9-bit sample assembled each cycle
  wire [8:0] cap_sample = {spi_cs_n_i, spi_d_d1_i, spi_d_q1_o};

  // Trigger detection
  logic cap_trigger;
  always_comb begin
    cap_trigger = 1'b0;
    if (cap_force_trig_i) begin
      cap_trigger = 1'b1;
    end else begin
      case (cap_trig_sel_i)
        4'd0: cap_trigger = ~spi_cs_n_i;
        4'd1: cap_trigger = 1'b1;
        default: cap_trigger = ~spi_cs_n_i;
      endcase
    end
  end

  // Capture FSM
  logic cap_bram_we;

  always_ff @(posedge clk_sys_i or negedge rst_sys_ni) begin
    if (!rst_sys_ni) begin
      cap_state_q <= CAP_IDLE;
      cap_wr_cnt  <= '0;
      cap_bram_we <= 1'b0;
    end else begin
      cap_bram_we <= 1'b0;

      case (cap_state_q)
        CAP_IDLE: begin
          if (cap_arm_i) begin
            cap_state_q <= CAP_ARMED;
            cap_wr_cnt  <= '0;
          end
        end

        CAP_ARMED: begin
          if (cap_trigger) begin
            cap_state_q <= CAP_CAPTURING;
            cap_wr_cnt  <= '0;
          end
        end

        CAP_CAPTURING: begin
          cap_bram_we <= 1'b1;
          cap_wr_cnt  <= cap_wr_cnt + 12'd1;
          if (cap_wr_cnt + 12'd1 >= cap_length_i) begin
            cap_state_q <= CAP_DONE;
          end
        end

        CAP_DONE: begin
          if (cap_arm_i) begin
            cap_state_q <= CAP_ARMED;
            cap_wr_cnt  <= '0;
          end
        end
      endcase
    end
  end

  assign cap_done_o = (cap_state_q == CAP_DONE);

  // =========================================================================
  // Capture BRAM (RAMB36E1 in TDP mode, asymmetric widths)
  // =========================================================================
  // Write: 9-bit width (8 data + 1 parity), depth 4096
  //   Address bits [15:3], data = {1'b0, d_out[3:0], d_in[3:0]}, parity = cs_n
  // Read: 18-bit width, depth 2048
  //   Returns 2 samples per read: bits [8:0] = even sample, [17:9] = odd sample
  //   Parity bits carry cs_n for each sample

  // Width-9 write: ADDR[14:3] = write address (4096 locations), ADDR[15] = 1 (no cascade)
  wire [15:0] cap_wr_addr_bram = {1'b1, cap_wr_cnt, 3'b000};
  wire [7:0]  cap_wr_data      = cap_sample[7:0];   // {d_out[3:0], d_in[3:0]}
  wire        cap_wr_parity    = cap_sample[8];      // cs_n

  // Width-18 read: ADDR[14:4] = read address (2048 locations), ADDR[15] = 1 (no cascade)
  wire [15:0] cap_rd_addr_bram = {1'b1, cap_rd_addr_i, 4'b0000};

  wire [31:0] cap_bram_rd_data;
  wire [3:0]  cap_bram_rd_par;

  RAMB36E1 #(
    .DOA_REG             (0),
    .DOB_REG             (0),
    .RAM_MODE            ("TDP"),
    .READ_WIDTH_A        (18),
    .WRITE_WIDTH_A       (18),
    .READ_WIDTH_B        (9),
    .WRITE_WIDTH_B       (9),
    .WRITE_MODE_A        ("READ_FIRST"),
    .WRITE_MODE_B        ("READ_FIRST"),
    .SIM_DEVICE          ("7SERIES")
  ) u_cap_bram (
    // Port A: read (18-bit) — returns 2 packed 9-bit samples
    .CLKARDCLK    (clk_sys_i),
    .ENARDEN      (1'b1),
    .WEA          (4'b0000),
    .ADDRARDADDR  (cap_rd_addr_bram),
    .DIADI        (32'h0),
    .DIPADIP      (4'h0),
    .DOADO        (cap_bram_rd_data),
    .DOPADOP      (cap_bram_rd_par),
    .RSTRAMARSTRAM(1'b0),
    .RSTREGARSTREG(1'b0),
    .REGCEAREGCE  (1'b0),

    // Port B: write (9-bit)
    .CLKBWRCLK    (clk_sys_i),
    .ENBWREN      (cap_bram_we),
    .WEBWE        ({4'b0000, 4'b0001}),
    .ADDRBWRADDR  (cap_wr_addr_bram),
    .DIBDI        ({24'h0, cap_wr_data}),
    .DIPBDIP      ({3'b0, cap_wr_parity}),
    .DOBDO        (),
    .DOPBDOP      (),
    .RSTRAMB      (1'b0),
    .RSTREGB      (1'b0),
    .REGCEB       (1'b0),

    // Cascade (unused)
    .CASCADEINA   (1'b0),
    .CASCADEINB   (1'b0),
    .CASCADEOUTA  (),
    .CASCADEOUTB  (),

    // ECC (unused)
    .DBITERR      (),
    .ECCPARITY    (),
    .RDADDRECC    (),
    .SBITERR      (),
    .INJECTDBITERR(1'b0),
    .INJECTSBITERR(1'b0)
  );

  // Read format: 18-bit read returns 2 packed 9-bit samples.
  // RAMB36E1 at READ_WIDTH_A=18: DOADO[15:0] = data, DOPADOP[1:0] = parity
  // Even sample (lower address): data[7:0] + parity[0]
  // Odd sample (upper address):  data[15:8] + parity[1]
  // Pack into 32-bit register: [8:0] = even sample, [17:9] = odd sample, [31:18] = 0
  assign cap_rd_data_o = {14'h0,
                          cap_bram_rd_par[1], cap_bram_rd_data[15:8],  // odd sample [17:9]
                          cap_bram_rd_par[0], cap_bram_rd_data[7:0]};  // even sample [8:0]

  logic _unused_par;
  assign _unused_par = ^{cap_bram_rd_par[3:2], cap_bram_rd_data[31:16]};

`else // !SPI_CAPTURE_EN
  // =========================================================================
  // Capture disabled — tie off outputs
  // =========================================================================
  assign cap_done_o      = 1'b0;
  assign cap_idelay_rdy_o = 1'b0;
  assign cap_rd_data_o   = 32'h0;

  logic _unused_cap;
  assign _unused_cap = ^{cap_arm_i, cap_force_trig_i, cap_trig_sel_i,
                          cap_rd_addr_i, cap_length_i};
`endif

endmodule
