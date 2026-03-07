// Minimal KSZ8851 Ethernet - DHCP + ARP + Ping
// Ported from Ibex/Sonata streaming SPI to LiteX VexRiscv spi_wb buffer-based SPI
// No lwIP, no interrupts, no timers - pure polling

#include <stdbool.h>
#include <stdint.h>

// ---- Hardware addresses (LiteX VexRiscv on Sonata) ----

#define UART_RXTX   (*(volatile uint32_t *)0xf0001000)
#define UART_TXFULL (*(volatile uint32_t *)0xf0001004)

#define SPIETH_BASE  0x80302000
#define SPI_REG(off)   (*(volatile uint32_t *)(SPIETH_BASE + (off)))
#define SPI_TX_BUF     ((volatile uint32_t *)(SPIETH_BASE + 0x1000))
#define SPI_RX_BUF     ((volatile uint32_t *)(SPIETH_BASE + 0x1800))

// SPI controller registers (spi_wb.sv)
#define SPI_CFG         0x0C
#define SPI_CONTROL     0x10
#define SPI_STATUS      0x14
#define SPI_START       0x18
#define SPI_CS          0x28
#define SPI_STATUS_IDLE (1 << 26)

// ---- Minimal libc ----

static void *memset(void *s, int c, unsigned long n) {
  uint8_t *p = s;
  while (n--) *p++ = c;
  return s;
}

static void *memcpy(void *dst, const void *src, unsigned long n) {
  uint8_t *d = dst; const uint8_t *s = src;
  while (n--) *d++ = *s++;
  return dst;
}

static int memcmp(const void *a, const void *b, unsigned long n) {
  const uint8_t *p = a, *q = b;
  while (n--) { if (*p != *q) return *p - *q; p++; q++; }
  return 0;
}

// ---- UART output ----

static void putchar(char c) {
  if (c == '\n') { while (UART_TXFULL); UART_RXTX = '\r'; }
  while (UART_TXFULL);
  UART_RXTX = c;
}

static void puts(const char *s) { while (*s) putchar(*s++); }

static void putdec(uint32_t v) {
  char buf[12]; int i = 0;
  if (v == 0) { putchar('0'); return; }
  while (v) { buf[i++] = '0' + (v % 10); v /= 10; }
  while (i--) putchar(buf[i]);
}

static void puthex4(uint8_t v) { putchar(v < 10 ? '0'+v : 'a'+v-10); }
static void puthex8(uint8_t v) { puthex4(v>>4); puthex4(v&0xf); }
static void puthexn(uint32_t v, int digits) {
  for (int i = digits-1; i >= 0; i--)
    puthex4((v >> (i*4)) & 0xf);
}

// ---- Timer (busy-wait, 50 MHz system clock) ----

static void delay(volatile uint32_t n) { while (n--) __asm__ volatile(""); }
static void delay_ms(uint32_t ms) { delay(ms * 12500); }  // ~50MHz/4 per loop iter

// ---- KSZ8851 register defines ----

#define ETH_MARL    0x10
#define ETH_MARM    0x12
#define ETH_MARH    0x14
#define ETH_GRR     0x26
#define ETH_TXCR    0x70
#define ETH_RXCR1   0x74
#define ETH_RXCR2   0x76
#define ETH_TXMIR   0x78
#define ETH_RXFHSR  0x7C
#define ETH_RXFHBCR 0x7E
#define ETH_TXQCR   0x80
#define ETH_RXQCR   0x82
#define ETH_TXFDPR  0x84
#define ETH_RXFDPR  0x86
#define ETH_IER     0x90
#define ETH_ISR     0x92
#define ETH_RXFCTR  0x9C
#define ETH_TXNTFSR 0x9E
#define ETH_FCLWR   0xB0
#define ETH_FCHWR   0xB2
#define ETH_CIDER   0xC0
#define ETH_P1MBCR  0xE4
#define ETH_P1MBSR  0xE6
#define ETH_P1SCLMD 0xF4
#define ETH_P1CR    0xF6
#define ETH_P1SR    0xF8

#define RXQCR_RRXEF           (1 << 0)  // Release RX frame (dequeue)
#define RXQCR_START_DMA       (1 << 3)  // Start DMA access
#define RXQCR_AUTO_DEQUEUE    (1 << 4)  // Auto-dequeue (NOT used by Linux driver)
#define RXQCR_RXFCTE          (1 << 5)  // Frame count threshold IRQ enable
#define RXQCR_RXDBCTE         (1 << 6)  // Byte count threshold IRQ enable
#define RXQCR_RXDTTE          (1 << 7)  // Duration timer threshold IRQ enable

#define RX_VALID     (1 << 15)
#define RX_CRC_ERR   (1 << 0)
#define RX_RUNT      (1 << 1)
#define RX_TOO_LONG  (1 << 2)
#define RX_MII_ERR   (1 << 4)

