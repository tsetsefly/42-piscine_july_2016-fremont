/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 21:29:19 by dtse              #+#    #+#             */
/*   Updated: 2016/07/18 21:29:23 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int str_counter;
	int to_find_counter;
	int start_location;

	str_counter = 0;
	while (str[str_counter] != '\0')
	{
		to_find_counter = 0;
		if (str[str_counter] == to_find[to_find_counter])
			start_location = str_counter;
		while (str[str_counter] == to_find[to_find_counter])
		{
			str_counter++;
			to_find_counter++;
			if (to_find[to_find_counter] == '\0')
				return (&str[start_location]);
		}
		str_counter++;
	}
	return (0);
}
