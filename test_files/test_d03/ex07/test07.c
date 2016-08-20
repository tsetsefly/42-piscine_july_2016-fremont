#include <stdio.h>
#include <unistd.h>

// int			ft_putchar(char c);

void ft_putchar(char c) {
	write(1, &c, 1);
}

char *ft_strrev(char *str);

int main () {
	char str[] = "asdfghjkl";

	ft_strrev(str);
	printf("%s", str);
	return(0);
}