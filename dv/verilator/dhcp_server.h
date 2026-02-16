// dhcp_server.h
// Simple DHCP server for Verilator testbench
// Monitors GMII TX, responds with DHCP Offer/ACK

#ifndef DHCP_SERVER_H
#define DHCP_SERVER_H

#include <stdint.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <iomanip>

// Standards-compliant network packet structures
struct eth_hdr {
    uint8_t  dst[6];
    uint8_t  src[6];
    uint16_t type;
} __attribute__((packed));

struct ip_hdr {
    uint8_t  vhl;
    uint8_t  tos;
    uint16_t len;
    uint16_t id;
    uint16_t frag;
    uint8_t  ttl;
    uint8_t  proto;
    uint16_t csum;
    uint32_t src;
    uint32_t dst;
} __attribute__((packed));

struct udp_hdr {
    uint16_t sport;
    uint16_t dport;
    uint16_t len;
    uint16_t csum;
} __attribute__((packed));

struct dhcp_packet {
    uint8_t  op;          // 1 = request, 2 = reply
    uint8_t  htype;       // Hardware type (1 = Ethernet)
    uint8_t  hlen;        // Hardware address length (6 for MAC)
    uint8_t  hops;        // Hops
    uint32_t xid;         // Transaction ID
    uint16_t secs;        // Seconds elapsed
    uint16_t flags;       // Flags (0x8000 = broadcast)
    uint32_t ciaddr;      // Client IP address
    uint32_t yiaddr;      // Your (client) IP address
    uint32_t siaddr;      // Server IP address
    uint32_t giaddr;      // Gateway IP address
    uint8_t  chaddr[16];  // Client hardware address
    uint8_t  sname[64];   // Server name
    uint8_t  file[128];   // Boot file name
    uint32_t magic;       // Magic cookie (0x63825363)
    uint8_t  options[312]; // Options
} __attribute__((packed));

class DHCPServer {
private:
    // GMII RX state machine
    enum class RxState {
        IDLE,
        PREAMBLE,
        RECEIVING,
        DONE
    };

    RxState rx_state = RxState::IDLE;
    std::vector<uint8_t> rx_buffer;
    uint8_t preamble_count = 0;

    // DHCP server configuration
    uint32_t server_ip;      // 192.168.2.1
    uint32_t offer_ip;       // 192.168.2.2
    uint32_t subnet_mask;    // 255.255.255.0
    uint8_t server_mac[6];

    // Response packet buffer
    std::vector<uint8_t> tx_packet;
    size_t tx_index = 0;
    bool tx_pending = false;

    // Calculate Ethernet CRC32 (FCS)
    uint32_t calculate_crc32(const std::vector<uint8_t> &data, size_t len) {
        uint32_t crc = 0xFFFFFFFF;
        const uint32_t poly = 0xEDB88320;  // Reversed polynomial for Ethernet

        for (size_t i = 0; i < len; i++) {
            crc ^= data[i];
            for (int j = 0; j < 8; j++) {
                crc = (crc >> 1) ^ (-(int)(crc & 1) & poly);
            }
        }
        return ~crc;
    }

    // Calculate IP checksum
    uint16_t ip_checksum(const uint8_t *data, size_t len) {
        uint32_t sum = 0;
        for (size_t i = 0; i < len; i += 2) {
            uint16_t word = (data[i] << 8) | (i + 1 < len ? data[i + 1] : 0);
            sum += word;
        }
        while (sum >> 16) {
            sum = (sum & 0xFFFF) + (sum >> 16);
        }
        return ~sum;
    }

    // Calculate UDP checksum (includes pseudo-header)
    uint16_t udp_checksum(uint32_t src_ip, uint32_t dst_ip, const uint8_t *udp_data, size_t udp_len) {
        uint32_t sum = 0;

        // Pseudo-header
        sum += (src_ip >> 16) & 0xFFFF;
        sum += src_ip & 0xFFFF;
        sum += (dst_ip >> 16) & 0xFFFF;
        sum += dst_ip & 0xFFFF;
        sum += 0x0011;  // Protocol (UDP)
        sum += udp_len;

        // UDP header + data
        for (size_t i = 0; i < udp_len; i += 2) {
            uint16_t word = (udp_data[i] << 8) | (i + 1 < udp_len ? udp_data[i + 1] : 0);
            sum += word;
        }

        while (sum >> 16) {
            sum = (sum & 0xFFFF) + (sum >> 16);
        }
        return ~sum;
    }

