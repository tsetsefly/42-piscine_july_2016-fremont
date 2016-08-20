/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:46:00 by dtse              #+#    #+#             */
/*   Updated: 2016/07/26 13:46:02 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	counter;

	counter = 0;
	while (begin_list)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}
