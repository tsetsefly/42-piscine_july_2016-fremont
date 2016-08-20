#include <stdio.h>

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int main () {
	int a;
	int b;

	a = 2;
	b = 4;
	ft_putchar('A');
	ft_putchar('\n');
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	ft_putstr("wahoo!");
	ft_strlen("wahoo!");
	printf("%d\n", ft_strcmp("apples and bananas", "ban"));
}