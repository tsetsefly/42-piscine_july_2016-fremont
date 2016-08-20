#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int i;
	int min;
	int max;
	int *range;

	i = 0;
	min = 1;
	max = 100;
	range = ft_range(min, max);
	printf("%s", "min = ");
	printf("%d\n", min);
	printf("%s", "max = ");
	printf("%d\n", max);
	while (range[i])
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
