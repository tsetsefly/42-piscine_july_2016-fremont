/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 17:52:41 by dtse              #+#    #+#             */
/*   Updated: 2016/07/21 17:52:42 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tu(void)
{
	int i;

	ft_putchar('T');
	ft_putchar('u');
	ft_putchar(' ');
	i = 0;
	while (i < 2)
	{
		ft_putchar('t');
		ft_putchar('u');
		ft_putchar(' ');
		i++;
	}
}

void	ft_generic(void)
{
	ft_print_tu();
	ft_putchar('t');
	ft_putchar('u');
	ft_putchar(' ');
	ft_putchar(';');
	ft_putchar(' ');
	ft_print_tu();
	ft_putchar('t');
	ft_putchar('u');
	ft_putchar('\n');
}
