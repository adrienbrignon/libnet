##
## EPITECH PROJECT, 2019
## myftp
## File description:
## The project build instructions.
##

ifeq ($(origin .RECIPEPREFIX), undefined)
	$(error Please use GNU Make 4.0 or later.)
endif

.RECIPEPREFIX = >

CC = gcc
CFLAGS = -Wall -Wextra -Wundef -Wshadow -O2 -pipe -Iinclude
LDFLAGS = -Llib/libnet
LDLIBS = -lnet

NAME = libnet.a

SRCS = $(wildcard src/*.c) \
       $(wildcard src/**/*.c) \
       $(wildcard src/**/**/*.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
> $(AR) rcs $@ $^

clean:
> $(RM) src/*.o src/**/*.o src/**/**/*.o
> $(RM) src/*.gc* src/**/*.gc* src/**/**/*.gc*

fclean: clean
> $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
