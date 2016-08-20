/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 21:57:57 by dtse              #+#    #+#             */
/*   Updated: 2016/07/21 21:57:58 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rotate(char c)
{
	int i;
	int result;

	i = 0;
	result = c;
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
		return (c);
	while (i < 42)
	{
		result++;
		if (result == 'z' + 1 || result == 'Z' + 1)
			result -= 'z' - 'a' + 1;
		i++;
	}
	return (result);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}