#define TXQCR_ENQUEUE (1 << 0)

// ---- Network config ----

static const uint8_t MY_MAC[6] = { 0x02, 0x00, 0x00, 0x00, 0x00, 0x01 };

static uint32_t my_ip         = 0;
static uint32_t dhcp_server_ip = 0;
static uint32_t subnet_mask   = 0;
static uint32_t gateway_ip    = 0;

#define DHCP_STATE_INIT       0
#define DHCP_STATE_SELECTING  1
#define DHCP_STATE_REQUESTING 2
#define DHCP_STATE_BOUND      3

static uint8_t  dhcp_state = DHCP_STATE_INIT;
static uint32_t dhcp_xid   = 0xDEADBEEF;
static uint32_t dhcp_delay = 0;

// Cached RXQCR base value (matching Linux driver's rc_rxqcr)
static uint16_t rc_rxqcr = RXQCR_RXFCTE;

// ---- DHCP option codes ----

#define DHCP_OPT_SUBNET_MASK   1
#define DHCP_OPT_ROUTER        3
#define DHCP_OPT_DNS           6
#define DHCP_OPT_REQUESTED_IP 50
#define DHCP_OPT_MSG_TYPE     53
#define DHCP_OPT_SERVER_ID    54
#define DHCP_OPT_PARAM_LIST   55
#define DHCP_OPT_END         255

// ---- SPI controller access (spi_wb buffer-based) ----

static void spi_wait_idle(void) {
  int timeout = 100000;
  while (!(SPI_REG(SPI_STATUS) & SPI_STATUS_IDLE)) {
    if (--timeout <= 0) { puts("SPI: idle timeout!\n"); return; }
  }
}

static void tx_bram_write(const uint8_t *data, uint32_t len) {
  uint32_t i;
  for (i = 0; i + 3 < len; i += 4)
    SPI_TX_BUF[i/4] = data[i] | ((uint32_t)data[i+1]<<8) |
      ((uint32_t)data[i+2]<<16) | ((uint32_t)data[i+3]<<24);
  if (i < len) {
    uint32_t val = 0;
    for (uint32_t j = 0; j < len-i; j++)
      val |= (uint32_t)data[i+j] << (j*8);
    SPI_TX_BUF[i/4] = val;
  }
}

static void tx_bram_write_at(const uint8_t *data, uint32_t offset, uint32_t len) {
  uint32_t i = 0, pos = offset;
  // Handle unaligned start
  if (pos & 3) {
    uint32_t word_idx = pos / 4;
    uint32_t val = SPI_TX_BUF[word_idx];
    while (i < len && (pos & 3)) {
      uint32_t shift = (pos & 3) * 8;
      val = (val & ~((uint32_t)0xFF << shift)) | ((uint32_t)data[i] << shift);
      i++; pos++;
    }
    SPI_TX_BUF[word_idx] = val;
  }
  // Aligned words
  while (i + 3 < len) {
    SPI_TX_BUF[pos/4] = data[i] | ((uint32_t)data[i+1]<<8) |
      ((uint32_t)data[i+2]<<16) | ((uint32_t)data[i+3]<<24);
    i += 4; pos += 4;
  }
  // Trailing bytes
  if (i < len) {
    uint32_t val = 0;
    for (uint32_t j = 0; i+j < len; j++)
      val |= (uint32_t)data[i+j] << (j*8);
    SPI_TX_BUF[pos/4] = val;
  }
}

static void rx_bram_read(uint8_t *data, uint32_t offset, uint32_t len) {
  uint32_t i = 0, pos = offset;
  while (i < len && (pos & 3)) {
    uint32_t word = SPI_RX_BUF[pos/4];
    data[i++] = (word >> ((pos%4)*8)) & 0xFF;
    pos++;
  }
  while (i + 3 < len) {
    uint32_t word = SPI_RX_BUF[pos/4];
    data[i]   = word & 0xFF;
    data[i+1] = (word>>8) & 0xFF;
    data[i+2] = (word>>16) & 0xFF;
    data[i+3] = (word>>24) & 0xFF;
    i += 4; pos += 4;
  }
  while (i < len) {
    uint32_t word = SPI_RX_BUF[pos/4];
    data[i++] = (word >> ((pos%4)*8)) & 0xFF;
    pos++;
  }
}

// Perform an SPI transfer of `len` bytes (TX BRAM must already be loaded)
static void spi_xfer(uint32_t len) {
  SPI_REG(SPI_CS) = 0;
  SPI_REG(SPI_START) = len;
  spi_wait_idle();
  SPI_REG(SPI_CS) = 1;
}

// ---- KSZ8851 register access (via spi_wb) ----

