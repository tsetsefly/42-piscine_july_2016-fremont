#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

 char *ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char src[] = "woohoo";
	char dest[] = "w00t";

	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strncpy(dest, src, 7);
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}
