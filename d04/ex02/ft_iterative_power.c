/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 11:38:35 by dtse              #+#    #+#             */
/*   Updated: 2016/07/15 11:38:39 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (power == 0)
	{
		return (1);
	}
	else if ((nb == 0 && power != 0) || power < 0)
	{
		return (0);
	}
	else if (power > 0)
	{
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
	else
		return (0);
}
