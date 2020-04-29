/*
** EPITECH PROJECT, 2019
** libnet
** File description:
** Binds the socket to the given address and port.
*/

#include <stdio.h>

#include "net/types.h"

int net_bind(socket_t *socket, const char *address, port_t port)
{
    if (0 == inet_aton(address, &socket->addr.sin_addr)) {
        return -1;
    }

    socket->addr.sin_family = AF_INET;
    socket->addr.sin_port = htons(port);

    if (0 > bind(socket->fd, &socket->rawaddr, sizeof socket->rawaddr))
        return -1;
    if (0 == port) {
        socklen_t len = sizeof socket->rawaddr;

        getsockname(socket->fd, &socket->rawaddr, &len);
    }

    return 0;
}
