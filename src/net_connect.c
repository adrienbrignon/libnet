/*
** EPITECH PROJECT, 2019
** libnet
** File description:
** Connects to the given host and port.
*/

#include "net.h"

int net_connect(socket_t *socket, const char *address, port_t port)
{
    if (0 == inet_aton(address, &socket->addr.sin_addr)) {
        return -1;
    }

    socket->addr.sin_family = AF_INET;
    socket->addr.sin_port = htons(port);

    if (0 > connect(socket->fd, &socket->rawaddr, sizeof socket->rawaddr)) {
        return -1;
    }

    return 0;
}