    // Build DHCP Offer packet
    void build_dhcp_offer(uint32_t xid, const uint8_t *client_mac, uint8_t msg_type) {
        tx_packet.clear();

        // Ethernet header (14 bytes) - broadcast
        for (int i = 0; i < 6; i++) tx_packet.push_back(0xFF);  // Broadcast
        for (int i = 0; i < 6; i++) tx_packet.push_back(server_mac[i]);
        tx_packet.push_back(0x08); tx_packet.push_back(0x00);  // IPv4

        // IP header (20 bytes)
        size_t ip_start = tx_packet.size();
        tx_packet.push_back(0x45);  // Version 4, IHL 5
        tx_packet.push_back(0x00);  // TOS
        uint16_t ip_len = 20 + 8 + 240 + 64;  // IP + UDP + DHCP(min) + options
        tx_packet.push_back(ip_len >> 8);
        tx_packet.push_back(ip_len & 0xFF);
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);  // ID
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);  // Flags
        tx_packet.push_back(0xFF);  // TTL
        tx_packet.push_back(0x11);  // UDP
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);  // Checksum (later)
        tx_packet.push_back((server_ip >> 24) & 0xFF);  // Src IP
        tx_packet.push_back((server_ip >> 16) & 0xFF);
        tx_packet.push_back((server_ip >> 8) & 0xFF);
        tx_packet.push_back(server_ip & 0xFF);
        tx_packet.push_back(0xFF); tx_packet.push_back(0xFF);  // Dst IP (broadcast)
        tx_packet.push_back(0xFF); tx_packet.push_back(0xFF);

        // Calculate IP checksum
        uint16_t ip_csum = ip_checksum(&tx_packet[ip_start], 20);
        tx_packet[ip_start + 10] = ip_csum >> 8;
        tx_packet[ip_start + 11] = ip_csum & 0xFF;

        // UDP header (8 bytes)
        size_t udp_start = tx_packet.size();
        tx_packet.push_back(0x00); tx_packet.push_back(0x43);  // Src port 67
        tx_packet.push_back(0x00); tx_packet.push_back(0x44);  // Dst port 68
        uint16_t udp_len = 8 + 240 + 64;
        tx_packet.push_back(udp_len >> 8);
        tx_packet.push_back(udp_len & 0xFF);
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);  // Checksum (calculated later)

        // DHCP header (240 bytes minimum)
        tx_packet.push_back(0x02);  // Boot Reply
        tx_packet.push_back(0x01);  // Ethernet
        tx_packet.push_back(0x06);  // Hardware address length
        tx_packet.push_back(0x00);  // Hops
        tx_packet.push_back((xid >> 24) & 0xFF);  // Transaction ID
        tx_packet.push_back((xid >> 16) & 0xFF);
        tx_packet.push_back((xid >> 8) & 0xFF);
        tx_packet.push_back(xid & 0xFF);
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);  // Seconds
        tx_packet.push_back(0x80); tx_packet.push_back(0x00);  // Flags (broadcast)
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);  // Client IP
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);
        tx_packet.push_back((offer_ip >> 24) & 0xFF);  // Your IP (offered)
        tx_packet.push_back((offer_ip >> 16) & 0xFF);
        tx_packet.push_back((offer_ip >> 8) & 0xFF);
        tx_packet.push_back(offer_ip & 0xFF);
        tx_packet.push_back((server_ip >> 24) & 0xFF);  // Server IP
        tx_packet.push_back((server_ip >> 16) & 0xFF);
        tx_packet.push_back((server_ip >> 8) & 0xFF);
        tx_packet.push_back(server_ip & 0xFF);
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);  // Gateway IP
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);

        // Client hardware address (16 bytes)
        for (int i = 0; i < 6; i++) tx_packet.push_back(client_mac[i]);
        for (int i = 6; i < 16; i++) tx_packet.push_back(0x00);

        // Server name (64 bytes)
        for (int i = 0; i < 64; i++) tx_packet.push_back(0x00);

        // Boot filename (128 bytes)
        for (int i = 0; i < 128; i++) tx_packet.push_back(0x00);

        // Magic cookie
        tx_packet.push_back(0x63); tx_packet.push_back(0x82);
        tx_packet.push_back(0x53); tx_packet.push_back(0x63);

        // DHCP options
        // Option 53: Message Type
        tx_packet.push_back(53); tx_packet.push_back(1); tx_packet.push_back(msg_type);

        // Option 54: Server Identifier
        tx_packet.push_back(54); tx_packet.push_back(4);
        tx_packet.push_back((server_ip >> 24) & 0xFF);
        tx_packet.push_back((server_ip >> 16) & 0xFF);
        tx_packet.push_back((server_ip >> 8) & 0xFF);
        tx_packet.push_back(server_ip & 0xFF);

        // Option 1: Subnet Mask
        tx_packet.push_back(1); tx_packet.push_back(4);
        tx_packet.push_back((subnet_mask >> 24) & 0xFF);
        tx_packet.push_back((subnet_mask >> 16) & 0xFF);
        tx_packet.push_back((subnet_mask >> 8) & 0xFF);
        tx_packet.push_back(subnet_mask & 0xFF);

        // Option 3: Router
        tx_packet.push_back(3); tx_packet.push_back(4);
        tx_packet.push_back((server_ip >> 24) & 0xFF);
        tx_packet.push_back((server_ip >> 16) & 0xFF);
        tx_packet.push_back((server_ip >> 8) & 0xFF);
        tx_packet.push_back(server_ip & 0xFF);

        // Option 51: Lease Time (3600 seconds)
        tx_packet.push_back(51); tx_packet.push_back(4);
        tx_packet.push_back(0x00); tx_packet.push_back(0x00);
        tx_packet.push_back(0x0E); tx_packet.push_back(0x10);

        // Option 255: End
        tx_packet.push_back(255);

        // Calculate UDP checksum
        uint32_t dst_ip_broadcast = 0xFFFFFFFF;
        uint16_t udp_csum = udp_checksum(server_ip, dst_ip_broadcast, &tx_packet[udp_start], udp_len);
        tx_packet[udp_start + 6] = udp_csum >> 8;
        tx_packet[udp_start + 7] = udp_csum & 0xFF;

        // Pad to minimum frame size (60 bytes before FCS)
        while (tx_packet.size() < 60) {
            tx_packet.push_back(0x00);
        }

        // Calculate and append FCS (4 bytes)
        uint32_t fcs = calculate_crc32(tx_packet, tx_packet.size());
        tx_packet.push_back(fcs & 0xFF);
        tx_packet.push_back((fcs >> 8) & 0xFF);
        tx_packet.push_back((fcs >> 16) & 0xFF);
        tx_packet.push_back((fcs >> 24) & 0xFF);

        std::cout << "[DHCP] Built " << (msg_type == 2 ? "OFFER" : "ACK")
                  << " packet (" << tx_packet.size() << " bytes)" << std::endl;
    }

    // Parse incoming packet for DHCP Discover/Request
    void parse_packet() {
        std::cout << "[DHCP] Parsing packet of " << rx_buffer.size() << " bytes" << std::endl;

        // Check minimum size (headers + DHCP fixed fields + magic cookie, without full options)
        size_t min_size = sizeof(eth_hdr) + sizeof(ip_hdr) + sizeof(udp_hdr) +
                         offsetof(dhcp_packet, options);  // Up to but not including options
        if (rx_buffer.size() < min_size) {
            std::cout << "[DHCP] Packet too small (need " << min_size
                      << " bytes, got " << rx_buffer.size() << ")" << std::endl;
            return;
        }

        // Cast to struct pointers for standards-compliant parsing
        const uint8_t *pkt = rx_buffer.data();
        const eth_hdr *eth = reinterpret_cast<const eth_hdr*>(pkt);

        // Check EtherType (network byte order)
        uint16_t ethertype = (eth->type >> 8) | ((eth->type & 0xFF) << 8);  // ntohs
        std::cout << "[DHCP] EtherType: 0x" << std::hex << ethertype << std::dec << std::endl;
        if (ethertype != 0x0800) {
            std::cout << "[DHCP] Not IPv4, ignoring" << std::endl;
            return;
        }

        // Parse IP header
        const ip_hdr *ip = reinterpret_cast<const ip_hdr*>(pkt + sizeof(eth_hdr));
        uint8_t ihl = (ip->vhl & 0x0F) * 4;

        std::cout << "[DHCP] IP version: " << (ip->vhl >> 4)
                  << ", IHL: " << (int)ihl
                  << ", Protocol: " << (int)ip->proto << std::endl;

        if (ip->proto != 17) {  // UDP
            std::cout << "[DHCP] Not UDP, ignoring" << std::endl;
            return;
        }

        // Parse UDP header
        const udp_hdr *udp = reinterpret_cast<const udp_hdr*>(pkt + sizeof(eth_hdr) + ihl);
        uint16_t src_port = (udp->sport >> 8) | ((udp->sport & 0xFF) << 8);  // ntohs
        uint16_t dst_port = (udp->dport >> 8) | ((udp->dport & 0xFF) << 8);  // ntohs
        uint16_t udp_len = (udp->len >> 8) | ((udp->len & 0xFF) << 8);  // ntohs

        std::cout << "[DHCP] UDP src_port: " << src_port
                  << ", dst_port: " << dst_port
                  << ", length: " << udp_len << std::endl;

        if (src_port != 68 || dst_port != 67) {
            std::cout << "[DHCP] Not DHCP ports (need 68->67, got "
                      << src_port << "->" << dst_port << ")" << std::endl;
            return;
        }

        // Parse DHCP header
        const dhcp_packet *dhcp = reinterpret_cast<const dhcp_packet*>(pkt + sizeof(eth_hdr) + ihl + sizeof(udp_hdr));

        std::cout << "[DHCP] DHCP op: " << (int)dhcp->op << " (1=request, 2=reply)" << std::endl;
        if (dhcp->op != 1) {
            std::cout << "[DHCP] Not a Boot Request, ignoring" << std::endl;
            return;
        }

        // Convert XID from network byte order
        uint32_t xid = (dhcp->xid >> 24) | ((dhcp->xid >> 8) & 0xFF00) |
                       ((dhcp->xid << 8) & 0xFF0000) | (dhcp->xid << 24);

        std::cout << "[DHCP] Transaction ID: 0x" << std::hex << xid << std::dec << std::endl;

        // Client MAC is first 6 bytes of chaddr
        const uint8_t *client_mac = dhcp->chaddr;
        std::cout << "[DHCP] Client MAC: " << std::hex;
        for (int j = 0; j < 6; j++) {
            std::cout << (j > 0 ? ":" : "") << std::setfill('0') << std::setw(2) << (int)client_mac[j];
        }
        std::cout << std::dec << std::endl;

        // Check magic cookie (network byte order)
        uint32_t magic = (dhcp->magic >> 24) | ((dhcp->magic >> 8) & 0xFF00) |
                         ((dhcp->magic << 8) & 0xFF0000) | (dhcp->magic << 24);
        std::cout << "[DHCP] Magic cookie: 0x" << std::hex << magic << std::dec;
        if (magic != 0x63825363) {
            std::cout << " (expected 0x63825363) - INVALID!" << std::endl;
            return;
        }
        std::cout << " - OK" << std::endl;

        // Parse DHCP options
        const uint8_t *options = dhcp->options;
        size_t opt_idx = 0;
        size_t max_opts = rx_buffer.size() - (sizeof(eth_hdr) + ihl + sizeof(udp_hdr) +
                                               offsetof(dhcp_packet, options));
        uint8_t msg_type = 0;

        std::cout << "[DHCP] Parsing options:" << std::endl;
        while (opt_idx < max_opts) {
            uint8_t opt = options[opt_idx++];
            if (opt == 255) {
                std::cout << "[DHCP]   Option 255 (End)" << std::endl;
                break;
            }
            if (opt_idx >= max_opts) break;
            uint8_t len = options[opt_idx++];
            std::cout << "[DHCP]   Option " << (int)opt << " length " << (int)len << std::endl;
            if (opt == 53 && len == 1 && opt_idx < max_opts) {
                msg_type = options[opt_idx];
                std::cout << "[DHCP]     Message Type: " << (int)msg_type
                          << " (1=Discover, 3=Request)" << std::endl;
            }
            opt_idx += len;
            if (opt_idx > max_opts) {
                std::cout << "[DHCP] Option extends past packet end!" << std::endl;
                break;
            }
        }

        if (msg_type == 1) {  // DHCP Discover
            std::cout << "[DHCP] *** Received DISCOVER - Building OFFER ***" << std::endl;
            // Convert XID back to host byte order for build_dhcp_offer
            uint32_t xid_host = (dhcp->xid >> 24) | ((dhcp->xid >> 8) & 0xFF00) |
                                ((dhcp->xid << 8) & 0xFF0000) | (dhcp->xid << 24);
            build_dhcp_offer(xid_host, client_mac, 2);  // Send OFFER
            tx_pending = true;
            tx_index = 0;
        } else if (msg_type == 3) {  // DHCP Request
            std::cout << "[DHCP] *** Received REQUEST - Building ACK ***" << std::endl;
            uint32_t xid_host = (dhcp->xid >> 24) | ((dhcp->xid >> 8) & 0xFF00) |
                                ((dhcp->xid << 8) & 0xFF0000) | (dhcp->xid << 24);
            build_dhcp_offer(xid_host, client_mac, 5);  // Send ACK
            tx_pending = true;
            tx_index = 0;
        } else {
            std::cout << "[DHCP] Unknown or missing message type: " << (int)msg_type << std::endl;
        }
    }

