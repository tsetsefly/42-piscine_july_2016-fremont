/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:06:52 by dtse              #+#    #+#             */
/*   Updated: 2016/07/24 11:07:04 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);

typedef	struct		s_cell
{
	int	num;
	int other_row1;
	int other_row2;
	int other_col1;
	int other_col2;
	int zone_row;
	int zone_col;
}					t_cell;

#endif
