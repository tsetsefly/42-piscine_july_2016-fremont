#include "ft_btree.h"
#include <unistd.h>
#include <stdlib.h>

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

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

int ft_strcmp(void *str_one, void *str_two)
{
	int i;
	int result;
	char *str1;
	char *str2;

	i = 0;
	result = 0;
	str1 = (char*)str_one;
	str2 = (char*)str_two;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			result = str1[i] - str2[i];
			break ;
		}
		i++;
	}
	return (result);
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

// t_btree		*btree_create_node(void *item)
// {
// 	t_btree *tmp;

// 	tmp = (t_btree*)malloc(sizeof(t_btree));
// 	tmp->item = item;
// 	tmp->right = 0;
// 	tmp->left = 0;
// 	return (tmp);
// }

void print_node(void *item)
{
	ft_putstr(item);
	// ft_putnbr(item);
	// ft_putchar(item);
	ft_putchar('\n');
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, *applyf);
	btree_apply_prefix(root->right, *applyf);
}

int main ()
{
	t_btree *tmp;
	int (*f)(void*, void*);
	void (*g)(void*);

	f = &ft_strcmp;
	g = &print_node;
	// tmp = insert_node(tmp, 1);						1
	// tmp = insert_node(tmp, 2);					2		3
	// tmp = insert_node(tmp, 3);				   4 5	   6 7			
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
	

	btree_insert_data(&tmp, "8", &ft_strcmp);
	btree_apply_prefix(tmp, &print_node);
	return (0);
}