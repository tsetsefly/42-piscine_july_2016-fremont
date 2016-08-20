/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 17:10:28 by dtse              #+#    #+#             */
/*   Updated: 2016/07/26 17:10:34 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*tmp_list;

	while (*begin_list)
	{
		tmp_list = *begin_list;
		free(tmp_list);
		*begin_list = tmp->next;
	}
}
