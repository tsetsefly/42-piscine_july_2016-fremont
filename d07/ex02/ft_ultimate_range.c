/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 16:37:28 by dtse              #+#    #+#             */
/*   Updated: 2016/07/20 16:37:30 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *new_range;

	new_range = *range;
	if (min >= max)
		return (0);
	i = 0;
	new_range = (int*)malloc((max - min) * 4);
	if (new_range == NULL)
		return (0);
	while (i < max - min)
	{
		new_range[i] = min + i;
		i++;
	}
	new_range[i] = '\0';
	*range = new_range;
	return (max - min);
}
