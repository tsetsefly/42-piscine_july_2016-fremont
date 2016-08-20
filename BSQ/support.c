/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 21:35:50 by dtse              #+#    #+#             */
/*   Updated: 2016/08/01 21:35:51 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			read_stdin_instr(int file_desc)
{
	int		length;
	char	buf;
	char	*tmp;
	t_list	*list;

	list = 0;
	length = 0;
	while (read(file_desc, &buf, 1) != 0)
	{
		tmp = (char*)malloc(sizeof(char));
		*tmp = buf;
		if (buf == '\n')
			break ;
		ft_list_push_back(&list, tmp);
		length++;
	}
	if (length < 4 || list->data == '0')
		return (0);
	parse_map_chars(list, length);
	return (1);
}

t_list		*read_stdin_array(int *row, int *col, int file_desc)
{
	char	buf;
	char	*tmp;
	int		last_col;
	t_list	*list;

	list = 0;
	while (read(file_desc, &buf, 1) != 0)
	{
		tmp = (char*)malloc(sizeof(char));
		*tmp = buf;
		last_col = *col;
		ft_list_push_front(&list, tmp);
		if (buf == '\n')
		{
			*col = 0;
			(*row)++;
		}
		else
			(*col)++;
	}
	*col = last_col;
	return (list);
}

int			**create_array(int *row, int *col)
{
	int		i;
	int		**array;

	array = (int**)malloc(sizeof(int *) * (*row));
	i = 0;
	while (i < (*row + 1))
	{
		array[i] = (int*)malloc(sizeof(int) * (*col));
		i++;
	}
	return (array);
}

int			**map_array(int *row, int *col, t_list *list, char empty)
{
	int		i;
	int		j;
	char	tmp2;
	int		**array;

	array = create_array(row, col);
	i = (*row) - 1;
	while (i > -1)
	{
		list = list->next;
		j = (*col) - 1;
		while (j > -1)
		{
			tmp2 = list->data;
			if (tmp2 == empty)
				array[i][j] = 1;
			else
				array[i][j] = 0;
			list = list->next;
			j--;
		}
		i--;
	}
	return (array);
}

void		process_solution(int *row, int *col, int ***m_array)
{
	int		**p_array;

	p_array = create_array(row, col);
	p_array = solution_array(row, col, *m_array, p_array);
	print_solution(row, col, *m_array);
}
