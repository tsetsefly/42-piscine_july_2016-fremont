/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 16:05:46 by dtse              #+#    #+#             */
/*   Updated: 2016/07/19 16:05:47 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_upper_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(check_upper_case(str[i])))
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
