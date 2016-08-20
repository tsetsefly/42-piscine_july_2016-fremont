/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 16:31:19 by dtse              #+#    #+#             */
/*   Updated: 2016/07/26 16:31:20 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp_list;
	t_list	*tmp_term;

	i = 0;
	tmp_list = NULL;
	while (i < ac)
	{
		tmp_term = ft_create_elem(av[i]);
		tmp_term->next = tmp_list;
		tmp_list = tmp_term;
		i++;
	}
	return (tmp_list);
}
