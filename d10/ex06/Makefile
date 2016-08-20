# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtse <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/26 21:01:58 by dtse              #+#    #+#              #
#    Updated: 2016/07/26 21:01:58 by dtse             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CFLAGS = -Wall -Wextra -Werror

SRCS =	operators.c \
		main.c \
		ft_atoi.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strcmp.c

CC = gcc

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	@/bin/rm -f $(NAME)

re:
	@clean all
