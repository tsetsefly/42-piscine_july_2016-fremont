#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int main()
{
	int k;
	int j;
	char *str;
	char **array;

	str = "the quick 	brown fox 	jumps	 over the lazy dog";
	array = ft_split_whitespaces(str);
	k = 0;
	while (array[k])
	{
		j = 0;
		while (array[k][j])
		{
			printf("%c", array[k][j]);
			j++;
		}
		printf("\n");
		k++;
	}
}