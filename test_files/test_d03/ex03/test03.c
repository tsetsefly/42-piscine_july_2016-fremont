#include <stdio.h>
#include <unistd.h>

// void ft_putchar(char c) {
// 	write(1, &c, 1);
// }

void ft_div_mod(int a, int b, int *div, int *mod);

int main () {
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	printf("%d", a);
	printf(", ");
	printf("%d", b);
	printf("\n");
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("Div = ");
	printf("%d", div);
	printf("\nMod = ");
	printf("%d", mod);
	return(0);
}