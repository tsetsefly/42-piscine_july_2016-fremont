
#include "ft_list.h"
#include <unistd.h>

t_list *ft_create_elem(void *data);

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

	list = ft_create_elem("toto\n");
	// list = ft_create_elem("tata\n");
	// list = ft_create_elem("tutu\n");

	print_list(list);

	return (0);
}