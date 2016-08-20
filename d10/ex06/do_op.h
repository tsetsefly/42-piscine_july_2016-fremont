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

int				addition(int num1, int num2);
int				subtraction(int num1, int num2);
int				multiplication(int num1, int num2);
int				division(int num1, int num2);
int				modulus(int num1, int num2);

typedef	struct	s_opp
{
	char		*op;
	int			(*p)(int, int);
}				t_opp;

t_opp	g_opptab[] =
{
	{"+", &addition},
	{"-", &subtraction},
	{"*", &multiplication},
	{"/", &division},
	{"%", &modulus}
};

#endif
