// Iverilog testbench for spi_wb — verify Wishbone ACK works
`timescale 1ns/1ps

module spi_wb_tb;

  reg         clk = 0;
  reg         rst = 1;

  reg  [12:0] wb_adr;
  reg  [31:0] wb_dat_w;
  wire [31:0] wb_dat_r;
  reg  [3:0]  wb_sel;
  reg         wb_we;
  reg         wb_cyc;
  reg         wb_stb;
  wire        wb_ack;
  wire        irq;

  wire        spi_clk, spi_copi;
  reg         spi_cipo = 0;
  wire [0:0]  spi_cs;

  spi_wb #(
    .CSWidth  (1),
    .BufDepth (2048)
  ) dut (
    .clk_i      (clk),
    .rst_i      (rst),
    .wb_adr_i   (wb_adr),
    .wb_dat_i   (wb_dat_w),
    .wb_dat_o   (wb_dat_r),
    .wb_sel_i   (wb_sel),
    .wb_we_i    (wb_we),
    .wb_cyc_i   (wb_cyc),
    .wb_stb_i   (wb_stb),
    .wb_ack_o   (wb_ack),
    .irq_o      (irq),
    .spi_clk_o  (spi_clk),
    .spi_copi_o (spi_copi),
    .spi_cipo_i (spi_cipo),
    .spi_cs_o   (spi_cs)
  );

  always #10 clk = ~clk;  // 50MHz

  integer timeout;
  integer pass = 0;
  integer fail = 0;

  task wb_read(input [12:0] addr, output [31:0] data);
    begin
      @(posedge clk);
      wb_adr  <= addr;
      wb_we   <= 0;
      wb_sel  <= 4'hF;
      wb_cyc  <= 1;
      wb_stb  <= 1;
      wb_dat_w <= 0;

      timeout = 0;
      while (!wb_ack && timeout < 20) begin
        @(posedge clk);
        timeout = timeout + 1;
      end

      data = wb_dat_r;
      wb_cyc <= 0;
      wb_stb <= 0;
      @(posedge clk);

      if (timeout >= 20) begin
        $display("  FAIL: Read addr 0x%04x TIMEOUT (no ACK in 20 cycles)", addr);
        fail = fail + 1;
      end
    end
  endtask

  task wb_write(input [12:0] addr, input [31:0] data);
    begin
      @(posedge clk);
      wb_adr  <= addr;
      wb_dat_w <= data;
      wb_we   <= 1;
      wb_sel  <= 4'hF;
      wb_cyc  <= 1;
      wb_stb  <= 1;

      timeout = 0;
      while (!wb_ack && timeout < 20) begin
        @(posedge clk);
        timeout = timeout + 1;
      end

      wb_cyc <= 0;
      wb_stb <= 0;
      wb_we  <= 0;
      @(posedge clk);

      if (timeout >= 20) begin
        $display("  FAIL: Write addr 0x%04x TIMEOUT (no ACK in 20 cycles)", addr);
        fail = fail + 1;
      end
    end
  endtask

  reg [31:0] rdata;

  initial begin
    $dumpfile("spi_wb_tb.vcd");
    $dumpvars(0, spi_wb_tb);

    wb_adr = 0; wb_dat_w = 0; wb_sel = 0;
    wb_we = 0; wb_cyc = 0; wb_stb = 0;

    // Reset
    repeat(5) @(posedge clk);
    rst = 0;
    repeat(2) @(posedge clk);

    $display("=== spi_wb Wishbone ACK test ===");

    // Test 1: Read STATUS register (offset 0x14)
    $display("[1] Read STATUS (0x14)...");
    wb_read(13'h0014, rdata);
    if (timeout < 20) begin
      $display("  PASS: STATUS = 0x%08x (ACK in %0d cycles)", rdata, timeout);
      pass = pass + 1;
    end

    // Test 2: Read CFG register (offset 0x0C)
    $display("[2] Read CFG (0x0C)...");
    wb_read(13'h000C, rdata);
    if (timeout < 20) begin
      $display("  PASS: CFG = 0x%08x (ACK in %0d cycles)", rdata, timeout);
      pass = pass + 1;
    end

    // Test 3: Write CFG register
    $display("[3] Write CFG (0x0C) = 0x20000001...");
    wb_write(13'h000C, 32'h20000001);
    if (timeout < 20) begin
      $display("  PASS: Write ACKed in %0d cycles", timeout);
      pass = pass + 1;
    end

    // Test 4: Read back CFG
    $display("[4] Read back CFG...");
    wb_read(13'h000C, rdata);
    if (timeout < 20) begin
      if (rdata == 32'h20000001) begin
        $display("  PASS: CFG readback = 0x%08x (correct)", rdata);
        pass = pass + 1;
      end else begin
        $display("  FAIL: CFG readback = 0x%08x (expected 0x20000001)", rdata);
        fail = fail + 1;
      end
    end

    // Test 5: Read CS register (offset 0x28)
    $display("[5] Read CS (0x28)...");
    wb_read(13'h0028, rdata);
    if (timeout < 20) begin
      $display("  PASS: CS = 0x%08x (ACK in %0d cycles)", rdata, timeout);
      pass = pass + 1;
    end

    // Test 6: Write to TX BRAM (offset 0x1000)
    $display("[6] Write TX BRAM (0x1000)...");
    wb_write(13'h1000, 32'hDEADBEEF);
    if (timeout < 20) begin
      $display("  PASS: TX BRAM write ACKed in %0d cycles", timeout);
      pass = pass + 1;
    end

    // Test 7: Read from TX BRAM (should take 2 cycles - BRAM latency)
    $display("[7] Read TX BRAM (0x1000)...");
    wb_read(13'h1000, rdata);
    if (timeout < 20) begin
      if (rdata == 32'hDEADBEEF) begin
        $display("  PASS: TX BRAM readback = 0x%08x (correct, %0d cycles)", rdata, timeout);
        pass = pass + 1;
      end else begin
        $display("  FAIL: TX BRAM readback = 0x%08x (expected 0xDEADBEEF, %0d cycles)", rdata, timeout);
        fail = fail + 1;
      end
    end

    // Test 8: Read INTR_STATE (offset 0x00)
    $display("[8] Read INTR_STATE (0x00)...");
    wb_read(13'h0000, rdata);
    if (timeout < 20) begin
      $display("  PASS: INTR_STATE = 0x%08x", rdata);
      pass = pass + 1;
    end

    $display("");
    $display("=== Results: %0d passed, %0d failed ===", pass, fail);
    $finish;
  end

endmodule
