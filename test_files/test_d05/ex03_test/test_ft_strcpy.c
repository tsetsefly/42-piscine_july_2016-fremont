#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return (0);
}

char *ft_strcpy(char *dest, char *src);

int main ()
{
	char src[] = "woohoowoohoo!";
	char dest[] = "w00t";

	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}
