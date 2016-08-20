#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int num_cmp(int num1, int num2)
{
	int result;

	result = num1 - num2;
	return (result);
}

int main ()
{
	// int array[7] = {5, 4, 3, 3, 2, 1, 1};
	int array[7] = {1, 2, 3, 3, 4, 5, 5};
	int result;
	int (*f)(int, int);

	f = &num_cmp;
	result = ft_is_sort(array, 7, &num_cmp);
	printf("result = %d\n", result);
	return (0);
}