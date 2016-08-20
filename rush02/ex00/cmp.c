/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 10:49:39 by nweizman          #+#    #+#             */
/*   Updated: 2016/07/31 10:49:40 by nweizman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	cmp(t_list *input, t_list *source)
{
	t_list *list_1;
	t_list *list_2;

	list_1 = input;
	list_2 = source;
	while (list_1 != '\0' && list_2 != '\0')
	{
		if (list_1->data != list_2->data)
			return (0);
		list_1 = list_1->next;
		list_2 = list_2->next;
	}
	return (1);
}
