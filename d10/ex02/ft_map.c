/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 13:47:54 by dtse              #+#    #+#             */
/*   Updated: 2016/07/25 13:47:55 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	if (!(array = (int*)malloc(sizeof(int) * length)))
		return (0);
	i = -1;
	while (++i < length)
		array[i] = f(tab[i]);
	return (array);
}
