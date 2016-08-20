#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int ft_atoi(char *str);

int main () {
	char *str;
	int result;

	str = "456789";
	result = ft_atoi(str);
	printf("%d", result);
	return(0);
}