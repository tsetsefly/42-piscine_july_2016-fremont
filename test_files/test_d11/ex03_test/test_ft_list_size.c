#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void print_list(t_list *list)
{
	while(list != NULL)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int main()
{
	int result;
	t_list *list;

	list = ft_create_elem("toto\n");

	//ft_list_size
	result = ft_list_size(list);
	print_list(list);
	printf("result = %d\n", result);

	return (0);
}