#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

void ft_list_foreach(t_list *begin_list, void (*f)(void *));

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
		printf("result = %s\n", (char*)list->data);
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
	t_list	*list;

	ft_list_foreach

	list = ft_create_elem("toto\n");
	ft_list_push_back(&list, "tata\n");
	ft_list_push_back(&list, "tutu\n");
	ft_list_foreach(&list);
	print_list(list);
	return (0);
}
