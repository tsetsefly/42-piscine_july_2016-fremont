#include <stdio.h>
#include <unistd.h>

// void ft_putchar(char c) {
// 	write(1, &c, 1);
// }

void ft_ft(int *nbr);

int main () {
	int i;
	int *ptr;

	i = 12;
	ptr = &i;
	ft_ft(&i);
	//ft_ft(ptr);
	//printf("%d", i);
}