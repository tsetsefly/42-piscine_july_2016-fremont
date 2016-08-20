#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int ft_atoi(char *str);

int main () {
	char *str;
//	int result;

	str = "\\02";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return(0);
}