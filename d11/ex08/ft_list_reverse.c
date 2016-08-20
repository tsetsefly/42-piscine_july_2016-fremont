/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 19:43:59 by dtse              #+#    #+#             */
/*   Updated: 2016/07/27 19:44:00 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = (*begin_list)->next;
	(*begin_list)->next = NULL;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		tmp1->next = *begin_list;
		*begin_list = tmp1;
		tmp1 = tmp2;
	}
}
