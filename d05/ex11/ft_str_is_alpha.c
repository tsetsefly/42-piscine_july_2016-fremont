/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:33:41 by dtse              #+#    #+#             */
/*   Updated: 2016/07/19 15:33:42 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(check_alpha(str[i])))
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
