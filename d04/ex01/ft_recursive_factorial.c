/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 11:06:04 by dtse              #+#    #+#             */
/*   Updated: 2016/07/15 11:06:38 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0 && nb <= 12)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	else
	{
		return (0);
	}
	return (nb);
}
