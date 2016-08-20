/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 23:46:32 by dtse              #+#    #+#             */
/*   Updated: 2016/07/21 23:46:33 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (factory[i])
	{
		while (factory[i][j])
		{
			while (factory[i][j][k])
			{
				free(factory[i][j][k]);
				k++;
			}
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
}
