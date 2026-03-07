// Full SoC testbench — monitor spi_wb bus signals
`timescale 1ns/1ps

module sonata_tb;

  reg clk25 = 0;
  always #20 clk25 = ~clk25;  // 25MHz

  // SoC I/O
  wire eth_rst_n;
  wire hyperram0_clk, hyperram0_cs_n, hyperram0_rst_n;
  wire [7:0] hyperram0_dq;
  wire hyperram0_rwds;
  wire jtag_tdo;
  wire sdcard_clk;
  wire sdcard_cmd;
  wire [3:0] sdcard_data;
  wire serial_tx;
  wire spi_eth_clk, spi_eth_cs_n, spi_eth_mosi;
  wire spiflash4x_clk, spiflash4x_cs_n;
  wire [3:0] spiflash4x_dq;
  wire user_led0, user_led1, user_led2, user_led3, user_led4;
  wire user_led5, user_led6, user_led7;

  reg serial_rx = 1;
  reg sdcard_cd = 1;
  reg spi_eth_miso = 0;
  reg jtag_tck = 0, jtag_tdi = 0, jtag_tms = 1;

  sonata dut (
    .clk25          (clk25),
    .eth_rst_n      (eth_rst_n),
    .hyperram0_clk  (hyperram0_clk),
    .hyperram0_cs_n (hyperram0_cs_n),
    .hyperram0_dq   (hyperram0_dq),
    .hyperram0_rst_n(hyperram0_rst_n),
    .hyperram0_rwds (hyperram0_rwds),
    .jtag_tck       (jtag_tck),
    .jtag_tdi       (jtag_tdi),
    .jtag_tdo       (jtag_tdo),
    .jtag_tms       (jtag_tms),
    .sdcard_cd      (sdcard_cd),
    .sdcard_clk     (sdcard_clk),
    .sdcard_cmd     (sdcard_cmd),
    .sdcard_data    (sdcard_data),
    .serial_rx      (serial_rx),
    .serial_tx      (serial_tx),
    .spi_eth_clk    (spi_eth_clk),
    .spi_eth_cs_n   (spi_eth_cs_n),
    .spi_eth_miso   (spi_eth_miso),
    .spi_eth_mosi   (spi_eth_mosi),
    .spiflash4x_clk (spiflash4x_clk),
    .spiflash4x_cs_n(spiflash4x_cs_n),
    .spiflash4x_dq  (spiflash4x_dq),
    .user_led0      (user_led0),
    .user_led1      (user_led1),
    .user_led2      (user_led2),
    .user_led3      (user_led3),
    .user_led4      (user_led4),
    .user_led5      (user_led5),
    .user_led6      (user_led6),
    .user_led7      (user_led7)
  );

  wire sys_clk_w = dut.sys_clk;

  integer i;

  initial begin
    // No VCD — too slow for full SoC
    $display("=== Sonata SoC simulation (no VCD) ===");

    // Monitor reset with heartbeat
    for (i = 0; i < 50; i = i + 1) begin
      #40;  // 1 clk25 period
      if (i < 5 || i % 10 == 0)
        $display("  t=%0t: locked=%b sys_rst=%b", $time,
          dut.main_crg_locked, dut.sys_rst);
      if (dut.sys_rst === 1'b0) begin
        $display("  sys_rst deasserted at t=%0t!", $time);
        i = 999;
      end
    end

    if (dut.sys_rst !== 1'b0) begin
      $display("ERROR: sys_rst never deasserted after 50 cycles");
      $display("  main_crg_locked=%b", dut.main_crg_locked);
      // $display("  PLLE2 RST input");
      $finish;
    end

    // Let CPU run 2000 sys_clk cycles, monitor spi_wb
    $display("Running SoC for 2000 cycles...");
    for (i = 0; i < 2000; i = i + 1) begin
      @(posedge sys_clk_w);
      if (dut.main_spihost_bus_cyc) begin
        $display("t=%0t: SPI_WB cyc=%b stb=%b we=%b ack=%b adr=%03x",
          $time,
          dut.main_spihost_bus_cyc,
          dut.main_spihost_bus_stb,
          dut.main_spihost_bus_we,
          dut.main_spihost_bus_ack,
          {dut.main_spihost_bus_adr, dut.main_spihost});
      end
    end

    // Check spi_wb state
    $display("");
    $display("spi_wb state after 2000 cycles:");
    $display("  rst_i=%b", dut.spi_wb.rst_i);
    $display("  wb_cyc_i=%b wb_stb_i=%b wb_ack_o=%b",
      dut.spi_wb.wb_cyc_i, dut.spi_wb.wb_stb_i, dut.spi_wb.wb_ack_o);

    // Force a bus transaction
    $display("");
    $display("=== Forcing bus read to 0x80302014 (STATUS) ===");
    force dut.builder_socbushandler_shared_adr = 32'h200C0805;
    force dut.builder_socbushandler_shared_cyc = 1;
    force dut.builder_socbushandler_shared_stb = 1;
    force dut.builder_socbushandler_shared_we  = 0;
    force dut.builder_socbushandler_shared_sel = 4'hF;

    for (i = 0; i < 10; i = i + 1) begin
      @(posedge sys_clk_w);
      $display("  [%0d] sel6=%b cyc=%b stb=%b ack=%b rst=%b",
        i,
        dut.builder_socbushandler_slave_sel[6],
        dut.spi_wb.wb_cyc_i,
        dut.spi_wb.wb_stb_i,
        dut.spi_wb.wb_ack_o,
        dut.spi_wb.rst_i);
      if (dut.spi_wb.wb_ack_o) begin
        $display("  ACK! dat_r = 0x%08x", dut.main_spihost_bus_dat_r);
        i = 100;
      end
    end

    release dut.builder_socbushandler_shared_adr;
    release dut.builder_socbushandler_shared_cyc;
    release dut.builder_socbushandler_shared_stb;
    release dut.builder_socbushandler_shared_we;
    release dut.builder_socbushandler_shared_sel;

    repeat(5) @(posedge sys_clk_w);
    $display("=== Done ===");
    $finish;
  end

  initial begin
    #2000000;
    $display("HARD TIMEOUT");
    $finish;
  end

endmodule
