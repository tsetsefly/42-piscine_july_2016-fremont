/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 14:42:07 by nweizman          #+#    #+#             */
/*   Updated: 2016/07/31 14:42:11 by nweizman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush00_01(int x, int y, t_list **list)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i != x && i != 1) && (j != y && j != 1))
				ft_list_push_front(list, ' ');
			else if (j == 1 && i == 1)
				ft_list_push_front(list, '/');
			else if ((i == 1 && j == y) || (i == x && j == 1))
				ft_list_push_front(list, '\\');
			else if (j == y && i == x)
				ft_list_push_front(list, '/');
			else if ((i == 1) || (i == x) || (j == 1) || (j == y))
				ft_list_push_front(list, '*');
			i++;
		}
		ft_list_push_front(list, '\n');
		j++;
	}
}
