/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 21:54:47 by dtse              #+#    #+#             */
/*   Updated: 2016/07/25 21:54:49 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int				ft_atoi(char *str);
int				ft_strcmp(char *s1, char *s2);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *str);

int				ft_add(int num1, int num2);
int				ft_sub(int num1, int num2);
int				ft_mul(int num1, int num2);
int				ft_div(int num1, int num2);
int				ft_mod(int num1, int num2);
int				ft_usage(int num1, int num2);

typedef	struct	s_opp
{
	char		*op;
	int			(*p)(int, int);
}				t_opp;

#endif
