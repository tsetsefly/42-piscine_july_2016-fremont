#include <stdio.h>
#include "ft_stock_par.h"

struct s_stock_par *ft_param_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_par *par);

int main(int argc, char **argv)
{
	t_stock_par *storage; 
	storage = ft_param_to_tab(argc, argv);
	ft_show_tab(storage);
	return (0);
}