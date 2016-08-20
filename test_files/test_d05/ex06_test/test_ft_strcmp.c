#include <stdio.h>
#include <unistd.h>
#include <string.h>

// int ft_putchar(char c) {
// 	write(1, &c, 1);
// 	return (0);
// }

int ft_strcmp(char *s1, char *s2);

int main ()
{
	char s1[] = "d&&**(";
	char s2[] = "d&&**)";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return(0);
}
