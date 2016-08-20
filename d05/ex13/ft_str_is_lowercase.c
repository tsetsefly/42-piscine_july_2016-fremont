/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:59:32 by dtse              #+#    #+#             */
/*   Updated: 2016/07/19 15:59:40 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_lower_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(check_lower_case(str[i])))
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
