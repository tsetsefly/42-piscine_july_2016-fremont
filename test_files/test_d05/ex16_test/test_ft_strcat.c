#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

char *ft_strcat(char *dest, char *src);

int main ()
{
	char s1[] = "qweRtyuf";
	char s2[] = "woodasdf";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat("qweRtyuf\0            ", "woodasdf"));
	return(0);
}
