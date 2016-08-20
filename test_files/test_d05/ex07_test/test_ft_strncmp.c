#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	char s1[] = "woo\0\0\0";
	char s2[] = "woo\0\0\0asdf";

	// char s1[] = "Helloooo";
	// char s2[] = "Hellooo";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s1, s2, 4));
	return(0);
}
