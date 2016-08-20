#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

char *ft_strcapitalize(char *str);

int main ()
{
	char s1[] = "sal_ut, 09com{ment t99u vas i ? 42mo\'ts qu[ar/an\"te-deu?x; cinQu;ante+Et+un";
	// char s2[] = "wood\0\0\0asdf";

	printf("%s\n", s1);
	// printf("%s\n", s2);
	printf("%s\n", ft_strcapitalize(s1));
	return(0);
}
