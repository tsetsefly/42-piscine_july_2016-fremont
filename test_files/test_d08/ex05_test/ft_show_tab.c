/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:56:40 by dtse              #+#    #+#             */
/*   Updated: 2016/07/23 13:56:42 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long num;

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

void	ft_show_tab(t_stock_par *par)
{
	int j;
	int k;

	k = 0;
	while (par[k].str)
	{
		ft_putstr(par[k].str);
		ft_putchar('\n');
		ft_putnbr(par[k].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[k].tab[j])
		{
			ft_putstr(par[k].tab[j]);
			ft_putchar('\n');
			j++;
		}
		k++;
	}
}