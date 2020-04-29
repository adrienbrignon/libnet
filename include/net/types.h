/*
** EPITECH PROJECT, 2019
** libnet
** File description:
** The network library types definition.
*/

#pragma once

#include <arpa/inet.h>

typedef unsigned short int port_t;

typedef struct {
    int fd;

    union {
        struct sockaddr rawaddr;
        struct sockaddr_in addr;
    };
} socket_t;
