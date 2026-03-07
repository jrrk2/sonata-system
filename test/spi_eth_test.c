// Standalone KSZ8851 SPI Ethernet test + TFTP boot for LiteX VexRiscv on Sonata
// Load via serial (boot.bin on SD) and run from HyperRAM at 0x40000000
//
// Tests SPI controller, KSZ8851 init, ARP, ping, TFTP download

#include <stdint.h>

// --- Hardware addresses ---
#define UART_RXTX   (*(volatile uint32_t *)0xf0001000)
#define UART_TXFULL (*(volatile uint32_t *)0xf0001004)

#define SPIETH_BASE  0x80302000
#define SPI_REG(off)   (*(volatile uint32_t *)(SPIETH_BASE + (off)))
#define SPI_TX_BUF     ((volatile uint32_t *)(SPIETH_BASE + 0x1000))
#define SPI_RX_BUF     ((volatile uint32_t *)(SPIETH_BASE + 0x1800))

// SPI controller registers
#define SPI_CFG         0x0C
#define SPI_CONTROL     0x10
#define SPI_STATUS      0x14
#define SPI_START       0x18
#define SPI_CS          0x28
#define SPI_STATUS_IDLE (1 << 26)

// KSZ8851 registers
#define KSZ_MARL    0x10
#define KSZ_MARM    0x12
#define KSZ_MARH    0x14
#define KSZ_GRR     0x26
#define KSZ_TXCR    0x70
#define KSZ_RXCR1   0x74
#define KSZ_RXCR2   0x76
#define KSZ_TXMIR   0x78
#define KSZ_RXFHSR  0x7C
#define KSZ_RXFHBCR 0x7E
#define KSZ_TXQCR   0x80
#define KSZ_RXQCR   0x82
#define KSZ_TXFDPR  0x84
#define KSZ_RXFDPR  0x86
#define KSZ_IER     0x90
#define KSZ_ISR     0x92
#define KSZ_RXFCTR  0x9C
#define KSZ_FCLWR   0xB0
#define KSZ_FCHWR   0xB2
#define KSZ_CIDER   0xC0
#define KSZ_P1CR    0xF6
#define KSZ_P1SR    0xF8

#define RX_VALID          (1 << 15)
#define RX_ERROR_MASK     ((1<<0)|(1<<1)|(1<<2)|(1<<4))
#define RXQCR_RELEASE_ERROR (1 << 0)
#define RXQCR_START_DMA   (1 << 3)
#define RXQCR_AUTO_DEQUEUE (1 << 4)
#define RXQCR_FRAME_COUNT (1 << 5)
#define TXQCR_MANUAL_ENQUEUE (1 << 0)

// Protocol constants
#define ETHERTYPE_ARP 0x0806
#define ETHERTYPE_IP  0x0800
#define ARP_OPCODE_REQUEST 0x0001
#define ARP_OPCODE_REPLY   0x0002
#define IP_IPV4       0x45
#define IP_TTL        64
#define IP_PROTO_UDP  0x11
#define IP_PROTO_ICMP 0x01
#define ICMP_ECHO     0x08
#define ICMP_ECHO_REPLY 0x00

#define FRAME_BUF_SIZE 1536
#define TFTP_PORT      69
#define TFTP_PORT_IN   7642
#define BLOCK_SIZE     1024

// Network config
#define MY_IP          0xC0A80132  // 192.168.1.50
#define SERVER_IP      0xC0A8016A  // 192.168.1.106

// --- Helpers ---
static void *memcpy_local(void *dst, const void *src, uint32_t n)
{
	uint8_t *d = dst; const uint8_t *s = src;
	while (n--) *d++ = *s++;
	return dst;
}

static void *memset_local(void *dst, int c, uint32_t n)
{
	uint8_t *d = dst;
	while (n--) *d++ = c;
	return dst;
}

static uint32_t strlen_local(const char *s)
{
	uint32_t n = 0;
	while (*s++) n++;
	return n;
}

static uint16_t htons(uint16_t v) { return (v >> 8) | (v << 8); }
static uint32_t htonl(uint32_t v)
{
	return ((v >> 24) & 0xFF) | ((v >> 8) & 0xFF00) |
	       ((v << 8) & 0xFF0000) | ((v << 24) & 0xFF000000);
}
#define ntohs htons
#define ntohl htonl

// --- UART output ---
static void putc_uart(char c)
{
	while (UART_TXFULL);
	UART_RXTX = c;
}

static void puts(const char *s)
{
	while (*s) {
		if (*s == '\n') putc_uart('\r');
		putc_uart(*s++);
	}
}

static void put_hex4(uint8_t v) { putc_uart(v < 10 ? '0'+v : 'a'+v-10); }
static void put_hex8(uint8_t v) { put_hex4(v>>4); put_hex4(v&0xf); }
static void put_hex16(uint16_t v) { put_hex8(v>>8); put_hex8(v&0xff); }
static void put_hex32(uint32_t v) { put_hex16(v>>16); put_hex16(v&0xffff); }

static void put_dec(uint32_t v)
{
	char buf[12]; int i = 0;
	if (v == 0) { putc_uart('0'); return; }
	while (v) { buf[i++] = '0' + (v % 10); v /= 10; }
	while (i--) putc_uart(buf[i]);
}

