#include "ft_btree.h"
#include <unistd.h>
#include <stdlib.h>

void btree_apply_infix(t_btree *root, void (*applyf)(void *));

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

void ft_putnbr(int nbr)
{
	long num;

	num = nbr;
	if (num < 0)
	{	
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

// t_btree new_node(void item)
// {
// 	t_btree *tmp;

// 	tmp = (t_btree*)malloc(sizeof(t_btree));
// 	tmp->item = item;
// 	tmp->right = NULL;
// 	tmp->left = NULL;
// 	return (tmp);
// }

// t_btree insert_node(t_btree *root, int item)
// {
// 	if (root == NULL)
// 	{
// 		root = new_node(item);
// 		return (*root);
// 	}
// 	else if (item <= root->item)
// 		*root->left = insert_node(root->left, item);
// 	else if (item > root->item)
// 		root->right = insert_node(root->right, item);
// 	return (*root);
// }

t_btree		*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree*)malloc(sizeof(t_btree));
	tmp->item = item;
	tmp->right = 0;
	tmp->left = 0;
	return (tmp);
}

void print_node(void *item)
{
	ft_putstr(item);
	// ft_putnbr(item);
	// ft_putchar(item);
	ft_putchar('\n');
}

int main ()
{
	t_btree *tmp;
	void (*f)(void*);

	f = &print_node;
	// tmp = insert_node(tmp, 1);
	// tmp = insert_node(tmp, 2);
	// tmp = insert_node(tmp, 3);
	// tmp = insert_node(tmp, 4);
	// tmp = insert_node(tmp, 5);
	// tmp = insert_node(tmp, 6);
	// tmp = insert_node(tmp, 7);
	// tmp = insert_node(tmp, 8);

	tmp = btree_create_node("1");
	tmp->left = btree_create_node("2");
	tmp->right = btree_create_node("3");
	tmp->left->left = btree_create_node("4");
	tmp->left->right = btree_create_node("5");
	tmp->right->left = btree_create_node("6");
	tmp->right->right = btree_create_node("7");
	
	btree_apply_infix(tmp, &print_node);

	return (0);
}