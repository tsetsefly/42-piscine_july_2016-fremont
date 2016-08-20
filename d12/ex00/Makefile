# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtse <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/27 13:28:32 by dtse              #+#    #+#              #
#    Updated: 2016/07/27 13:28:34 by dtse             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		ft_display_file

CFLAGS =	-Wall -Werror -Wextra

SRCS =		main.c			\
			print_stuff.c	\
			ft_strcmp.c

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
