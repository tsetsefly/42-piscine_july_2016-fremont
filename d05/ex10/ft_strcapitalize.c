/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 13:59:55 by dtse              #+#    #+#             */
/*   Updated: 2016/07/19 13:59:57 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_alphanum(char c)
{
	// if (c >= '0' && c <= '9')
	// 	return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (check_alphanum(str[0]))
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (!(check_alphanum(str[i])))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (check_alphanum(str[i - 1]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