static uint16_t ksz_read(uint8_t reg) {
  uint8_t be = (reg & 0x2) == 0 ? 0x03 : 0x0C;
  uint8_t cmd[4];
  cmd[0] = (0b00 << 6) | (be << 2) | (reg >> 6);
  cmd[1] = (reg << 2) & 0xF0;
  cmd[2] = 0; cmd[3] = 0;
  tx_bram_write(cmd, 4);
  spi_xfer(4);
  return (SPI_RX_BUF[0] >> 16) & 0xFFFF;
}

static void ksz_write(uint8_t reg, uint16_t val) {
  uint8_t be = (reg & 0x2) == 0 ? 0x03 : 0x0C;
  uint8_t cmd[4];
  cmd[0] = (0b01 << 6) | (be << 2) | (reg >> 6);
  cmd[1] = (reg << 2) & 0xF0;
  cmd[2] = val & 0xFF;
  cmd[3] = val >> 8;
  tx_bram_write(cmd, 4);
  spi_xfer(4);
}

static void ksz_set(uint8_t reg, uint16_t mask) {
  ksz_write(reg, ksz_read(reg) | mask);
}

static void ksz_clear(uint8_t reg, uint16_t mask) {
  ksz_write(reg, ksz_read(reg) & ~mask);
}

// ---- TX: send raw frame via KSZ8851 FIFO ----

static void ksz_tx(const uint8_t *buf, uint16_t len) {
  // Wait for TX buffer space
  int timeout = 100000;
  while (timeout-- > 0) {
    if ((ksz_read(ETH_TXMIR) & 0x0FFF) >= len + 4) break;
  }
  if (timeout <= 0) { puts("TX FIFO full!\n"); return; }

  ksz_write(ETH_TXFDPR, 0x4000);

  // Start TX DMA access
  ksz_write(ETH_RXQCR, rc_rxqcr | RXQCR_START_DMA);

  uint32_t pad = (-len) & 0x3;
  uint32_t total = 1 + 4 + len + pad;

  // Build TX BRAM: [0xC0] [control_lo] [control_hi] [len_lo] [len_hi] [frame...] [pad]
  uint8_t hdr[5];
  hdr[0] = 0xC0;  // FIFO write command
  hdr[1] = 0x00;  // TX control word low
  hdr[2] = 0x80;  // TX control word high (TXIC=1)
  hdr[3] = len & 0xFF;
  hdr[4] = len >> 8;
  tx_bram_write(hdr, 5);
  tx_bram_write_at(buf, 5, len);
  if (pad > 0) {
    uint8_t zeros[4] = {0, 0, 0, 0};
    tx_bram_write_at(zeros, 5 + len, pad);
  }

  // Single SPI transfer for entire FIFO write
  SPI_REG(SPI_CS) = 0;
  SPI_REG(SPI_START) = total;
  spi_wait_idle();
  SPI_REG(SPI_CS) = 1;

  // End TX DMA access (no RRXEF - don't release RX frame)
  ksz_write(ETH_RXQCR, rc_rxqcr);
  ksz_set(ETH_TXQCR, TXQCR_ENQUEUE);
}

// ---- IP checksum ----

static uint16_t ip_checksum(const uint8_t *p, uint16_t len) {
  uint32_t s = 0;
  while (len > 1) {
    s += (p[0] << 8) | p[1];
    p += 2;
    len -= 2;
  }
  if (len) s += p[0] << 8;
  while (s >> 16) s = (s & 0xFFFF) + (s >> 16);
  return ~s;
}

// ---- Print helpers ----

static void print_ip(uint32_t ip) {
  putdec((ip >> 24) & 0xFF); putchar('.');
  putdec((ip >> 16) & 0xFF); putchar('.');
  putdec((ip >> 8) & 0xFF);  putchar('.');
  putdec(ip & 0xFF);
}

static __attribute__((unused)) void hexdump(const uint8_t *buf, uint32_t len, uint32_t maxlen) {
  if (len > maxlen) len = maxlen;
  for (uint32_t i = 0; i < len; i++) {
    if ((i & 0xF) == 0) {
      if (i) putchar('\n');
      puts("  ");
      puthexn(i, 4);
      puts(": ");
    }
    puthex8(buf[i]);
    putchar(' ');
  }
  putchar('\n');
}

// ---- Build and send DHCP packet (Discover or Request) ----

