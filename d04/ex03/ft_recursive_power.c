/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 11:56:13 by dtse              #+#    #+#             */
/*   Updated: 2016/07/15 11:56:14 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (nb == 0 && power != 0)
	{
		return (0);
	}
	else
	{
		if (power != 1)
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
	}
	return (nb);
}
