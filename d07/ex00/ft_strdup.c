/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:56:18 by dtse              #+#    #+#             */
/*   Updated: 2016/07/20 12:56:20 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_strdup(char *str)
{
	int		i;
	char	*cpy;

	i = 0;
	while (str[i])
		i++;
	cpy = (char*)malloc(i + 1);
	if (cpy == NULL)
		return (0);
	ft_strcpy(cpy, str);
	cpy[i] = '\0';
	return (cpy);
}
