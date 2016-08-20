#include <stdio.h>

char *ft_rot42(char *str);

int main ()
{
	char str[] = "abc&^###^&*de";

	printf("%s\n", ft_rot42(str));
	return (0);
}