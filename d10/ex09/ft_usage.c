/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 23:08:30 by dtse              #+#    #+#             */
/*   Updated: 2016/07/26 23:08:32 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_putchar(char c);

int		ft_usage(int num1, int num2)
{
	ft_putstr("error : only [ - + * / % ] are accepted.");
	ft_putchar('\n');
	return (0 * num1 * num2);
}