static void send_dhcp_packet(uint8_t msg_type, uint32_t requested_ip, uint32_t server_id) {
  uint8_t pkt[400];
  memset(pkt, 0, sizeof(pkt));
  uint8_t *p = pkt;

  // Ethernet header
  memset(p, 0xFF, 6); p += 6;          // Dst: broadcast
  memcpy(p, MY_MAC, 6); p += 6;        // Src: our MAC
  *p++ = 0x08; *p++ = 0x00;            // EtherType: IPv4

  // IP header (20 bytes)
  uint8_t *ip_hdr = p;
  *p++ = 0x45;           // Version=4, IHL=5
  *p++ = 0x00;           // TOS
  p += 2;                // Total length (fill later)
  *p++ = 0x00; *p++ = 0x00;  // ID
  *p++ = 0x00; *p++ = 0x00;  // Flags
  *p++ = 64;             // TTL
  *p++ = 17;             // Protocol: UDP
  *p++ = 0x00; *p++ = 0x00;  // Checksum (fill later)
  *p++ = 0; *p++ = 0; *p++ = 0; *p++ = 0;  // Src: 0.0.0.0
  *p++ = 0xFF; *p++ = 0xFF; *p++ = 0xFF; *p++ = 0xFF;  // Dst: broadcast

  // UDP header (8 bytes)
  uint8_t *udp_hdr = p;
  *p++ = 0x00; *p++ = 68;    // Src port: 68 (DHCP client)
  *p++ = 0x00; *p++ = 67;    // Dst port: 67 (DHCP server)
  p += 2;                     // UDP length (fill later)
  *p++ = 0x00; *p++ = 0x00;  // Checksum: 0 (optional)

  // DHCP message (240 byte header)
  uint8_t *dhcp_start = p;
  *p++ = 1;    // op: BOOTREQUEST
  *p++ = 1;    // htype: Ethernet
  *p++ = 6;    // hlen
  *p++ = 0;    // hops
  // xid (network byte order)
  *p++ = (dhcp_xid >> 24) & 0xFF;
  *p++ = (dhcp_xid >> 16) & 0xFF;
  *p++ = (dhcp_xid >> 8) & 0xFF;
  *p++ = dhcp_xid & 0xFF;
  *p++ = 0; *p++ = 0;        // secs
  *p++ = 0x80; *p++ = 0x00;  // flags: broadcast
  memset(p, 0, 16); p += 16; // ciaddr, yiaddr, siaddr, giaddr
  memcpy(p, MY_MAC, 6);      // chaddr[0..5]
  p += 16;                    // chaddr[0..15]
  memset(p, 0, 64); p += 64; // sname
  memset(p, 0, 128); p += 128; // file

  // Magic cookie
  *p++ = 99; *p++ = 130; *p++ = 83; *p++ = 99;

  // Option 53: DHCP Message Type
  *p++ = DHCP_OPT_MSG_TYPE; *p++ = 1; *p++ = msg_type;

  if (msg_type == 3 /* REQUEST */ && requested_ip != 0) {
    *p++ = DHCP_OPT_REQUESTED_IP; *p++ = 4;
    *p++ = (requested_ip >> 24) & 0xFF;
    *p++ = (requested_ip >> 16) & 0xFF;
    *p++ = (requested_ip >> 8) & 0xFF;
    *p++ = requested_ip & 0xFF;

    if (server_id != 0) {
      *p++ = DHCP_OPT_SERVER_ID; *p++ = 4;
      *p++ = (server_id >> 24) & 0xFF;
      *p++ = (server_id >> 16) & 0xFF;
      *p++ = (server_id >> 8) & 0xFF;
      *p++ = server_id & 0xFF;
    }
  }

  // Option 55: Parameter Request List
  *p++ = DHCP_OPT_PARAM_LIST; *p++ = 3;
  *p++ = DHCP_OPT_SUBNET_MASK;
  *p++ = DHCP_OPT_ROUTER;
  *p++ = DHCP_OPT_DNS;

  // End
  *p++ = DHCP_OPT_END;

  // Pad DHCP to at least 300 bytes
  uint16_t dhcp_len = p - dhcp_start;
  if (dhcp_len < 300) {
    memset(p, 0, 300 - dhcp_len);
    p += 300 - dhcp_len;
    dhcp_len = 300;
  }

  // Fill in lengths
  uint16_t udp_len = 8 + dhcp_len;
  uint16_t ip_len  = 20 + udp_len;
  ip_hdr[2] = ip_len >> 8;
  ip_hdr[3] = ip_len & 0xFF;
  udp_hdr[4] = udp_len >> 8;
  udp_hdr[5] = udp_len & 0xFF;

  // IP checksum
  uint16_t csum = ip_checksum(ip_hdr, 20);
  ip_hdr[10] = csum >> 8;
  ip_hdr[11] = csum & 0xFF;

  uint16_t total = 14 + ip_len;
  ksz_tx(pkt, total);

  puts("TX DHCP ");
  puts(msg_type == 1 ? "DISCOVER" : "REQUEST");
  putchar('\n');
}

// ---- Parse DHCP reply (Offer or ACK) ----

