#include <unistd.h>
#include <stdio.h>

// void ft_putchar(char c);
int ft_putchar(char c) {
	write(1, &c, 1);
	return(0);
}

void ft_putnbr(int nb);

int main () {
	ft_putnbr(0);
	return(0);
}