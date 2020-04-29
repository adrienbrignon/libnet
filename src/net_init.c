/*
** EPITECH PROJECT, 2019
** libnet
** File description:
** Initializes the given socket.
*/

#include <string.h>
#include <arpa/inet.h>

#include "net/types.h"

int net_init(socket_t *sock)
{
    memset(sock, 0, sizeof *sock);

    if (0 > (sock->fd = socket(AF_INET, SOCK_STREAM, 0))) {
        return -1;
    }

    setsockopt(sock->fd, SOL_SOCKET, SO_REUSEADDR, &(int) {1}, sizeof(int));
    setsockopt(sock->fd, SOL_SOCKET, SO_REUSEPORT, &(int) {1}, sizeof(int));

    return 0;
}
