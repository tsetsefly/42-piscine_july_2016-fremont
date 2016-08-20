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

#include <stdio.h>
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
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		words++;
		while (str[i] > ' ' && str[i] != '\0')
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
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			j = 0;
			i++;
		}
		while (str[i] > ' ' && str[i] != '\0')
		{
			j++;
			i++;
		}
		array[k] = (char *)malloc(sizeof(char) * (j + 1));
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
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			j = 0;
			i++;
		}
		while (str[i] > ' ' && str[i] != '\0')
		{
			array[k][j] = str[i];
			j++;
			i++;
		}
		array[k][j + 1] = '\0';
		k++;
	}
	return (array);
}

char	**ft_split_whitespaces(char *str)
{
	char **array;

	array = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
	array = create_matrix(array, str);
	array = fill_matrix(array, str);
	return (array);
}
