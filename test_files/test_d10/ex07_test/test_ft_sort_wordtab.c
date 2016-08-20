#include <stdio.h>

void ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);

int main (int argc, char **argv)
{
	char **array;

	argc = 0;
	array = ft_split_whitespaces(argv[1]);
	ft_sort_wordtab(array);
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", array[i]);
	}
	return (0);
}