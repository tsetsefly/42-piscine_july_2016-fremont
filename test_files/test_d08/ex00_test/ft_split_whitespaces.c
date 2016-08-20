/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:19:48 by dtse              #+#    #+#             */
/*   Updated: 2016/07/20 21:19:51 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str)
{
	int i;
	int str_length;
	int words;

	i = 0;
	while (str[i] != '\0')
		i++;
	str_length = i;
	i = 0;
	words = 0;
	while (i < str_length)
	{
		while (str[i] > ' ' && str[i] != '\0')
		{
			i++;
		}
		words++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
	}
	return (words);
}

char	**create_matrix(char **array, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (k < word_count(str))
	{
		while (str[i] > ' ' && str[i] != '\0')
		{
			j++;
			i++;
		}
		if (!(array[k] = (char *)malloc(sizeof(char) * (j + 1))))
			return (0);
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			j = 0;
			i++;
		}
		k++;
	}
	array[k] = 0;
	return (array);
}

char	**fill_matrix(char **array, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (k < word_count(str))
	{
		while (str[i] > ' ' && str[i] != '\0')
		{
			array[k][j] = str[i];
			j++;
			i++;
		}
		array[k][j] = '\0';
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			j = 0;
			i++;
		}
		k++;
	}
	return (array);
}

char	*leading_spaces(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		str++;
	return (str);
}

char	**ft_split_whitespaces(char *str)
{
	char **array;
	char *str2;

	str2 = leading_spaces(str);
	if (!(array = (char **)malloc(sizeof(char *) * (word_count(str2) + 1))))
		return (0);
	array = create_matrix(array, str2);
	array = fill_matrix(array, str2);
	return (array);
}
