/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 13:53:13 by dtse              #+#    #+#             */
/*   Updated: 2016/07/27 13:53:15 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

void		print_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putchar(list->data);
		list = list->next;
	}
}

void		print_array(int *row, int *col, int **array)
{
	int		i;
	int		j;

	i = 0;
	while (i < *row)
	{
		j = 0;
		while (j < *col)
		{
			ft_putnbr(array[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
