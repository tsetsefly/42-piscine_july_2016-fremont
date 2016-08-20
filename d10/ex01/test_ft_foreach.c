
#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));

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

typedef void (*funptr)(int);

int main()
{
	funptr f;
	f = &ft_putnbr;

	int tab[1337] = {5};
	
	ft_foreach(tab, 1337, &ft_putnbr);
	return (0);
}