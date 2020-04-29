/*
** EPITECH PROJECT, 2019
** libnet
** File description:
** Accepts a new connection.
*/

#include <stdio.h>
#include <stddef.h>

#include "net.h"

int net_accept(socket_t *socket, socket_t *client)
{
    socklen_t len;

    if (NULL == socket || NULL == client || 0 > net_init(client)) {
        return -1;
    }

    len = sizeof client->rawaddr;

    if (0 > (client->fd = accept(socket->fd, &client->rawaddr, &len))) {
        return -1;
    }

    return 0;
}
