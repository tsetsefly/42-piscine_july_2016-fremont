/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 18:19:49 by dtse              #+#    #+#             */
/*   Updated: 2016/07/27 18:19:51 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h> // <-- CHEATING, APPARENTLY...

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;

	i = 0;
	while (begin_list)
	{
		if (i == nbr - 1)
		{
			printf("%s\n", (char*)begin_list->data);
			return (begin_list->data);
		}
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}
