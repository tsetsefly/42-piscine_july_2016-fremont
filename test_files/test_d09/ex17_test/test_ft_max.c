#include <stdio.h>

int ft_max(int *tab, int length);

int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	printf("%d\n", ft_max(tab, 5));
	return (0);
}