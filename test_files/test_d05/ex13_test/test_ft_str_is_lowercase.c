#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

int ft_str_is_lowercase(char *str);

int main ()
{
	char s1[] = "qweRtyu";
	// char s2[] = "wood\0\0\0asdf";

	printf("%s\n", s1);
	// printf("%s\n", s2);
	printf("%d\n", ft_str_is_lowercase(s1));
	return(0);
}
