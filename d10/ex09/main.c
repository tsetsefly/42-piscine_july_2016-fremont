/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 21:08:57 by dtse              #+#    #+#             */
/*   Updated: 2016/07/25 21:08:59 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int			stop_check(int num2, char *operator)
{
	if (num2 == 0 && ft_strcmp(operator, "/") == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (num2 == 0 && ft_strcmp(operator, "%") == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int			argument_check(int ac)
{
	if (ac != 4)
		return (0);
	return (1);
}

char		*operator_check(char *operator, char **av)
{
	if (ft_strcmp(av[2], "+") != 0 && ft_strcmp(av[2], "-") != 0 &&
		ft_strcmp(av[2], "*") != 0 && ft_strcmp(av[2], "/") != 0 &&
		ft_strcmp(av[2], "%") != 0)
		return ("");
	else
		return (operator);
}

void		print_result(int result)
{
	ft_putnbr(result);
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	int		num1;
	int		num2;
	char	*operator;
	int		result;
	int		i;

	if (!(argument_check(argc)))
		return (0);
	num1 = ft_atoi(argv[1]);
	operator = argv[2];
	num2 = ft_atoi(argv[3]);
	operator = operator_check(operator, argv);
	if (!(stop_check(num2, operator)))
		return (0);
	i = -1;
	while (++i < 6)
	{
		if (ft_strcmp(operator, g_opptab[i].op) == 0)
		{
			result = g_opptab[i].p(num1, num2);
		}
	}
	if (ft_strcmp(operator, "") != 0)
		print_result(result);
	return (0);
}
