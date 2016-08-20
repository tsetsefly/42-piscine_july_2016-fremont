/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:15:05 by dtse              #+#    #+#             */
/*   Updated: 2016/07/16 09:15:14 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_prime(int num, int factor)
{
	if (factor == 1)
	{
		return (1);
	}
	else if (num % factor == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(num, factor - 1));
	}
}

int		ft_find_next_prime(int nb)
{
	int next;

	next = nb;
	if (nb < 3)
	{
		return (2);
	}
	else
	{
		while (!(check_prime(next, next / 2)))
		{
			next++;
		}
		return (next);
	}
}
