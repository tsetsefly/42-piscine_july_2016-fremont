#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int main()
{
	int i;
	int min;
	int max;
	int result;
	int *range;

	i = 0;
	min = 1;
	max = 100;
	result = ft_ultimate_range(&range, min, max);
	printf("%s", "min = ");
	printf("%d\n", min);
	printf("%s", "max = ");
	printf("%d\n", max);
	printf("%s", "result = ");
	printf("%d\n", result);
	while (range[i])
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
