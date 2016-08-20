#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

char *ft_strlowcase(char *str);

int main ()
{
	char s1[] = "asdfghjkldAipdPNkd; 0w9efj912DTT";
	// char s2[] = "wood\0\0\0asdf";

	printf("%s\n", s1);
	// printf("%s\n", s2);
	printf("%s\n", ft_strlowcase(s1));
	return(0);
}