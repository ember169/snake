# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgervet <42@leogervet.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 20:50:51 by lgervet           #+#    #+#              #
#    Updated: 2025/11/15 10:15:07 by lgervet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= snake
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -g -g3

INC		:= includes
SRCS	:= \
	srcs/main.c \
	srcs/render.c
OBJS	:= $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(INC)/header.h
	$(CC) $(CFLAGS) -I$(INC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
