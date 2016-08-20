/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 16:18:08 by dtse              #+#    #+#             */
/*   Updated: 2016/07/19 16:18:09 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_printable(char c)
{
	if (c > 31)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(check_printable(str[i])))
		{
			result = 0;
			break ;
		}
		i++;
	}
	if (str[0] == '\0')
		result = 1;
	return (result);
}
