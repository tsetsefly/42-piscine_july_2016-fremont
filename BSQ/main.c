/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 11:45:17 by dtse              #+#    #+#             */
/*   Updated: 2016/08/01 11:45:20 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			g_size;
int			g_row;
int			g_col;
char		g_empty;
char		g_obstacle;
char		g_full;
int			g_given_row;
int			g_error;

void		max_size(int p_num, int row, int col)
{
	if (p_num > g_size)
	{
		g_size = p_num;
		g_row = row;
		g_col = col;
	}
}

void		print_solution(int *row, int *col, int **array)
{
	int		i;
	int		j;

	i = 0;
	while (i < *row)
	{
		j = 0;
		while (j < *col)
		{
			if (i > (g_row - g_size) && i <= (g_row) && j > (g_col - g_size)
				&& j <= (g_col))
				ft_putchar(g_full);
			else if (array[i][j] == 1)
				ft_putchar(g_empty);
			else if (array[i][j] == 0)
				ft_putchar(g_obstacle);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void		parse_map_chars(t_list *list, int length)
{
	int		i;

	i = 0;
	g_given_row = 0;
	g_error = 0;
	g_error = ft_check_first_row(list, length);
	while (i < (length) - 3)
	{
		if (list->data >= '0' && list->data <= '9')
			g_given_row = g_given_row * 10 + list->data - '0';
		if (i != length - 3)
			list = list->next;
		i++;
	}
	g_empty = list->data;
	list = list->next;
	g_obstacle = list->data;
	list = list->next;
	g_full = list->data;
	list = list->next;
}

int			temp(int file_desc)
{
	int		row;
	int		col;
	t_list	*list;
	int		**m_array;

	row = 0;
	col = 0;
	g_size = 0;
	if (!(read_stdin_instr(file_desc)))
	{
		ft_putstr("map error\n");
		return (0);
	}
	list = read_stdin_array(&row, &col, file_desc);
	if (row != g_given_row || ft_check_rows(list, g_error) || ft_check_chars(
		list, g_obstacle, g_empty, g_full) || num_of_points(list, row * col))
	{
		ft_putstr("map error\n");
		return (0);
	}
	m_array = map_array(&row, &col, list, g_empty);
	process_solution(&row, &col, &m_array);
	return (0);
}

int			main(int argc, char **argv)
{
	int		i;
	int		file_desc;
	int		tmp;

	i = 1;
	file_desc = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			file_desc = open(argv[i], O_RDONLY);
			if (file_desc == -1)
				ft_putstr("map error\n");
			else
				tmp = temp(file_desc);
			close(file_desc);
			i++;
		}
	}
	else
		temp(file_desc);
	return (0);
}
