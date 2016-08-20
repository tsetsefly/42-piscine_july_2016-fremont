# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nweizman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 13:11:22 by nweizman          #+#    #+#              #
#    Updated: 2016/07/31 13:11:23 by nweizman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		rush-2

CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.c					\
			cmp.c					\
			ft_create_elem.c		\
			print_stuff.c			\
			rush00.c				\
			rush01.c				\
			rush02.c				\
			rush03.c				\
			rush04.c				\
			ft_list_push_front.c	

OBJS =		$(SRCS:.c=.o)

CC =		gcc

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all