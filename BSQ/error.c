/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 21:04:15 by dtse              #+#    #+#             */
/*   Updated: 2016/08/03 21:04:16 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			ft_check_rows(t_list *list, int error)
{
	int		col_check;
	int		prev_col;

	list = (list->next) ? (list->next) : (list);
	prev_col = 0;
	col_check = 0;
	while (list->data != '\n' && list->next)
	{
		prev_col++;
		list = list->next;
	}
	list = (list->next) ? (list->next) : (list);
	while (list)
	{
		if (list->data == '\n')
		{
			if (prev_col != col_check)
				return (error = 1);
			col_check = 0;
		}
		else
			col_check++;
		list = list->next;
	}
	return (error);
}

int			num_of_points(t_list *list, int total)
{
	int		i;

	i = 0;
	while (list)
	{
		if (list->data != '\n')
			i++;
		list = list->next;
	}
	if (i != total)
		return (1);
	else
		return (0);
}

int			ft_check_chars(t_list *list, char obstacle, char empty, char full)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = list;
	if (obstacle == empty || obstacle == full || empty == full)
		return (1);
	while (list->data == '\n')
	{
		i++;
		list = (list->next) ? (list->next) : (list);
		if (i > 1)
			return (1);
	}
	while (tmp)
	{
		if (tmp->data != obstacle && tmp->data != empty && tmp->data != '\n')
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int			ft_check_first_row(t_list *list, int length)
{
	int		error;
	int		i;

	i = 0;
	error = 0;
	if (length < 4)
		return (error = 1);
	while (i < (length - 3))
	{
		if (list->data < '0' || list->data > '9')
		{
			return (error = 1);
		}
		i++;
		list = list->next;
	}
	return (error);
}
