/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:48:30 by dtse              #+#    #+#             */
/*   Updated: 2016/07/20 15:48:32 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;
	int total;

	if (min >= max)
		return (0);
	total = max - min;
	i = 0;
	range = (int*)malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (0);
	while (i < total)
	{
		range[i] = min + i;
		i++;
	}
	range[i] = '\0';
	return (range);
}
