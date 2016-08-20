
#include <stdlib.h>
#include <stdio.h>

int ft_any(char **tab, int(*f)(char*));

int string_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main ()
{
	int i;
	int result;
	char **tab;
	int (*f)(char*);

	tab = (char**)malloc(sizeof(char*) * 3);
	i = -1;
	while (++i < 3)
	{
		tab[i] = (char*)malloc(sizeof(char) * 4);
	}
	tab[0] = "qwer";
	tab[1] = "asdf";
	tab[2] = "zxcv";

	f = &string_length;
	result = ft_any(tab, &string_length);

	printf("result = %d\n", result);

	return (0);
}
