/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 14:01:12 by dtse              #+#    #+#             */
/*   Updated: 2016/07/30 14:01:18 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <errno.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				print_list(t_list *list);
t_list				*ft_create_elem(char data);
void				ft_list_push_front(t_list **begin_list, char data);
void				rush00_00(int x, int y, t_list **list);
void				rush00_01(int x, int y, t_list **list);
void				rush00_02(int x, int y, t_list **list);
void				rush00_03(int x, int y, t_list **list);
void				rush00_04(int x, int y, t_list **list);
int					cmp(t_list *input, t_list *surce);

#endif
