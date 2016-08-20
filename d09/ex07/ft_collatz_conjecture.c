/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 12:46:15 by dtse              #+#    #+#             */
/*   Updated: 2016/07/22 12:46:20 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int			i;

	i = 1;

	if (base != 1)
	{
		if (base % 2 == 0)
			i += ft_collatz_conjecture(base / 2);
		else
			i += ft_collatz_conjecture(base * 3 + 1);
	}
	else
		i = 0;
	return (i);
}
