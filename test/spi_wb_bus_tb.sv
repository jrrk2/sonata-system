// Testbench that reproduces the LiteX shared bus handler -> spi_wb path
// from sonata.v, to verify the bus transaction reaches spi_wb and ACKs.
`timescale 1ns/1ps

module spi_wb_bus_tb;

  reg clk = 0;
  reg rst = 1;
  always #10 clk = ~clk;  // 50MHz

  // ========================================================================
  // Replicate the LiteX shared bus handler from sonata.v
  // ========================================================================

  // Shared bus signals (from arbiter output)
  reg  [31:0] builder_socbushandler_shared_adr;
  reg  [31:0] builder_socbushandler_shared_dat_w;
  reg  [3:0]  builder_socbushandler_shared_sel;
  reg         builder_socbushandler_shared_stb;
  reg         builder_socbushandler_shared_we;
  reg         builder_socbushandler_shared_cyc;
  wire [31:0] builder_socbushandler_shared_dat_r;
  wire        builder_socbushandler_shared_ack;
  wire        builder_socbushandler_shared_err;

  // Slave select (combinational, from sonata.v lines 3053-3063)
  reg [7:0] builder_socbushandler_slave_sel;
  reg [7:0] builder_socbushandler_slave_sel_r;  // registered for data mux

  always @(*) begin
    builder_socbushandler_slave_sel <= 8'd0;
    builder_socbushandler_slave_sel[6] <= (builder_socbushandler_shared_adr[31:11] == 19'd262529);
    // Other slaves not needed for this test
  end

  // Registered slave_sel for data mux (from sonata.v)
  always @(posedge clk) begin
    builder_socbushandler_slave_sel_r <= builder_socbushandler_slave_sel;
  end

  // Bus timeout logic (from sonata.v)
  reg [19:0] builder_socbushandler_count;
  wire builder_socbushandler_wait;
  wire builder_socbushandler_done;
  reg  builder_socbushandler_error;

  assign builder_socbushandler_wait = (builder_socbushandler_shared_stb &
    builder_socbushandler_shared_cyc & ~builder_socbushandler_shared_ack);
  assign builder_socbushandler_done = (builder_socbushandler_count == 0);

  always @(posedge clk) begin
    if (builder_socbushandler_wait) begin
      if (~builder_socbushandler_done)
        builder_socbushandler_count <= builder_socbushandler_count - 1;
    end else begin
      builder_socbushandler_count <= 20'd1000000;
    end
  end

  // ========================================================================
  // spi_wb connections (matching sonata.v lines 3106-3127, 9560-9577)
  // ========================================================================
  wire [10:0] main_spihost_bus_adr;
  wire [31:0] main_spihost_bus_dat_w;
  wire [31:0] main_spihost_bus_dat_r;
  wire [3:0]  main_spihost_bus_sel;
  wire        main_spihost_bus_stb;
  wire        main_spihost_bus_we;
  wire        main_spihost_bus_cyc;
  wire        main_spihost_bus_ack;
  reg  [1:0]  main_spihost = 2'd0;  // constant 0, as in sonata.v
  wire        main_spihost_irq;
  wire        spi_clk, spi_copi, spi_cs;
  reg         spi_cipo = 0;

  // From sonata.v lines 3106-3112
  assign main_spihost_bus_adr   = builder_socbushandler_shared_adr;  // truncated to [10:0]
  assign main_spihost_bus_dat_w = builder_socbushandler_shared_dat_w;
  assign main_spihost_bus_sel   = builder_socbushandler_shared_sel;
  assign main_spihost_bus_stb   = builder_socbushandler_shared_stb;
  assign main_spihost_bus_we    = builder_socbushandler_shared_we;

  // From sonata.v line 3126
  assign main_spihost_bus_cyc = (builder_socbushandler_shared_cyc &
                                  builder_socbushandler_slave_sel[6]);

  // ACK and data mux (simplified, only spi_eth slave)
  reg [31:0] shared_dat_r_mux;
  always @(*) begin
    builder_socbushandler_error <= 1'd0;
    shared_dat_r_mux <= 32'd0;
    if (builder_socbushandler_done & builder_socbushandler_wait) begin
      shared_dat_r_mux <= 32'hFFFFFFFF;
      builder_socbushandler_error <= 1'd1;
    end else begin
      shared_dat_r_mux <= ({32{builder_socbushandler_slave_sel_r[6]}} & main_spihost_bus_dat_r);
    end
  end

  assign builder_socbushandler_shared_ack = builder_socbushandler_done ?
    (builder_socbushandler_wait ? 1'b1 : 1'b0) : main_spihost_bus_ack;
  assign builder_socbushandler_shared_dat_r = shared_dat_r_mux;
  assign builder_socbushandler_shared_err = builder_socbushandler_error;

  // ========================================================================
  // DUT: spi_wb instance (matching sonata.v lines 9560-9577)
  // ========================================================================
  spi_wb #(
    .CSWidth  (1),
    .BufDepth (2048)
  ) dut (
    .clk_i      (clk),
    .rst_i      (rst),
    .wb_adr_i   ({main_spihost_bus_adr, main_spihost}),  // 13-bit byte addr
    .wb_dat_i   (main_spihost_bus_dat_w),
    .wb_dat_o   (main_spihost_bus_dat_r),
    .wb_sel_i   (main_spihost_bus_sel),
    .wb_we_i    (main_spihost_bus_we),
    .wb_cyc_i   (main_spihost_bus_cyc),
    .wb_stb_i   (main_spihost_bus_stb),
    .wb_ack_o   (main_spihost_bus_ack),
    .irq_o      (main_spihost_irq),
    .spi_clk_o  (spi_clk),
    .spi_copi_o (spi_copi),
    .spi_cipo_i (spi_cipo),
    .spi_cs_o   (spi_cs)
  );

  // ========================================================================
  // Test: simulate CPU accessing 0x80302014 (STATUS register)
  // ========================================================================
  // The CPU peripheral bus uses 30-bit word addressing.
  // Byte addr 0x80302014 -> word addr 0x200C0805
  // shared_adr gets {2'b00, pbus_adr[29:0]} = 32'h200C0805

  integer timeout;
  integer pass = 0, fail = 0;

  task bus_read(input [31:0] byte_addr, output [31:0] data);
    reg [31:0] word_addr;
    begin
      word_addr = byte_addr >> 2;
      @(posedge clk);
      builder_socbushandler_shared_adr  <= word_addr;
      builder_socbushandler_shared_dat_w <= 32'h0;
      builder_socbushandler_shared_sel  <= 4'hF;
      builder_socbushandler_shared_we   <= 0;
      builder_socbushandler_shared_cyc  <= 1;
      builder_socbushandler_shared_stb  <= 1;

      timeout = 0;
      while (!builder_socbushandler_shared_ack && timeout < 50) begin
        @(posedge clk);
        timeout = timeout + 1;
      end

      data = builder_socbushandler_shared_dat_r;

      builder_socbushandler_shared_cyc <= 0;
      builder_socbushandler_shared_stb <= 0;
      @(posedge clk);
    end
  endtask

  task bus_write(input [31:0] byte_addr, input [31:0] wdata);
    reg [31:0] word_addr;
    begin
      word_addr = byte_addr >> 2;
      @(posedge clk);
      builder_socbushandler_shared_adr  <= word_addr;
      builder_socbushandler_shared_dat_w <= wdata;
      builder_socbushandler_shared_sel  <= 4'hF;
      builder_socbushandler_shared_we   <= 1;
      builder_socbushandler_shared_cyc  <= 1;
      builder_socbushandler_shared_stb  <= 1;

      timeout = 0;
      while (!builder_socbushandler_shared_ack && timeout < 50) begin
        @(posedge clk);
        timeout = timeout + 1;
      end

      builder_socbushandler_shared_cyc <= 0;
      builder_socbushandler_shared_stb <= 0;
      builder_socbushandler_shared_we  <= 0;
      @(posedge clk);
    end
  endtask

  reg [31:0] rdata;

  initial begin
    $dumpfile("spi_wb_bus_tb.vcd");
    $dumpvars(0, spi_wb_bus_tb);

    builder_socbushandler_shared_adr = 0;
    builder_socbushandler_shared_dat_w = 0;
    builder_socbushandler_shared_sel = 0;
    builder_socbushandler_shared_we = 0;
    builder_socbushandler_shared_cyc = 0;
    builder_socbushandler_shared_stb = 0;

    // Reset
    repeat(5) @(posedge clk);
    rst = 0;
    repeat(2) @(posedge clk);

    $display("=== Bus Handler + spi_wb integration test ===");
    $display("Simulating CPU access via LiteX shared bus handler");
    $display("");

    // Monitor key signals
    $display("Before read: slave_sel[6]=%b, cyc=%b, stb=%b",
      builder_socbushandler_slave_sel[6],
      main_spihost_bus_cyc, main_spihost_bus_stb);

    // Test 1: Read STATUS register at 0x80302014
    $display("[1] Read STATUS (byte addr 0x80302014, word addr 0x200C0805)...");
    bus_read(32'h80302014, rdata);
    $display("    slave_sel[6]=%b, cyc=%b, ack=%b, timeout=%0d",
      builder_socbushandler_slave_sel[6],
      main_spihost_bus_cyc, main_spihost_bus_ack, timeout);
    if (timeout < 50 && !builder_socbushandler_error) begin
      $display("    PASS: STATUS = 0x%08x (cycles=%0d)", rdata, timeout);
      pass = pass + 1;
    end else begin
      $display("    FAIL: timeout=%0d, error=%b, dat_r=0x%08x",
        timeout, builder_socbushandler_error, rdata);
      fail = fail + 1;
    end

    // Test 2: Read CFG register at 0x8030200C
    $display("[2] Read CFG (byte addr 0x8030200C)...");
    bus_read(32'h8030200C, rdata);
    if (timeout < 50 && !builder_socbushandler_error) begin
      $display("    PASS: CFG = 0x%08x (cycles=%0d)", rdata, timeout);
      pass = pass + 1;
    end else begin
      $display("    FAIL: timeout=%0d, error=%b", timeout, builder_socbushandler_error);
      fail = fail + 1;
    end

    // Test 3: Write CFG
    $display("[3] Write CFG = 0x20000001...");
    bus_write(32'h8030200C, 32'h20000001);
    if (timeout < 50 && !builder_socbushandler_error) begin
      $display("    PASS: Write ACKed (cycles=%0d)", timeout);
      pass = pass + 1;
    end else begin
      $display("    FAIL: timeout=%0d, error=%b", timeout, builder_socbushandler_error);
      fail = fail + 1;
    end

    // Test 4: Read back CFG
    $display("[4] Read back CFG...");
    bus_read(32'h8030200C, rdata);
    if (timeout < 50 && rdata == 32'h20000001) begin
      $display("    PASS: CFG = 0x%08x (correct)", rdata);
      pass = pass + 1;
    end else begin
      $display("    FAIL: CFG = 0x%08x, timeout=%0d", rdata, timeout);
      fail = fail + 1;
    end

    // Test 5: Read CS register at 0x80302028
    $display("[5] Read CS (byte addr 0x80302028)...");
    bus_read(32'h80302028, rdata);
    if (timeout < 50 && !builder_socbushandler_error) begin
      $display("    PASS: CS = 0x%08x (cycles=%0d)", rdata, timeout);
      pass = pass + 1;
    end else begin
      $display("    FAIL: timeout=%0d", timeout);
      fail = fail + 1;
    end

    // Test 6: Access to non-spi_eth address should timeout
    $display("[6] Read from wrong address 0xF0000004 (should timeout in this testbench)...");
    bus_read(32'hF0000004, rdata);
    if (builder_socbushandler_error) begin
      $display("    PASS: Correctly timed out for non-spi_eth address");
      pass = pass + 1;
    end else begin
      $display("    FAIL: Expected timeout but got ack");
      fail = fail + 1;
    end

    $display("");
    $display("=== Results: %0d passed, %0d failed ===", pass, fail);
    $finish;
  end

endmodule
