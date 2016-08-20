/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 09:14:50 by dtse              #+#    #+#             */
/*   Updated: 2016/07/22 09:15:07 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			check_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (result);
}

char		*word_convert(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = str;
	while (str[i])
	{
		if (check_alphanum(str[i]))
		{
			s[j] = str[i];
			if (s[j] >= 'A' && s[j] <= 'Z' && (s[i] != 'P' || s[i + 1] != 'o'))
			{
				s[j] += 32;
			}
			j++;
		}
		i++;
	}
	s[j] = '\0';
	return (s);
}

int			main(int argc, char **argv)
{
	int		i;
	int		flag;
	int		flag2;
	int		flag3;
	char	*trigger;

	i = 1;
	argc = 0;
	while (argv[i])
	{
		trigger = word_convert(argv[i]);
		flag = ft_strcmp(trigger, "president");
		flag2 = ft_strcmp(trigger, "attack");
		flag3 = ft_strcmp(trigger, "Powers");
		if (flag == 0 || flag2 == 0 || flag3 == 0)
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		i++;
	}
	return (0);
}
