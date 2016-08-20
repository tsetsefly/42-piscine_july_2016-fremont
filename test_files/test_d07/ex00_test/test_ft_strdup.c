#include <stdio.h>
#include <string.h>
#include <malloc/malloc.h>

char *ft_strdup(char *str);

int		main()
{
	char str[] = "the";
	char *str2;
	char *str3;
	int i, x;

	str2 = ft_strdup(str);
	str3 = strdup(str);
	i = malloc_size(str2);
	x = malloc_size(str3);
	printf("%s\n", str);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%d\n", i);
	printf("%d\n", x);
	return (0);
}