#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
char	**ft_split_whitespaces(char *str);

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

int main (int argc, char **argv)
{
	char **array;
	int (*f)(char*, char*);

	f = &ft_strcmp;
	argc = 0;
	array = ft_split_whitespaces(argv[1]);
	ft_advanced_sort_wordtab(array, &ft_strcmp);
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", array[i]);
	}
	return (0);
}