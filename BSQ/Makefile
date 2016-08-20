# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtse <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/03 14:15:06 by dtse              #+#    #+#              #
#    Updated: 2016/08/03 14:15:10 by dtse             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		bsq

CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.c					\
			error.c					\
			ft_create_elem.c		\
			print_stuff.c			\
			ft_list_push_back.c		\
			ft_list_push_front.c	\
			support.c				\
			more_support.c

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
