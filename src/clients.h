#ifndef SRC_CLIENTS_H_
#define SRC_CLIENTS_H_

#include <arpa/inet.h>
#include "rtr/pdu.h"
#include "rtr/db/vrp.h"

struct client {
	int fd;
	sa_family_t family;
	union {
		struct in_addr sin;
		struct in6_addr sin6;
	};
	in_port_t sin_port;
	serial_t serial_number;
};

int clients_db_init(void);

int clients_add(struct rtr_client *);
void clients_update_serial(int, serial_t);
void clients_forget(int);
typedef int (*clients_foreach_cb)(struct client const *, void *);
int clients_foreach(clients_foreach_cb, void *);
serial_t clients_get_min_serial(void);

void clients_db_destroy(void);

#endif /* SRC_CLIENTS_H_ */
