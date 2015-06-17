/*
 * Shared fuffer header file
 */
#ifndef __SHAREDBUF_H__
#define __SHAREDBUF_H__

#define SHAREDBUF_SIZE  600

#define SHAREDBUF_DHCP_OFFSET           0
#define SHAREDBUF_DHCP_SIZE             SHAREDBUF_SIZE

#define SHAREDBUF_NETHANDLER_OFFSET     0
#define SHAREDBUF_NETHANDLER_SIZE       100
#define SHAREDBUF_NODE_UMQTT_RX_OFFSET  (SHAREDBUF_NETHANDLER_OFFSET + SHAREDBUF_NETHANDLER_SIZE)
#define SHAREDBUF_NODE_UMQTT_RX_SIZE    150
#define SHAREDBUF_NODE_UMQTT_TX_OFFSET  (SHAREDBUF_NODE_UMQTT_RX_OFFSET + SHAREDBUF_NODE_UMQTT_RX_SIZE)
#define SHAREDBUF_NODE_UMQTT_TX_SIZE    200

extern uint8_t sharedbuf[SHAREDBUF_SIZE];

#endif