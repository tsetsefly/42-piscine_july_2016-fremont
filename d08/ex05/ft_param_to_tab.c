/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:15:09 by dtse              #+#    #+#             */
/*   Updated: 2016/07/23 13:15:10 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strcpy(char *dest, char *src)
{
	int			i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *str)
{
	int				i;
	char			*cpy;

	i = 0;
	while (str[i])
		i++;
	cpy = (char*)malloc(i + 1);
	if (cpy == NULL)
		return (0);
	ft_strcpy(cpy, str);
	return (cpy);
}

int					string_length(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*storage;

	i = 0;
	storage = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		storage[i].size_param = string_length(av[i]);
		storage[i].str = &av[i][0];
		storage[i].copy = ft_strdup(av[i]);
		storage[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	storage[i].str = 0;
	return (storage);
}
