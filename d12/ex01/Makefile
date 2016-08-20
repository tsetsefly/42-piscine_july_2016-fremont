# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtse <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 19:12:05 by dtse              #+#    #+#              #
#    Updated: 2016/07/28 19:12:10 by dtse             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		ft_cat

CFLAGS +=	-Wall -Wextra -Werror

SRCS =		main.c			\
			ft_strcmp.c		\
			print_stuff.c	\

CC =		gcc

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	@/bin/rm -f $(NAME)

fclean: clean