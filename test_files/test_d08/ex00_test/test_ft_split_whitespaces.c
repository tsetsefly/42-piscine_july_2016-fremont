#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int main()
{
	int k;
	int j;
	char *str;
	char **array;

	str = "    \n\n\n\n\n\t\t\t\t the quick	brown fox 	jumps	\n\n\n\n\n\n\n\n\n\n\n\n\n\n over the lazy dog  \n\n\n\n\n\n\t\t\t ";
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
	printf("%s", str);
}