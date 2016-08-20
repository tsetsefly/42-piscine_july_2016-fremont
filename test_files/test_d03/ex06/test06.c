#include <stdio.h>
#include <unistd.h>

// int		ft_putchar(char c);

void ft_putchar(char c) {
	write(1, &c, 1);
}

int ft_strlen(char *str);

int main () {
	char *str;

	str = "1234567890";
	
	printf("%d", ft_strlen(str));

	return(0);
}