/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 13:52:55 by dtse              #+#    #+#             */
/*   Updated: 2016/07/30 13:52:57 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_list		*row_col_list(int *row, int *col)
{
	char	buf;
	char	tmp;
	int		last_col;
	int		first;
	t_list	*list;

	list = 0;
	first = 1;
	while (read(0, &buf, 1) != 0)
	{
		tmp = buf;
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

t_list		*create_rushs(int num, int row, int col)
{
	t_list *rush_list;

	rush_list = 0;
	if (num == 0)
		rush00_00(row, col, &rush_list);
	else if (num == 1)
		rush00_01(row, col, &rush_list);
	else if (num == 2)
		rush00_02(row, col, &rush_list);
	else if (num == 3)
		rush00_03(row, col, &rush_list);
	else
		rush00_04(row, col, &rush_list);
	return (rush_list);
}

void		print_result(int rush_number, int row, int col)
{
	ft_putstr("rush-0");
	ft_putchar(rush_number + '0');
	ft_putstr(" [");
	ft_putnbr(col);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(row);
	ft_putchar(']');
}

void		process_stdin(int i)
{
	int		row;
	int		col;
	int		status;
	t_list	*input;

	row = 0;
	col = 0;
	status = 0;
	input = row_col_list(&row, &col);
	while (i <= 4)
	{
		if (cmp(input, create_rushs(i, col, row)) == 1)
		{
			if (status > 0)
				ft_putstr(" || ");
			print_result(i, row, col);
			status++;
		}
		i++;
	}
	if (status == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr("aucune");
		ft_putchar('\n');
		return (0);
	}
	argv[1] = 0;
	process_stdin(0);
	return (0);
}
