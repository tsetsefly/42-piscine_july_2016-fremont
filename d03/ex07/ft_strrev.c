/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 17:41:19 by dtse              #+#    #+#             */
/*   Updated: 2016/07/14 17:41:20 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			string_length(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	length -= 1;
	return (length);
}

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		len;
	char	*tmpstr;
	char	tmpchar1;

	j = 0;
	tmpstr = str;
	i = string_length(str);
	len = (i / 2) + 1;
	while (len > 0)
	{
		tmpchar1 = str[i];
		str[i] = str[j];
		str[j] = tmpchar1;
		i--;
		j++;
		len--;
	}
	str = tmpstr;
	return (str);
}
