#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_sort_integer_table(int *tab, int size);

int main () {
	int size = 5;
	int tab[5] = {5,4,3,2,1};

	ft_sort_integer_table(tab, size);
	return(0);
}