#include <stdio.h>
#include <unistd.h>

// void ft_putchar(char c) {
// 	write(1, &c, 1);
// }

void ft_swap(int *a, int *b);

int main () {
	int i;
	int j;

	i = 2;
	j = 4;
	printf("%d", i);
	printf("%d", j);
	printf("\nSwapped to:\n");
	ft_swap(&i, &j);
	
	printf("%d", i);
	printf("%d", j);
	return(0);
}