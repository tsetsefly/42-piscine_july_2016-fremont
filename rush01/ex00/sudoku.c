/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:50:43 by dtse              #+#    #+#             */
/*   Updated: 2016/07/24 10:50:47 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

t_cell	g_s[9][9];

int		check_number(int num_try, int row, int col)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (g_s[i][col].num == num_try)
			return (0);
		if (g_s[row][i].num == num_try)
			return (0);
		i++;
	}
	if (g_s[g_s[row][col].other_row1 + g_s[row][col].zone_row][g_s
		[row][col].other_col1 + g_s[row][col].zone_col].num == num_try)
		return (0);
	if (g_s[g_s[row][col].other_row2 + g_s[row][col].zone_row][g_s
		[row][col].other_col1 + g_s[row][col].zone_col].num == num_try)
		return (0);
	if (g_s[g_s[row][col].other_row1 + g_s[row][col].zone_row][g_s
		[row][col].other_col2 + g_s[row][col].zone_col].num == num_try)
		return (0);
	if (g_s[g_s[row][col].other_row2 + g_s[row][col].zone_row][g_s
		[row][col].other_col2 + g_s[row][col].zone_col].num == num_try)
		return (0);
	return (1);
}

int		check_puzzle(int row, int col)
{
	int num_try;

	if (row == 9)
		return (1);
	if (g_s[row][col].num)
	{
		if (col == 8)
			return (check_puzzle(row + 1, 0)) ? 1 : 0;
		else
			return (check_puzzle(row, col + 1)) ? 1 : 0;
	}
	num_try = 1;
	while (++num_try < 10)
	{
		g_s[row][col].num = num_try;
		if (check_number(num_try, row, col))
		{
			if (col == 8)
				return (check_puzzle(row + 1, 0)) ? 1 : 0;
			else
				return (check_puzzle(row, col + 1)) ? 1 : 0;
		}
		g_s[row][col].num = 0;
	}
	return (0);
}

void	print_table(void)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(g_s[i][j].num);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	fill_structure_num(char **av)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (av[i][j] == '.')
				g_s[i - 1][j].num = 0;
			else
				g_s[i - 1][j].num = (av[i][j] - '0');
			j++;
		}
		i++;
	}
}

int		string_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_arguments(int ac, char **av)
{
	int i;

	if (ac != 10)
		return (0);
	i = 1;
	while (++i < ac)
	{
		if (string_length(av[i]) != 9)
			return (0);
	}
	return (1);
}

void	fill_structure_meta(void)
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			g_s[row][col].other_row1 = (row + 2) % 3;
			g_s[row][col].other_row2 = (row + 4) % 3;
			g_s[row][col].other_col1 = (col + 2) % 3;
			g_s[row][col].other_col2 = (col + 2) % 3;
			g_s[row][col].zone_row = (row / 3) * 3;
			g_s[row][col].zone_col = (col / 3) * 3;
			col++;
		}
		row++;
	}
}

int		main(int argc, char **argv)
{
	int result;

	if (!(check_arguments(argc, argv)))
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	fill_structure_num(argv);
	fill_structure_meta();
	result = check_puzzle(0, 0);
	print_table();
	return (0);
}
