/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 09:35:45 by dtse              #+#    #+#             */
/*   Updated: 2016/07/15 09:35:47 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = nb;
	result = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0 && nb <= 12)
	{
		while (i > 1)
		{
			result = result * (i - 1);
			i--;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
