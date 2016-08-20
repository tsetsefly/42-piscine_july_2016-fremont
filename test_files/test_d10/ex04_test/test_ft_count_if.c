#include <stdlib.h>
#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*));

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 1; // changed from 0 --> 1 for exercise
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = 0; // changed from normal subtraction method for exercise
			break ;
		}
		i++;
	}
	return (result);
}

int is_qw(char *str)
{
	if (ft_strcmp(str, "qw"))
		return (1);
	else
		return (0);
}

int main ()
{
	int i;
	int result;
	char **tab;
	int (*f)(char*);
	
	tab = (char**)malloc(sizeof(char*) * 6);
	tab[5] = 0;
	
	i = -1;
	while (++i < 5)
	{
		tab[i] = (char*)malloc(sizeof(char) * 2);
	}
	
	tab[0] = "qw";
	tab[1] = "zz";
	tab[2] = "qw";
	tab[3] = "zx";
	tab[4] = "qw";

	f = &is_qw;
	result = ft_count_if(tab, &is_qw);
	
	printf("result = %d\n", result);

	return (0);
}