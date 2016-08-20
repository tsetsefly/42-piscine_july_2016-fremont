/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:38:26 by dtse              #+#    #+#             */
/*   Updated: 2016/07/26 13:38:27 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_list_push_front(t_list **begin_list, char *data)
{
	t_list	*tmp;

	tmp = ft_create_elem(data);
	tmp->next = *begin_list;
	*begin_list = tmp;
}
