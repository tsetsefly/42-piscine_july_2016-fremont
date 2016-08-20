#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

t_list		*ft_list_push_params(int ac, char **av);

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

int main(int argc, char **argv)
{
	t_list *list;

	// list = ft_create_elem("toto\n");
	// ft_list_push_back(&list, "tata\n");
	// ft_list_push_back(&list, "tutu\n");
	// tmp = ft_list_last(list);
	// printf("tmp = %s\n", tmp->data);

	list = ft_list_push_params(argc, argv);
	print_list(list);
	return (0);
}