static void put_ip(uint32_t ip)
{
	put_dec((ip >> 24) & 0xFF); putc_uart('.');
	put_dec((ip >> 16) & 0xFF); putc_uart('.');
	put_dec((ip >> 8) & 0xFF); putc_uart('.');
	put_dec(ip & 0xFF);
}

static void put_mac(const uint8_t *m)
{
	for (int i = 0; i < 6; i++) {
		if (i) putc_uart(':');
		put_hex8(m[i]);
	}
}

static void hexdump(const uint8_t *data, uint32_t len, uint32_t max)
{
	if (len > max) len = max;
	for (uint32_t i = 0; i < len; i++) {
		if ((i & 15) == 0) { puts("  "); put_hex16(i); puts(": "); }
		put_hex8(data[i]);
		putc_uart(' ');
		if ((i & 15) == 15 || i == len-1) putc_uart('\n');
	}
}

static void delay(volatile uint32_t n) { while (n--) __asm__ volatile(""); }

// ==========================================================================
// Layer 1: SPI controller
// ==========================================================================
static void spi_wait_idle(void)
{
	int timeout = 100000;
	while (!(SPI_REG(SPI_STATUS) & SPI_STATUS_IDLE)) {
		if (--timeout <= 0) { puts("SPI: idle timeout!\n"); return; }
	}
}

