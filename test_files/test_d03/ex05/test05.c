#include <stdio.h>
#include <unistd.h>

// int	ft_putchar(char c);

int ft_putchar(char c) {
	write(1, &c, 1);
	return(0);
}

void ft_putstr(char *str);

int main () {
	char *str;

	str = "asdfghjkl";
	
	ft_putstr(str);
	
	return(0);
}