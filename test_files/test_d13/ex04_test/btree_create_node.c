/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 13:33:59 by dtse              #+#    #+#             */
/*   Updated: 2016/07/28 13:34:09 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree*)malloc(sizeof(t_btree));
	tmp->item = item;
	tmp->right = 0;
	tmp->left = 0;
	return (tmp);
}
