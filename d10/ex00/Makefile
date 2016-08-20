# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtse <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 10:48:35 by dtse              #+#    #+#              #
#    Updated: 2016/07/25 10:48:36 by dtse             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS +=		-Wall -Wextra -Werror

NAME =			libft.a

FILES = 		ft_putchar.c	\
				ft_swap.c		\
				ft_putstr.c		\
				ft_strlen.c		\
				ft_strcmp.c

OBJS =			$(FILES:.c=.o)

SRCS =			$(addprefix srcs/, $(FILES))

HEADER_DIR =	includes

CC =			cc

all:
	@$(CC) -c $(CFLAGS) $(SRCS) -I $(HEADER_DIR)
	@ar rc $(NAME) $(OBJS)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
