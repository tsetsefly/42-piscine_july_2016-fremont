/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:48:19 by dtse              #+#    #+#             */
/*   Updated: 2016/07/19 15:48:21 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(check_num(str[i])))
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
