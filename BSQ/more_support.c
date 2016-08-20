/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moar_support.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 20:30:59 by dtse              #+#    #+#             */
/*   Updated: 2016/08/03 20:31:01 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			min_three(int num1, int num2, int num3)
{
	if (num1 <= num2 && num1 <= num3)
		return (num1);
	else if (num2 <= num1 && num2 <= num3)
		return (num2);
	else
		return (num3);
}

int			**boundary_solutions(int *row, int *col, int **p_array, int **array)
{
	int		i;

	i = 0;
	while (i < (*col))
	{
		p_array[0][i] = array[0][i];
		i++;
	}
	i = 0;
	while (i < (*row))
	{
		p_array[i][0] = array[i][0];
		i++;
	}
	return (p_array);
}

int			**solution_array(int *row, int *col, int **array, int **p_array)
{
	int		i;
	int		j;

	p_array = boundary_solutions(row, col, p_array, array);
	special_sauce_row(*col, array);
	special_sauce_col(*row, array);
	i = 1;
	while (i < (*row))
	{
		j = 1;
		while (j < (*col))
		{
			if (array[i][j] == 1)
			{
				p_array[i][j] = min_three(p_array[i - 1][j - 1],
					p_array[i - 1][j], p_array[i][j - 1]) + 1;
				max_size(p_array[i][j], i, j);
			}
			else if (array[i][j] == 0)
				p_array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p_array);
}

void		special_sauce_row(int col, int **m_array)
{
	int		i;

	i = 0;
	while (i < col)
	{
		if (m_array[0][i] != 0)
		{
			max_size(1, 0, i);
			break ;
		}
		else
			i++;
	}
}

void		special_sauce_col(int row, int **m_array)
{
	int		i;

	i = 0;
	while (i < row)
	{
		if (m_array[i][0] != 0)
		{
			max_size(1, i, 0);
			break ;
		}
		else
			i++;
	}
}
