#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

void ft_putnbr(int nb);

int main () {
	int num = 101;

	//printf("%d\n", ft_putnbr(num));
	ft_putnbr(num);
	return (0);
}