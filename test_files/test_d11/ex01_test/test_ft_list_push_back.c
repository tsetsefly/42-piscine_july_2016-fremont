#include "ft_list.h"
#include <unistd.h>

void ft_list_push_back(t_list **begin_list, void *data);

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
	t_list *list;

	//ft_list_push_back
	list = ft_create_elem("toto\n");
	ft_list_push_back(&list, "tata\n");
	print_list(list);

	return (0);
}