static void tx_bram_write(const uint8_t *data, uint32_t len)
{
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

static void tx_bram_write_at(const uint8_t *data, uint32_t offset, uint32_t len)
{
	uint32_t i = 0, pos = offset;
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
	while (i + 3 < len) {
		SPI_TX_BUF[pos/4] = data[i] | ((uint32_t)data[i+1]<<8) |
			((uint32_t)data[i+2]<<16) | ((uint32_t)data[i+3]<<24);
		i += 4; pos += 4;
	}
	if (i < len) {
		uint32_t val = 0;
		for (uint32_t j = 0; i+j < len; j++)
			val |= (uint32_t)data[i+j] << (j*8);
		SPI_TX_BUF[pos/4] = val;
	}
}

static void rx_bram_read(uint8_t *data, uint32_t offset, uint32_t len)
{
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

// ==========================================================================
// Layer 2: KSZ8851 register and FIFO access
// ==========================================================================
static uint16_t ksz_reg_read(uint8_t reg)
{
	uint8_t be = (reg & 0x2) == 0 ? 0x03 : 0x0C;
	uint8_t cmd[4];
	cmd[0] = (be << 2) | (reg >> 6);
	cmd[1] = (reg << 2) & 0xF0;
	cmd[2] = 0; cmd[3] = 0;
	tx_bram_write(cmd, 4);
	SPI_REG(SPI_CS) = 0;
	SPI_REG(SPI_START) = 4;
	spi_wait_idle();
	uint32_t rx = SPI_RX_BUF[0];
	SPI_REG(SPI_CS) = 1;
	return (rx >> 16) & 0xFFFF;
}

static void ksz_reg_write(uint8_t reg, uint16_t val)
{
	uint8_t be = (reg & 0x2) == 0 ? 0x03 : 0x0C;
	uint8_t cmd[4];
	cmd[0] = (0x01 << 6) | (be << 2) | (reg >> 6);
	cmd[1] = (reg << 2) & 0xF0;
	cmd[2] = val & 0xFF;
	cmd[3] = (val >> 8) & 0xFF;
	tx_bram_write(cmd, 4);
	SPI_REG(SPI_CS) = 0;
	SPI_REG(SPI_START) = 4;
	spi_wait_idle();
	SPI_REG(SPI_CS) = 1;
}

static void ksz_reg_set(uint8_t reg, uint16_t mask)
{
	ksz_reg_write(reg, ksz_reg_read(reg) | mask);
}

static void ksz_reg_clear(uint8_t reg, uint16_t mask)
{
	ksz_reg_write(reg, ksz_reg_read(reg) & ~mask);
}

static int ksz_send_frame(const uint8_t *frame, uint16_t len)
{
	int timeout = 100000;
	while (timeout-- > 0) {
		uint16_t txmir = ksz_reg_read(KSZ_TXMIR) & 0x0FFF;
		if (txmir >= len + 4) break;
	}
	if (timeout <= 0) { puts("TX FIFO full!\n"); return -1; }

	// Reset TX frame data pointer
	ksz_reg_write(KSZ_TXFDPR, 0x4000);

	// CRITICAL: Disable auto-dequeue before TX DMA to prevent the
	// StartDmaAccess 1->0 transition from releasing the next RX frame.
	ksz_reg_clear(KSZ_RXQCR, RXQCR_AUTO_DEQUEUE);
	ksz_reg_set(KSZ_RXQCR, RXQCR_START_DMA);

	uint32_t pad = (-(uint32_t)len) & 0x3;
	uint32_t total = 1 + 4 + len + pad;

	uint8_t hdr[5];
	hdr[0] = 0xC0;
	uint32_t txhdr = 0x8000 | ((uint32_t)len << 16);
	hdr[1] = txhdr & 0xFF;
	hdr[2] = (txhdr >> 8) & 0xFF;
	hdr[3] = (txhdr >> 16) & 0xFF;
	hdr[4] = (txhdr >> 24) & 0xFF;
	tx_bram_write(hdr, 5);
	tx_bram_write_at(frame, 5, len);
	if (pad > 0) {
		uint8_t zeros[4] = {0,0,0,0};
		tx_bram_write_at(zeros, 5+len, pad);
	}

	SPI_REG(SPI_CS) = 0;
	SPI_REG(SPI_START) = total;
	spi_wait_idle();
	SPI_REG(SPI_CS) = 1;

	ksz_reg_clear(KSZ_RXQCR, RXQCR_START_DMA);
	// Re-enable auto-dequeue (the 1->0 transition already happened)
	ksz_reg_set(KSZ_RXQCR, RXQCR_AUTO_DEQUEUE);
	ksz_reg_set(KSZ_TXQCR, TXQCR_MANUAL_ENQUEUE);
	return 0;
}

static uint16_t ksz_recv_frame(uint8_t *frame, uint16_t max_len)
{
	uint16_t frames = ksz_reg_read(KSZ_RXFCTR) >> 8;
	if (frames == 0) return 0;

	uint16_t status = ksz_reg_read(KSZ_RXFHSR);
	if (!(status & RX_VALID) || (status & RX_ERROR_MASK)) {
		ksz_reg_set(KSZ_RXQCR, RXQCR_RELEASE_ERROR);
		while (ksz_reg_read(KSZ_RXQCR) & RXQCR_RELEASE_ERROR);
		return 0;
	}

	uint16_t len = ksz_reg_read(KSZ_RXFHBCR) & 0xFFF;
	if (len == 0 || len > max_len) {
		ksz_reg_set(KSZ_RXQCR, RXQCR_RELEASE_ERROR);
		while (ksz_reg_read(KSZ_RXQCR) & RXQCR_RELEASE_ERROR);
		return 0;
	}

	puts("  RX frame: status=0x");
	put_hex16(status);
	puts(" len=");
	put_dec(len);
	puts("\n");

	ksz_reg_write(KSZ_RXFDPR, 0x4000);
	ksz_reg_set(KSZ_RXQCR, RXQCR_START_DMA);

	uint32_t pad = (-(uint32_t)len) & 0x3;
	uint32_t total = 1 + 8 + len + pad;

	SPI_TX_BUF[0] = 0x80;
	for (uint32_t w = 1; w < (total+3)/4; w++)
		SPI_TX_BUF[w] = 0;

	SPI_REG(SPI_CS) = 0;
	SPI_REG(SPI_START) = total;
	spi_wait_idle();

	/* Debug: dump raw RX BRAM words 0-5 (first 24 bytes) */
	puts("  RX BRAM raw:");
	for (int w = 0; w < 6; w++) {
		puts(" ");
		put_hex32(SPI_RX_BUF[w]);
	}
	puts("\n");

	rx_bram_read(frame, 9, len);

	SPI_REG(SPI_CS) = 1;
	ksz_reg_clear(KSZ_RXQCR, RXQCR_START_DMA);

	return len;
}

// ==========================================================================
// Layer 3: UDP/IP/ARP/ICMP + TFTP
// ==========================================================================

struct ethernet_header {
	uint8_t destmac[6];
	uint8_t srcmac[6];
	uint16_t ethertype;
} __attribute__((packed));

struct arp_frame {
	uint16_t hwtype;
	uint16_t proto;
	uint8_t hwsize;
	uint8_t protosize;
	uint16_t opcode;
	uint8_t sender_mac[6];
	uint32_t sender_ip;
	uint8_t target_mac[6];
	uint32_t target_ip;
	uint8_t padding[18];
} __attribute__((packed));

struct ip_header {
	uint8_t version;
	uint8_t diff_services;
	uint16_t total_length;
	uint16_t identification;
	uint16_t fragment_offset;
	uint8_t ttl;
	uint8_t proto;
	uint16_t checksum;
	uint32_t src_ip;
	uint32_t dst_ip;
} __attribute__((packed));

struct udp_header {
	uint16_t src_port;
	uint16_t dst_port;
	uint16_t length;
	uint16_t checksum;
} __attribute__((packed));

struct udp_frame {
	struct ip_header ip;
	struct udp_header udp;
	char payload[];
} __attribute__((packed));

struct icmp_header {
	uint8_t type;
	uint8_t code;
	uint16_t checksum;
	uint16_t identifier;
	uint16_t sequence_number;
} __attribute__((packed));

struct icmp_frame {
	struct ip_header ip;
	struct icmp_header icmp;
	char payload[];
} __attribute__((packed));

struct ethernet_frame {
	struct ethernet_header eth_header;
	union {
		struct arp_frame arp;
		struct udp_frame udp;
		struct icmp_frame icmp;
	} contents;
} __attribute__((packed));

typedef union {
	struct ethernet_frame frame;
	uint8_t raw[FRAME_BUF_SIZE];
} ethernet_buffer;

struct pseudo_header {
	uint32_t src_ip;
	uint32_t dst_ip;
	uint8_t zero;
	uint8_t proto;
	uint16_t length;
} __attribute__((packed));

// Globals
static ethernet_buffer txbuf, rxbuf;
static uint32_t txlen, rxlen;
static uint8_t my_mac[6];
static uint32_t my_ip;
static uint8_t cached_mac[6];
static uint32_t cached_ip;
static const uint8_t broadcast[6] = {0xff,0xff,0xff,0xff,0xff,0xff};

typedef void (*udp_callback)(uint32_t src_ip, uint16_t src_port,
    uint16_t dst_port, void *data, uint32_t length);
static udp_callback rx_callback;

// Debug control
static int debug_tx = 1;  // Print TX packet summaries
static int debug_rx = 1;  // Print RX packet summaries

static uint16_t ip_checksum(uint32_t r, void *buffer, uint32_t length, int complete)
{
	uint8_t *ptr = buffer;
	length >>= 1;
	for (uint32_t i = 0; i < length; i++)
		r += ((uint32_t)(ptr[2*i]) << 8) | (uint32_t)(ptr[2*i+1]);
	while (r >> 16)
		r = (r & 0xffff) + (r >> 16);
	if (complete) {
		r = ~r;
		r &= 0xffff;
		if (r == 0) r = 0xffff;
	}
	return r;
}

static void fill_eth_header(struct ethernet_header *h,
	const uint8_t *destmac, const uint8_t *srcmac, uint16_t ethertype)
{
	for (int i = 0; i < 6; i++) h->destmac[i] = destmac[i];
	for (int i = 0; i < 6; i++) h->srcmac[i] = srcmac[i];
	h->ethertype = htons(ethertype);
}

static void send_packet(void)
{
	if (debug_tx) {
		uint16_t et = ntohs(txbuf.frame.eth_header.ethertype);
		puts("[TX] ");
		put_dec(txlen);
		puts("B dst=");
		put_mac(txbuf.frame.eth_header.destmac);
		puts(" et=0x");
		put_hex16(et);
		if (et == ETHERTYPE_ARP) {
			puts(" ARP op=");
			put_dec(ntohs(txbuf.frame.contents.arp.opcode));
		} else if (et == ETHERTYPE_IP) {
			struct ip_header *ip = &txbuf.frame.contents.udp.ip;
			if (ip->proto == IP_PROTO_UDP) {
				puts(" UDP ");
				put_dec(ntohs(txbuf.frame.contents.udp.udp.src_port));
				puts("->");
				put_dec(ntohs(txbuf.frame.contents.udp.udp.dst_port));
				puts(" len=");
				put_dec(ntohs(txbuf.frame.contents.udp.udp.length));
			} else if (ip->proto == IP_PROTO_ICMP) {
				puts(" ICMP type=");
				put_dec(txbuf.frame.contents.icmp.icmp.type);
			}
		}
		puts("\n");
		hexdump(txbuf.raw, txlen, 64);
	}
	ksz_send_frame(txbuf.raw, txlen);
}

static void process_arp(void)
{
	const struct arp_frame *rx_arp = &rxbuf.frame.contents.arp;
	struct arp_frame *tx_arp = &txbuf.frame.contents.arp;

	if (rxlen < 60) return;
	if (ntohs(rx_arp->hwtype) != 0x0001) return;
	if (ntohs(rx_arp->proto) != 0x0800) return;

	if (ntohs(rx_arp->opcode) == ARP_OPCODE_REPLY) {
		if (ntohl(rx_arp->sender_ip) == cached_ip) {
			for (int i = 0; i < 6; i++)
				cached_mac[i] = rx_arp->sender_mac[i];
			puts("  ARP reply: ");
			put_ip(cached_ip);
			puts(" -> ");
			put_mac(cached_mac);
			puts("\n");
		}
		return;
	}
	if (ntohs(rx_arp->opcode) == ARP_OPCODE_REQUEST) {
		if (ntohl(rx_arp->target_ip) == my_ip) {
			puts("  ARP request for us, replying\n");
			fill_eth_header(&txbuf.frame.eth_header,
				rx_arp->sender_mac, my_mac, ETHERTYPE_ARP);
			txlen = 60;
			tx_arp->hwtype = htons(0x0001);
			tx_arp->proto = htons(0x0800);
			tx_arp->hwsize = 6;
			tx_arp->protosize = 4;
			tx_arp->opcode = htons(ARP_OPCODE_REPLY);
			tx_arp->sender_ip = htonl(my_ip);
			for (int i = 0; i < 6; i++) tx_arp->sender_mac[i] = my_mac[i];
			tx_arp->target_ip = rx_arp->sender_ip;
			for (int i = 0; i < 6; i++) tx_arp->target_mac[i] = rx_arp->sender_mac[i];
			memset_local(tx_arp->padding, 0, sizeof(tx_arp->padding));
			send_packet();
		}
	}
}

static void process_icmp(void)
{
	if (rxlen < sizeof(struct ethernet_header) + sizeof(struct icmp_frame))
		return;
	const struct icmp_frame *rx_icmp = &rxbuf.frame.contents.icmp;
	struct icmp_frame *tx_icmp = &txbuf.frame.contents.icmp;

	if (ntohs(rx_icmp->ip.total_length) < sizeof(struct icmp_frame))
		return;
	uint16_t length = ntohs(rx_icmp->ip.total_length) - sizeof(struct icmp_frame);

	if (rx_icmp->icmp.type == ICMP_ECHO) {
		puts("  ICMP echo request, replying\n");
		fill_eth_header(&txbuf.frame.eth_header,
			rxbuf.frame.eth_header.srcmac, my_mac, ETHERTYPE_IP);
		tx_icmp->ip.version = IP_IPV4;
		tx_icmp->ip.diff_services = 0;
		tx_icmp->ip.total_length = htons(length + sizeof(struct icmp_frame));
		tx_icmp->ip.identification = 0;
		tx_icmp->ip.fragment_offset = htons(0x4000);
		tx_icmp->ip.ttl = IP_TTL;
		tx_icmp->ip.proto = IP_PROTO_ICMP;
		tx_icmp->ip.checksum = 0;
		tx_icmp->ip.src_ip = htonl(my_ip);
		tx_icmp->ip.dst_ip = rx_icmp->ip.src_ip;
		tx_icmp->ip.checksum = htons(ip_checksum(0, &tx_icmp->ip, sizeof(struct ip_header), 1));
		tx_icmp->icmp.type = ICMP_ECHO_REPLY;
		tx_icmp->icmp.code = 0;
		tx_icmp->icmp.identifier = rx_icmp->icmp.identifier;
		tx_icmp->icmp.sequence_number = rx_icmp->icmp.sequence_number;
		for (uint32_t i = 0; i < length; i++)
			tx_icmp->payload[i] = rx_icmp->payload[i];
		tx_icmp->icmp.checksum = 0;
		tx_icmp->icmp.checksum = htons(ip_checksum(0, &tx_icmp->icmp,
			length + sizeof(struct icmp_header), 1));
		txlen = length + sizeof(struct ethernet_header) + sizeof(struct icmp_frame);
		send_packet();
	} else if (rx_icmp->icmp.type == ICMP_ECHO_REPLY) {
		puts("  ICMP echo reply received!\n");
	}
}

static void process_udp(void)
{
	if (rxlen < sizeof(struct ethernet_header) + sizeof(struct udp_frame)) return;
	struct udp_frame *udp_ip = &rxbuf.frame.contents.udp;
	if (udp_ip->ip.proto != IP_PROTO_UDP) return;
	if (ntohl(udp_ip->ip.dst_ip) != my_ip) return;

	if (rx_callback) {
		rx_callback(ntohl(udp_ip->ip.src_ip), ntohs(udp_ip->udp.src_port),
			ntohs(udp_ip->udp.dst_port),
			udp_ip->payload, ntohs(udp_ip->udp.length) - sizeof(struct udp_header));
	}
}

static void process_frame(void)
{
	uint16_t et = ntohs(rxbuf.frame.eth_header.ethertype);

	if (debug_rx) {
		puts("[RX] ");
		put_dec(rxlen);
		puts("B src=");
		put_mac(rxbuf.frame.eth_header.srcmac);
		puts(" et=0x");
		put_hex16(et);
		if (et == ETHERTYPE_ARP) {
			puts(" ARP op=");
			put_dec(ntohs(rxbuf.frame.contents.arp.opcode));
			puts(" sender=");
			put_ip(ntohl(rxbuf.frame.contents.arp.sender_ip));
		} else if (et == ETHERTYPE_IP) {
			struct ip_header *ip = &rxbuf.frame.contents.udp.ip;
			puts(" IP proto=");
			put_dec(ip->proto);
			puts(" src=");
			put_ip(ntohl(ip->src_ip));
			if (ip->proto == IP_PROTO_UDP) {
				puts(" UDP ");
				put_dec(ntohs(rxbuf.frame.contents.udp.udp.src_port));
				puts("->");
				put_dec(ntohs(rxbuf.frame.contents.udp.udp.dst_port));
			}
		}
		puts("\n");
		hexdump(rxbuf.raw, rxlen, 64);
	}

	if (et == ETHERTYPE_ARP) {
		process_arp();
	} else if (et == ETHERTYPE_IP) {
		if (rxbuf.frame.contents.udp.ip.version != IP_IPV4) return;
		uint32_t dst = ntohl(rxbuf.frame.contents.udp.ip.dst_ip);
		if (dst != my_ip && dst != 0xFFFFFFFF) return;
		if (rxbuf.frame.contents.udp.ip.proto == IP_PROTO_UDP)
			process_udp();
		else if (rxbuf.frame.contents.udp.ip.proto == IP_PROTO_ICMP)
			process_icmp();
	}
}

static void udp_service(void)
{
	rxlen = ksz_recv_frame(rxbuf.raw, FRAME_BUF_SIZE);
	if (rxlen > 0)
		process_frame();
}

static int udp_send(uint16_t src_port, uint16_t dst_port, uint32_t length)
{
	struct pseudo_header h;
	uint32_t r;

	if (cached_mac[0]==0 && cached_mac[1]==0 && cached_mac[2]==0 &&
	    cached_mac[3]==0 && cached_mac[4]==0 && cached_mac[5]==0)
		return 0;

	txlen = length + sizeof(struct ethernet_header) + sizeof(struct udp_frame);
	if (txlen < 60) txlen = 60;

	fill_eth_header(&txbuf.frame.eth_header, cached_mac, my_mac, ETHERTYPE_IP);

	txbuf.frame.contents.udp.ip.version = IP_IPV4;
	txbuf.frame.contents.udp.ip.diff_services = 0;
	txbuf.frame.contents.udp.ip.total_length = htons(length + sizeof(struct udp_frame));
	txbuf.frame.contents.udp.ip.identification = 0;
	txbuf.frame.contents.udp.ip.fragment_offset = htons(0x4000);
	txbuf.frame.contents.udp.ip.ttl = IP_TTL;
	h.proto = txbuf.frame.contents.udp.ip.proto = IP_PROTO_UDP;
	txbuf.frame.contents.udp.ip.checksum = 0;
	h.src_ip = txbuf.frame.contents.udp.ip.src_ip = htonl(my_ip);
	h.dst_ip = txbuf.frame.contents.udp.ip.dst_ip = htonl(cached_ip);
	txbuf.frame.contents.udp.ip.checksum = htons(ip_checksum(0,
		&txbuf.frame.contents.udp.ip, sizeof(struct ip_header), 1));

	txbuf.frame.contents.udp.udp.src_port = htons(src_port);
	txbuf.frame.contents.udp.udp.dst_port = htons(dst_port);
	h.length = txbuf.frame.contents.udp.udp.length = htons(length + sizeof(struct udp_header));
	txbuf.frame.contents.udp.udp.checksum = 0;

	h.zero = 0;
	r = ip_checksum(0, &h, sizeof(struct pseudo_header), 0);
	if (length & 1) {
		txbuf.frame.contents.udp.payload[length] = 0;
		length++;
	}
	r = ip_checksum(r, &txbuf.frame.contents.udp.udp,
		sizeof(struct udp_header)+length, 1);
	txbuf.frame.contents.udp.udp.checksum = htons(r);

	send_packet();
	return 1;
}

static void *udp_get_tx_buffer(void)
{
	return txbuf.frame.contents.udp.payload;
}

static int udp_arp_resolve(uint32_t ip)
{
	struct arp_frame *arp;

	if (cached_ip == ip) {
		for (int i = 0; i < 6; i++)
			if (cached_mac[i]) return 1;
	}
	cached_ip = ip;
	for (int i = 0; i < 6; i++) cached_mac[i] = 0;

	for (int tries = 0; tries < 5; tries++) {
		puts("ARP request for ");
		put_ip(ip);
		puts(" (try ");
		put_dec(tries+1);
		puts(")\n");

		fill_eth_header(&txbuf.frame.eth_header, broadcast, my_mac, ETHERTYPE_ARP);
		txlen = 60;
		arp = &txbuf.frame.contents.arp;
		arp->hwtype = htons(0x0001);
		arp->proto = htons(0x0800);
		arp->hwsize = 6;
		arp->protosize = 4;
		arp->opcode = htons(ARP_OPCODE_REQUEST);
		arp->sender_ip = htonl(my_ip);
		for (int i = 0; i < 6; i++) arp->sender_mac[i] = my_mac[i];
		arp->target_ip = htonl(ip);
		memset_local(arp->target_mac, 0, 6);
		memset_local(arp->padding, 0, sizeof(arp->padding));
		send_packet();

		// Dump RX state after sending
		delay(1000000);  // Wait ~20ms for reply to arrive
		puts("  RX diag: ISR=0x");
		put_hex16(ksz_reg_read(KSZ_ISR));
		puts(" RXFCTR=0x");
		put_hex16(ksz_reg_read(KSZ_RXFCTR));
		puts(" RXCR1=0x");
		put_hex16(ksz_reg_read(KSZ_RXCR1));
		puts(" RXQCR=0x");
		put_hex16(ksz_reg_read(KSZ_RXQCR));
		puts(" P1SR=0x");
		put_hex16(ksz_reg_read(KSZ_P1SR));
		puts(" MARL=0x");
		put_hex16(ksz_reg_read(KSZ_MARL));
		puts(" MARM=0x");
		put_hex16(ksz_reg_read(KSZ_MARM));
		puts(" MARH=0x");
		put_hex16(ksz_reg_read(KSZ_MARH));
		puts("\n");

		// Clear ISR and check again
		ksz_reg_write(KSZ_ISR, 0xFFFF);
		delay(1000000);
		puts("  After clear: ISR=0x");
		put_hex16(ksz_reg_read(KSZ_ISR));
		puts(" RXFCTR=0x");
		put_hex16(ksz_reg_read(KSZ_RXFCTR));
		puts("\n");

		for (int timeout = 0; timeout < 500000; timeout++) {
			udp_service();
			for (int i = 0; i < 6; i++)
				if (cached_mac[i]) return 1;
		}
	}
	puts("ARP failed!\n");
	return 0;
}

// ==========================================================================
// TFTP client
// ==========================================================================
static uint8_t *tftp_dst_buffer;
static int tftp_total_length;
static int tftp_finished;
static int tftp_last_ack;
static uint16_t tftp_data_port;

static void tftp_rx_callback(uint32_t src_ip, uint16_t src_port,
    uint16_t dst_port, void *_data, uint32_t length)
{
	uint8_t *data = _data;
	if (length < 4) return;
	if (dst_port != TFTP_PORT_IN) return;

	uint16_t opcode = data[0] << 8 | data[1];
	uint16_t block = data[2] << 8 | data[3];

	if (debug_rx) {
		puts("  TFTP: op=");
		put_dec(opcode);
		puts(" block=");
		put_dec(block);
		puts(" len=");
		put_dec(length);
		puts("\n");
	}

	if (opcode == 4) { // ACK
		tftp_data_port = src_port;
		tftp_last_ack = block;
		return;
	}
	if (opcode == 6) { // OACK
		tftp_data_port = src_port;
		puts("  TFTP: OACK received, sending ACK 0\n");
		uint8_t *pkt = udp_get_tx_buffer();
		pkt[0] = 0; pkt[1] = 4; pkt[2] = 0; pkt[3] = 0; // ACK block 0
		udp_send(TFTP_PORT_IN, src_port, 4);
		tftp_last_ack = 0;
		return;
	}
	if (opcode == 3 && block >= 1) { // DATA
		uint32_t data_len = length - 4;
		uint32_t offset = (block - 1) * BLOCK_SIZE;
		for (uint32_t i = 0; i < data_len; i++)
			tftp_dst_buffer[offset + i] = data[i + 4];
		tftp_total_length += data_len;
		if (data_len < BLOCK_SIZE)
			tftp_finished = 1;

		// ACK this block
		uint8_t *pkt = udp_get_tx_buffer();
		pkt[0] = 0; pkt[1] = 4;
		pkt[2] = (block >> 8) & 0xFF;
		pkt[3] = block & 0xFF;
		udp_send(TFTP_PORT_IN, src_port, 4);
		return;
	}
	if (opcode == 5) { // ERROR
		puts("  TFTP ERROR: ");
		for (uint32_t i = 4; i < length && data[i]; i++)
			putc_uart(data[i]);
		puts("\n");
		tftp_total_length = -1;
		tftp_finished = 1;
	}
}

static int tftp_get(uint32_t ip, const char *filename, void *buffer)
{
	if (!udp_arp_resolve(ip))
		return -1;

	rx_callback = tftp_rx_callback;
	tftp_dst_buffer = buffer;
	tftp_total_length = 0;
	tftp_finished = 0;

	for (int tries = 0; tries < 5; tries++) {
		puts("TFTP: RRQ \"");
		puts(filename);
		puts("\" (try ");
		put_dec(tries+1);
		puts(")\n");

		// Build RRQ
		uint8_t *pkt = udp_get_tx_buffer();
		int pos = 0;
		pkt[pos++] = 0; pkt[pos++] = 1; // RRQ opcode
		uint32_t flen = strlen_local(filename);
		memcpy_local(&pkt[pos], filename, flen); pos += flen;
		pkt[pos++] = 0;
		// "octet"
		pkt[pos++]='o'; pkt[pos++]='c'; pkt[pos++]='t';
		pkt[pos++]='e'; pkt[pos++]='t'; pkt[pos++]=0;
		// "blksize" "1024"
		pkt[pos++]='b'; pkt[pos++]='l'; pkt[pos++]='k';
		pkt[pos++]='s'; pkt[pos++]='i'; pkt[pos++]='z';
		pkt[pos++]='e'; pkt[pos++]=0;
		pkt[pos++]='1'; pkt[pos++]='0'; pkt[pos++]='2';
		pkt[pos++]='4'; pkt[pos++]=0;

		udp_send(TFTP_PORT_IN, TFTP_PORT, pos);

		for (int i = 0; i < 2000000; i++) {
			udp_service();
			if (tftp_total_length > 0 || tftp_finished) goto got_response;
		}
	}
	puts("TFTP: No response from server\n");
	rx_callback = 0;
	return -1;

got_response:
	puts("TFTP: Transfer started\n");
	// Disable verbose RX debug for bulk transfer
	int old_rx = debug_rx, old_tx = debug_tx;
	debug_rx = 0;
	debug_tx = 0;

	for (int timeout = 12000000; timeout > 0 && !tftp_finished; timeout--) {
		udp_service();
		if ((tftp_total_length & 0x7FFF) == 0 && tftp_total_length > 0) {
			puts("  ");
			put_dec(tftp_total_length);
			puts(" bytes\n");
		}
	}

	debug_rx = old_rx;
	debug_tx = old_tx;
	rx_callback = 0;

	if (tftp_finished && tftp_total_length > 0) {
		puts("TFTP: Done, ");
		put_dec(tftp_total_length);
		puts(" bytes\n");
		return tftp_total_length;
	}

	puts("TFTP: Transfer failed\n");
	return -1;
}

// ==========================================================================
// Init and main
// ==========================================================================
static void ksz_init(void)
{
	puts("SPI Ethernet init...\n");
	// Software reset of SPI controller (in case BIOS left it mid-transfer)
	SPI_REG(SPI_CONTROL) = (1u << 31);
	// Configure: MSB-first, CPOL=0, CPHA=0, half_clk_period=1 (12.5MHz)
	SPI_REG(SPI_CFG) = (1 << 29) | 1;
	SPI_REG(SPI_CS) = 1;  // De-assert CS
	spi_wait_idle();
	// Pulse CS a few times to reset KSZ8851 SPI state machine
	for (int i = 0; i < 3; i++) {
		SPI_REG(SPI_CS) = 0;
		delay(100);
		SPI_REG(SPI_CS) = 1;
		delay(100);
	}

	// Software reset
	ksz_reg_write(KSZ_GRR, 0x0001);
	delay(500000);
	ksz_reg_write(KSZ_GRR, 0x0000);
	delay(500000);

	uint16_t cider = ksz_reg_read(KSZ_CIDER);
	puts("KSZ8851: Chip ID 0x");
	put_hex16(cider);
	puts("\n");
	if ((cider & 0xFFF0) != 0x8870) {
		puts("ERROR: Bad chip ID!\n");
		// Try reading a second time
		cider = ksz_reg_read(KSZ_CIDER);
		puts("Retry: 0x");
		put_hex16(cider);
		puts("\n");
		if ((cider & 0xFFF0) != 0x8870)
			return;
	}

	// Set MAC address: 10:e2:d5:00:00:01
	my_mac[0] = 0x10; my_mac[1] = 0xe2; my_mac[2] = 0xd5;
	my_mac[3] = 0x00; my_mac[4] = 0x00; my_mac[5] = 0x01;
	ksz_reg_write(KSZ_MARH, (my_mac[0]<<8)|my_mac[1]);
	ksz_reg_write(KSZ_MARM, (my_mac[2]<<8)|my_mac[3]);
	ksz_reg_write(KSZ_MARL, (my_mac[4]<<8)|my_mac[5]);

	// Standard init
	ksz_reg_write(KSZ_TXFDPR, 0x4000);
	ksz_reg_write(KSZ_TXCR, 0x00EE);
	ksz_reg_write(KSZ_RXFDPR, 0x4000);
	ksz_reg_write(KSZ_RXFCTR, 0x0001);
	ksz_reg_write(KSZ_RXCR1, 0x7CE0);
	ksz_reg_write(KSZ_RXCR2, 0x001C);
	ksz_reg_write(KSZ_RXQCR, RXQCR_FRAME_COUNT | RXQCR_AUTO_DEQUEUE);

	ksz_reg_set(KSZ_P1CR, 1 << 13); // Restart auto-negotiation
	ksz_reg_write(KSZ_FCLWR, 0x0600);
	ksz_reg_write(KSZ_FCHWR, 0x0400);
	ksz_reg_write(KSZ_ISR, 0xFFFF);
	ksz_reg_write(KSZ_IER, 0xE000);

	ksz_reg_set(KSZ_TXCR, 1 << 0);   // Enable TX
	ksz_reg_set(KSZ_RXCR1, 1 << 0);  // Enable RX

	// Wait for link
	puts("Waiting for link");
	for (int i = 0; i < 50; i++) {
		uint16_t p1sr = ksz_reg_read(KSZ_P1SR);
		if (p1sr & (1 << 5)) {
			puts(" UP\n");
			puts("  P1SR=0x");
			put_hex16(p1sr);
			puts(" MAC=");
			put_mac(my_mac);
			puts("\n");
			return;
		}
		putc_uart('.');
		delay(5000000);
	}
	puts(" TIMEOUT\n");
}

int main(void)
{
	puts("\n========================================\n");
	puts(" Standalone Ethernet Test + TFTP\n");
	puts("========================================\n\n");

	// Init
	ksz_init();

	my_ip = MY_IP;
	puts("Local IP: ");
	put_ip(my_ip);
	puts("\n");
	puts("Server IP: ");
	put_ip(SERVER_IP);
	puts("\n\n");

	memset_local(&txbuf, 0, sizeof(txbuf));
	memset_local(&rxbuf, 0, sizeof(rxbuf));
	cached_ip = 0;
	memset_local(cached_mac, 0, 6);
	rx_callback = 0;

	// Step 1: ARP resolve server
	puts("--- Step 1: ARP resolve server ---\n");
	if (!udp_arp_resolve(SERVER_IP)) {
		puts("FATAL: Cannot resolve server MAC\n");
		goto halt;
	}
	puts("Server MAC: ");
	put_mac(cached_mac);
	puts("\n\n");

	// Step 2: Listen for a bit (respond to pings/ARPs)
	puts("--- Step 2: Listening 2s (try ping 192.168.1.50) ---\n");
	for (int i = 0; i < 2000000; i++)
		udp_service();
	puts("\n");

	// Step 3: TFTP get boot.json
	puts("--- Step 3: TFTP boot.json ---\n");
	{
		static uint8_t json_buf[4096];
		int sz = tftp_get(SERVER_IP, "boot.json", json_buf);
		if (sz > 0) {
			puts("Contents (");
			put_dec(sz);
			puts(" bytes):\n");
			for (int i = 0; i < sz; i++)
				putc_uart(json_buf[i]);
			puts("\n");
		} else {
			puts("TFTP boot.json failed\n");
		}
	}

halt:
	puts("\n--- Done, spinning (responding to ARP/ping) ---\n");
	debug_tx = 0;
	debug_rx = 0;
	while (1) udp_service();
	return 0;
}
