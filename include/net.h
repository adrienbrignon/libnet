/*
** EPITECH PROJECT, 2019
** libnet
** File description:
** A network library.
*/

#pragma once

#include "net/types.h"

int net_init(socket_t *socket);
int net_listen(socket_t *socket, int backlog);
int net_accept(socket_t *socket, socket_t *client);
int net_bind(socket_t *socket, const char *address, port_t port);
int net_connect(socket_t *socket, const char *address, port_t port);
