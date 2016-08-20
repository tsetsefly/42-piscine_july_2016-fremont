#include <unistd.h>
#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int));

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	long num;

	num = nbr;
	if (num < 0)
	{	
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

int times_ten(int num)
{
	int i;
	int result;

	i = 0;
	i = -1;
	result = num * 10;
	return (result);
}

int main ()
{
	int i;
	int *tab;
	int array[5] = {0, 1, 2, 3, 4};
	int (*f)(int);

	f = &times_ten;
	tab = ft_map(array, 5, &times_ten);
	i = -1;
	while (++i < 5)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
	}
	return (0);
}
