#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list);

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

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	tmp = *begin_list;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = ft_create_elem(data);
}

int main()
{
	t_list *list;
	t_list *tmp;

	list = ft_create_elem("toto\n");
	ft_list_push_back(&list, "tata\n");
	//ft_list_size
	tmp = ft_list_last(list);
	print_list(list);
	printf("tmp = %s\n", tmp->data);
	return (0);
}