#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

void ft_list_clear(t_list **begin_list);

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
		printf("result = %d\n", list->data);
		list = list->next;
	}
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp_list;
	t_list	*tmp_term;
	
	i = 0;
	tmp_list = NULL;
	while (i < ac)
	{
		tmp_term = ft_create_elem(av[i]);
		tmp_term->next = tmp_list;
		tmp_list = tmp_term;
		i++;
	}
	return (tmp_list);
}

int main(int argc, char **argv)
{
	t_list *list;

	// ft_list_clear

	// list = ft_create_elem("toto\n");
	// ft_list_push_back(&list, "tata\n");
	// ft_list_push_back(&list, "tutu\n");
	// tmp = ft_list_last(list);
	// printf("tmp = %s\n", tmp->data);

	list = ft_list_push_params(argc, argv);
	print_list(list);
	ft_list_clear(&list);
	print_list(list);
	return (0);
}