static void handle_dhcp(const uint8_t *dhcp_data, uint16_t dhcp_len) {
  if (dhcp_len < 240) return;

  uint32_t rxid = ((uint32_t)dhcp_data[4] << 24) | ((uint32_t)dhcp_data[5] << 16) |
                  ((uint32_t)dhcp_data[6] << 8) | dhcp_data[7];
  if (rxid != dhcp_xid) {
    puts("  DHCP xid mismatch\n");
    return;
  }

  uint32_t offered_ip = ((uint32_t)dhcp_data[16] << 24) | ((uint32_t)dhcp_data[17] << 16) |
                        ((uint32_t)dhcp_data[18] << 8) | dhcp_data[19];

  // Parse options (start after magic cookie at offset 240)
  const uint8_t *opt = dhcp_data + 240;
  const uint8_t *end = dhcp_data + dhcp_len;
  uint8_t msg_type = 0;
  uint32_t server_id = 0;
  uint32_t subnet = 0;
  uint32_t router = 0;

  while (opt < end) {
    uint8_t otype = *opt++;
    if (otype == DHCP_OPT_END) break;
    if (opt >= end) break;
    uint8_t olen = *opt++;
    if (opt + olen > end) break;

    switch (otype) {
      case DHCP_OPT_MSG_TYPE:
        if (olen == 1) msg_type = opt[0];
        break;
      case DHCP_OPT_SERVER_ID:
        if (olen == 4) server_id = ((uint32_t)opt[0] << 24) | ((uint32_t)opt[1] << 16) |
                                   ((uint32_t)opt[2] << 8) | opt[3];
        break;
      case DHCP_OPT_SUBNET_MASK:
        if (olen == 4) subnet = ((uint32_t)opt[0] << 24) | ((uint32_t)opt[1] << 16) |
                                ((uint32_t)opt[2] << 8) | opt[3];
        break;
      case DHCP_OPT_ROUTER:
        if (olen >= 4) router = ((uint32_t)opt[0] << 24) | ((uint32_t)opt[1] << 16) |
                                ((uint32_t)opt[2] << 8) | opt[3];
        break;
    }
    opt += olen;
  }

  puts("  DHCP msg_type=");
  putdec(msg_type);
  puts(" state=");
  putdec(dhcp_state);
  putchar('\n');

  if (msg_type == 2 /* OFFER */ && dhcp_state == DHCP_STATE_SELECTING) {
    puts("  DHCP OFFER: ");
    print_ip(offered_ip);
    putchar('\n');
    dhcp_state = DHCP_STATE_REQUESTING;
    dhcp_delay = 1000000;  // Reset retry timer
    send_dhcp_packet(3 /* REQUEST */, offered_ip, server_id);
  }
  else if (msg_type == 5 /* ACK */ && dhcp_state == DHCP_STATE_REQUESTING) {
    my_ip = offered_ip;
    dhcp_server_ip = server_id;
    subnet_mask = subnet;
    gateway_ip = router;
    dhcp_state = DHCP_STATE_BOUND;

    puts("  DHCP ACK: IP=");
    print_ip(my_ip);
    puts(" mask=");
    print_ip(subnet_mask);
    puts(" gw=");
    print_ip(gateway_ip);
    putchar('\n');
  }
}

// ---- Send ARP reply ----

static void send_arp_reply(const uint8_t *target_mac, const uint8_t *target_ip_bytes) {
  uint8_t pkt[42];
  uint8_t *p = pkt;

  memcpy(p, target_mac, 6); p += 6;
  memcpy(p, MY_MAC, 6); p += 6;
  *p++ = 0x08; *p++ = 0x06;  // ARP

  *p++ = 0x00; *p++ = 0x01;  // hw type: Ethernet
  *p++ = 0x08; *p++ = 0x00;  // proto: IPv4
  *p++ = 6;                   // hw size
  *p++ = 4;                   // proto size
  *p++ = 0x00; *p++ = 0x02;  // op: Reply

  memcpy(p, MY_MAC, 6); p += 6;
  *p++ = (my_ip >> 24) & 0xFF;
  *p++ = (my_ip >> 16) & 0xFF;
  *p++ = (my_ip >> 8) & 0xFF;
  *p++ = my_ip & 0xFF;

  memcpy(p, target_mac, 6); p += 6;
  memcpy(p, target_ip_bytes, 4); p += 4;

  ksz_tx(pkt, 42);
  puts("  TX ARP reply\n");
}

// ---- Send ICMP echo reply ----