public:
    DHCPServer() {
        // Default configuration: 192.168.2.1/24
        server_ip = (192 << 24) | (168 << 16) | (2 << 8) | 1;
        offer_ip = (192 << 24) | (168 << 16) | (2 << 8) | 2;
        subnet_mask = (255 << 24) | (255 << 16) | (255 << 8) | 0;
        server_mac[0] = 0xA2; server_mac[1] = 0x78;
        server_mac[2] = 0x17; server_mac[3] = 0xDE;
        server_mac[4] = 0xEF; server_mac[5] = 0x64;
    }

    // Process GMII TX (capture packets from DUT)
    void process_tx(uint8_t tx_en, uint8_t txd) {
        switch (rx_state) {
            case RxState::IDLE:
                if (tx_en && txd == 0x55) {  // Preamble
                    preamble_count = 1;
                    rx_state = RxState::PREAMBLE;
                }
                break;

            case RxState::PREAMBLE:
                if (tx_en) {
                    if (txd == 0x55) {
                        preamble_count++;
                    } else if (txd == 0xD5 && preamble_count >= 7) {  // SFD
                        rx_buffer.clear();
                        rx_state = RxState::RECEIVING;
                    } else {
                        rx_state = RxState::IDLE;
                    }
                } else {
                    rx_state = RxState::IDLE;
                }
                break;

            case RxState::RECEIVING:
                if (tx_en) {
                    rx_buffer.push_back(txd);
                } else {
                    // Frame complete
                    std::cout << "[DHCP] Captured TX packet (" << rx_buffer.size()
                              << " bytes)" << std::endl;
                    parse_packet();
                    rx_state = RxState::IDLE;
                }
                break;

            default:
                rx_state = RxState::IDLE;
        }
    }

    // Generate GMII RX (inject response to DUT)
    bool get_rx_data(uint8_t &rx_dv, uint8_t &rx_er, uint8_t &rxd) {
        static int state = 0;  // 0=idle, 1=preamble, 2=sfd, 3=data
        static int counter = 0;
        static bool start_logged = false;

        rx_er = 0;

        if (!tx_pending) {
            rx_dv = 0;
            rxd = 0;
            state = 0;
            start_logged = false;
            return false;
        }

        // Log when we start sending
        if (state == 0 && !start_logged) {
            std::cout << "[DHCP] Starting TX injection, packet size = " << tx_packet.size() << " bytes" << std::endl;
            start_logged = true;
        }

        switch (state) {
            case 0:  // Start preamble
                state = 1;
                counter = 0;
                // Fall through

            case 1:  // Send preamble (7 bytes of 0x55)
                rx_dv = 1;
                rxd = 0x55;
                if (++counter >= 7) {
                    state = 2;
                }
                break;

            case 2:  // Send SFD (0xD5)
                rx_dv = 1;
                rxd = 0xD5;
                state = 3;
                tx_index = 0;
                std::cout << "[DHCP] TX preamble/SFD complete, starting data" << std::endl;
                break;

            case 3:  // Send packet data
                if (tx_index < tx_packet.size()) {
                    rx_dv = 1;
                    rxd = tx_packet[tx_index];
                    tx_index++;
                } else {
                    // Packet complete
                    rx_dv = 0;
                    rxd = 0;
                    tx_pending = false;
                    state = 0;
                    start_logged = false;
                    std::cout << "[DHCP] TX injection complete" << std::endl;
                }
                break;
        }

        return true;
    }
};

#endif // DHCP_SERVER_H
