/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 11:33:37 by dtse              #+#    #+#             */
/*   Updated: 2016/07/26 11:33:38 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_list_push_back(t_list **begin_list, char *data)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (!tmp)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
}