static void send_icmp_reply(const uint8_t *src_mac, const uint8_t *src_ip_bytes,
                            const uint8_t *icmp_data, uint16_t icmp_len) {
  uint16_t ip_total = 20 + icmp_len;
  uint16_t eth_total = 14 + ip_total;

  uint8_t pkt[1514];
  if (eth_total > sizeof(pkt)) return;
  uint8_t *p = pkt;

  memcpy(p, src_mac, 6); p += 6;
  memcpy(p, MY_MAC, 6); p += 6;
  *p++ = 0x08; *p++ = 0x00;

  uint8_t *ip_hdr = p;
  *p++ = 0x45; *p++ = 0x00;
  *p++ = ip_total >> 8; *p++ = ip_total & 0xFF;
  *p++ = 0; *p++ = 0;
  *p++ = 0; *p++ = 0;
  *p++ = 64;
  *p++ = 1;  // ICMP
  *p++ = 0; *p++ = 0;
  *p++ = (my_ip >> 24) & 0xFF;
  *p++ = (my_ip >> 16) & 0xFF;
  *p++ = (my_ip >> 8) & 0xFF;
  *p++ = my_ip & 0xFF;
  memcpy(p, src_ip_bytes, 4); p += 4;

  uint16_t csum = ip_checksum(ip_hdr, 20);
  ip_hdr[10] = csum >> 8;
  ip_hdr[11] = csum & 0xFF;

  uint8_t *icmp_hdr = p;
  *p++ = 0;  // type: Echo Reply
  *p++ = 0;  // code
  *p++ = 0; *p++ = 0;  // checksum (fill later)
  memcpy(p, icmp_data + 4, icmp_len - 4);
  p += icmp_len - 4;

  uint16_t icmp_csum = ip_checksum(icmp_hdr, icmp_len);
  icmp_hdr[2] = icmp_csum >> 8;
  icmp_hdr[3] = icmp_csum & 0xFF;

  ksz_tx(pkt, eth_total);
  puts("  TX ICMP reply\n");
}

// ---- RX: read and process one poll cycle ----

static uint8_t rxbuf[1600];

static __attribute__((unused)) void ksz_flush_rx(void) {
  puts("  FLUSH_RX\n");
  ksz_clear(ETH_RXCR1, 1 << 0);
  ksz_write(ETH_GRR, 0x0002);
  delay(10000);
  ksz_write(ETH_GRR, 0x0000);
  delay(10000);
  ksz_write(ETH_TXFDPR, 0x4000);
  ksz_write(ETH_TXCR, 0x00EE);
  ksz_write(ETH_RXFDPR, 0x4000);
  ksz_write(ETH_RXFCTR, 0x0001);
  ksz_write(ETH_RXCR1, 0x7CE0);
  ksz_write(ETH_RXCR2, 0x009C);
  ksz_write(ETH_RXQCR, rc_rxqcr);
  ksz_write(ETH_ISR, 0xFFFF);
  ksz_set(ETH_TXCR, 1 << 0);
  ksz_set(ETH_RXCR1, 1 << 0);
}

