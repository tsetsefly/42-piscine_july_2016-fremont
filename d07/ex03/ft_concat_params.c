/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 17:56:49 by dtse              #+#    #+#             */
/*   Updated: 2016/07/20 17:56:50 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*result;

	result = (char*)malloc(1 * sizeof(*result));
	if (result == NULL)
		return (0);
	i = 1;
	while (i < argc)
	{
		result = ft_strcat(result, argv[i]);
		if (i != argc - 1)
			result = ft_strcat(result, "\n");
		i++;
	}
	result = ft_strcat(result, "\0");
	return (result);
}
