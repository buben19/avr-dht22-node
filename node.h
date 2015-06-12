#ifndef __NODE_H__
#define __NODE_H__

#include "umqtt/umqtt.h"

enum node_system_state {
    NODE_DHCP_QUERYING,
    NODE_DNS_QUERYING,
    NODE_BROKER_DISCONNECTED,
    NODE_BROKER_DISCONNECTED_WAIT,
    NODE_BROKER_CONNECTING,
    NODE_BROKER_CONNECTION_ESTABLISHED
};

extern struct umqtt_connection mqtt;

extern enum node_system_state node_system_state;

void node_init(void);
void node_process(void);
void node_notify_broker_unreachable(void);

#endif
