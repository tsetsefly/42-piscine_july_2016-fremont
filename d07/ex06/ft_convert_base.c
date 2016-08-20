/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 13:09:36 by dtse              #+#    #+#             */
/*   Updated: 2016/07/21 13:09:38 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_atoi(char *str)
{
	int		i;
	long	result;
	int		neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * neg);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	while(base[i])
		i++;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= i)
	{
		ft_putnbr_base(nbr / i, base);
		ft_putnbr_base(nbr % i, base);
	}
	else
		ft_putchar(base[nbr]);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *base_f;
	char *base_t;
	int num;
	// int num_10;

	//dummy variables
	base_f = base_from;
	base_t = base_to;
	
	num = ft_atoi(nbr);
	printf("num = %d\n", num);
	ft_putnbr_base(num, "0123456789");
	// printf("num_10 = %d\n", num_10);
	return (0);
}
