/*
** EPITECH PROJECT, 2019
** libnet
** File description:
** Makes the socket listen.
*/

#include "net/types.h"

int net_listen(socket_t *socket, int backlog)
{
    if (0 != listen(socket->fd, backlog)) {
        return -1;
    }

    return 0;
}
