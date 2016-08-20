#include <stdio.h>
#include <unistd.h>

// void ft_putchar(char c) {
// 	write(1, &c, 1);
// }

void ft_ultimate_div_mod(int *a, int *b);

int main () {
	int a;
	int b;

	a = 10;
	b = 3;
	printf("%d", a);
	printf(", ");
	printf("%d", b);
	printf("\n");
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("Div = ");
	printf("%d", a);
	printf("\nMod = ");
	printf("%d", b);
	return(0);
}