static void rx_poll(void) {
  uint16_t isr = ksz_read(ETH_ISR);
  if (isr)
    ksz_write(ETH_ISR, isr);

  // Handle RX process stopped (re-enable RX, matching Linux/Ibex driver)
  if (isr & (1 << 8)) {  // IRQ_RXPSIS
    uint16_t rxcr1 = ksz_read(ETH_RXCR1);
    if (!(rxcr1 & (1 << 0)))
      ksz_write(ETH_RXCR1, rxcr1 | (1 << 0));
  }

  // Only process RX if RX interrupt (bit 13) is set
  if (!(isr & (1 << 13)))
    return;

  uint16_t frames = ksz_read(ETH_RXFCTR) >> 8;
  if (!frames) return;

  for (uint16_t f = 0; f < frames; f++) {
    uint16_t status = ksz_read(ETH_RXFHSR);
    uint16_t len    = ksz_read(ETH_RXFHBCR) & 0xFFF;

    bool valid = (status & RX_VALID) &&
                 !(status & (RX_CRC_ERR | RX_RUNT | RX_TOO_LONG | RX_MII_ERR));

    if (!valid || len <= 4 || len > 1536) {
      // Release invalid frame without DMA (matching Ibex/Linux)
      ksz_write(ETH_RXQCR, rc_rxqcr | RXQCR_RRXEF);
      continue;
    }

    uint16_t frame_len = len - 4;  // Strip 4-byte CRC
    uint16_t rxalign = (len + 3) & ~3;

    // Set DMA read address
    ksz_write(ETH_RXFDPR, 0x4000);
    // Start DMA access
    ksz_write(ETH_RXQCR, rc_rxqcr | RXQCR_START_DMA);

    // SPI FIFO read: [0x80 cmd] [8 header/dummy] [rxalign data]
    uint32_t fifo_len = rxalign + 8;
    uint32_t total = 1 + fifo_len;

    // Fill TX BRAM with read command + zeros (MOSI data for clock generation)
    SPI_TX_BUF[0] = 0x80;  // FIFO read command byte
    for (uint32_t w = 1; w < (total+3)/4; w++)
      SPI_TX_BUF[w] = 0;

    SPI_REG(SPI_CS) = 0;
    SPI_REG(SPI_START) = total;
    spi_wait_idle();

    // Frame data starts at byte offset 9 in RX BRAM (1 cmd + 8 header/dummy)
    rx_bram_read(rxbuf, 9, frame_len);

    SPI_REG(SPI_CS) = 1;

    // Release frame from FIFO: end DMA + RRXEF (like Linux driver)
    ksz_write(ETH_RXQCR, rc_rxqcr | RXQCR_RRXEF);

    // Skip our own TX (loopback in promiscuous mode)
    if (memcmp(rxbuf + 6, MY_MAC, 6) == 0)
      continue;

    // ---- Parse frame ----
    uint8_t *p = rxbuf;
    p += 6;  // skip dst_mac
    uint8_t *src_mac = p; p += 6;
    uint16_t ethertype = (p[0] << 8) | p[1]; p += 2;

    if (ethertype == 0x0806) {
      // ---- ARP ----
      if (frame_len < 42) continue;
      uint16_t operation = (p[6] << 8) | p[7];
      uint8_t *sender_mac = p + 8;
      uint8_t *sender_ip  = p + 14;
      uint8_t *target_ip  = p + 24;

      uint32_t tip = ((uint32_t)target_ip[0] << 24) | ((uint32_t)target_ip[1] << 16) |
                     ((uint32_t)target_ip[2] << 8) | target_ip[3];

      if (operation == 1 && my_ip != 0 && tip == my_ip) {
        puts("RX ARP who-has ");
        print_ip(my_ip);
        putchar('\n');
        send_arp_reply(sender_mac, sender_ip);
      }
    }
    else if (ethertype == 0x0800) {
      // ---- IPv4 ----
      if (frame_len < 34) continue;
      uint8_t ihl = (p[0] & 0x0F) * 4;
      uint16_t ip_len = (p[2] << 8) | p[3];
      uint8_t protocol = p[9];
      uint8_t *src_ip = p + 12;
      uint8_t *dst_ip = p + 16;

      uint32_t dip = ((uint32_t)dst_ip[0] << 24) | ((uint32_t)dst_ip[1] << 16) |
                     ((uint32_t)dst_ip[2] << 8) | dst_ip[3];

      bool for_us = (my_ip != 0 && dip == my_ip);
      bool is_broadcast = (dip == 0xFFFFFFFF);

      uint8_t *payload = p + ihl;

      if (for_us && protocol == 1) {
        // ---- ICMP ----
        uint8_t icmp_type = payload[0];
        if (icmp_type == 8 && ip_len > (uint16_t)(ihl + 8)) {  // Echo Request
          uint16_t icmp_len = ip_len - ihl;
          uint16_t ping_id  = (payload[4] << 8) | payload[5];
          uint16_t ping_seq = (payload[6] << 8) | payload[7];

          puts("RX PING from ");
          print_ip(((uint32_t)src_ip[0] << 24) | ((uint32_t)src_ip[1] << 16) |
                   ((uint32_t)src_ip[2] << 8) | src_ip[3]);
          puts(" id=");
          puthexn(ping_id, 4);
          puts(" seq=");
          puthexn(ping_seq, 4);
          putchar('\n');
          send_icmp_reply(src_mac, src_ip, payload, icmp_len);
        }
      }
      else if ((for_us || is_broadcast || my_ip == 0) && protocol == 17) {
        // ---- UDP ----
        uint16_t src_port = (payload[0] << 8) | payload[1];
        uint16_t dst_port = (payload[2] << 8) | payload[3];
        uint16_t udp_len  = (payload[4] << 8) | payload[5];
        uint8_t *udp_data = payload + 8;
        uint16_t udp_payload_len = udp_len - 8;

        if (dst_port == 68 && src_port == 67 && dhcp_state != DHCP_STATE_BOUND) {
          puts("RX DHCP from ");
          print_ip(((uint32_t)src_ip[0] << 24) | ((uint32_t)src_ip[1] << 16) |
                   ((uint32_t)src_ip[2] << 8) | src_ip[3]);
          putchar('\n');
          handle_dhcp(udp_data, udp_payload_len);
        }
      }
    }
  }
}

// ---- Diagnostic ----

static void pr_reg(const char *name, uint8_t reg) {
  puts(name);
  puts("=0x");
  puthexn(ksz_read(reg), 4);
  putchar(' ');
}

// ---- Main ----

