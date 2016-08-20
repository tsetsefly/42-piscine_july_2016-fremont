#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return(0);
}

void ft_print_alphabet();

int	main() {
	ft_print_alphabet();
	return(0);
}