int main(void) {
  puts("\n=== KSZ8851 Minimal DHCP (LiteX spi_wb) ===\n");

  // Software reset of SPI controller (in case BIOS left it mid-transfer)
  SPI_REG(SPI_CONTROL) = (1u << 31);
  // Configure: MSB-first, CPOL=0, CPHA=0, half_clk_period=1 (25MHz SPI at 50MHz sys)
  SPI_REG(SPI_CFG) = (1 << 29) | 1;
  SPI_REG(SPI_CS) = 1;  // De-assert CS
  spi_wait_idle();

  // Pulse CS a few times to reset KSZ8851 SPI state machine
  for (int i = 0; i < 5; i++) {
    SPI_REG(SPI_CS) = 0;
    delay(200);
    SPI_REG(SPI_CS) = 1;
    delay(200);
  }

  // Software reset of KSZ8851
  puts("Resetting KSZ8851...\n");
  ksz_write(ETH_GRR, 0x0001);
  delay_ms(50);
  ksz_write(ETH_GRR, 0x0000);
  delay_ms(50);

  uint16_t cider = ksz_read(ETH_CIDER);
  puts("Chip ID: 0x");
  puthexn(cider, 4);
  putchar('\n');
  if ((cider & 0xFFF0) != 0x8870) {
    puts("ERROR: Bad chip ID, retrying...\n");
    // Try one more software reset cycle
    SPI_REG(SPI_CONTROL) = (1u << 31);
    SPI_REG(SPI_CFG) = (1 << 29) | 1;
    SPI_REG(SPI_CS) = 1;
    spi_wait_idle();
    delay_ms(10);
    ksz_write(ETH_GRR, 0x0001);
    delay_ms(50);
    ksz_write(ETH_GRR, 0x0000);
    delay_ms(50);
    cider = ksz_read(ETH_CIDER);
    puts("Retry Chip ID: 0x");
    puthexn(cider, 4);
    putchar('\n');
    if ((cider & 0xFFF0) != 0x8870) {
      puts("FATAL: Bad chip ID\n");
      while (1);
    }
  }

  // MAC address
  ksz_write(ETH_MARH, 0x0200);
  ksz_write(ETH_MARM, 0x0000);
  ksz_write(ETH_MARL, 0x0001);
  puts("MAC: 02:00:00:00:00:01\n");

  // TX init
  ksz_write(ETH_TXFDPR, 0x4000);
  ksz_write(ETH_TXCR, 0x00EE);

  // RX init
  ksz_write(ETH_RXFDPR, 0x4000);
  ksz_write(ETH_RXFCTR, 0x0001);
  ksz_write(ETH_RXCR1, 0x7CE0);  // unicast + broadcast + multicast
  ksz_write(ETH_RXCR2, 0x009C);
  ksz_write(ETH_RXQCR, rc_rxqcr);

  // PHY
  ksz_set(ETH_P1CR, 1 << 13);

  // Flow control
  ksz_write(ETH_FCLWR, 0x0600);
  ksz_write(ETH_FCHWR, 0x0400);

  // Interrupts (polling only)
  ksz_write(ETH_ISR, 0xFFFF);
  ksz_write(ETH_IER, 0xE000);

  // Enable TX and RX
  ksz_set(ETH_TXCR, 1 << 0);
  ksz_set(ETH_RXCR1, 1 << 0);

  puts("Init done. ");
  pr_reg("RXCR1", ETH_RXCR1);
  pr_reg("RXCR2", ETH_RXCR2);
  pr_reg("RXQCR", ETH_RXQCR);
  pr_reg("TXCR", ETH_TXCR);
  putchar('\n');

  // Wait for link
  puts("Waiting for link...\n");
  for (int i = 0; i < 50; i++) {
    if (ksz_read(ETH_P1SR) & (1 << 5)) {
      puts("Link UP!\n");
      break;
    }
    putchar('.');
    delay_ms(100);
  }
  putchar('\n');

  // ---- Main loop: DHCP then poll ----

  uint32_t loop_count = 0;

  while (1) {
    rx_poll();

    // DHCP state machine (simple timer based on loop iterations)
    if (dhcp_state == DHCP_STATE_INIT) {
      if (dhcp_delay == 0) {
        dhcp_delay = 500000;
        dhcp_state = DHCP_STATE_SELECTING;
        send_dhcp_packet(1 /* DISCOVER */, 0, 0);
      } else {
        dhcp_delay--;
      }
    }
    else if (dhcp_state == DHCP_STATE_SELECTING || dhcp_state == DHCP_STATE_REQUESTING) {
      if (dhcp_delay == 0) {
        dhcp_delay = 1000000;
        dhcp_state = DHCP_STATE_SELECTING;
        send_dhcp_packet(1 /* DISCOVER */, 0, 0);
      } else {
        dhcp_delay--;
      }
    }

    // Periodic status
    if (++loop_count >= 200000) {
      loop_count = 0;
      puts("state=");
      putdec(dhcp_state);
      if (my_ip) {
        puts(" ip=");
        print_ip(my_ip);
      }
      puts(" ISR=0x");
      puthexn(ksz_read(ETH_ISR), 4);
      puts(" RXFCTR=0x");
      puthexn(ksz_read(ETH_RXFCTR), 4);
      putchar('\n');
    }
  }

  return 0;
}
