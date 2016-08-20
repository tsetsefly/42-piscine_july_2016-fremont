#include <stdio.h>

unsigned int ft_collatz_conjecture(unsigned int base);

int main()
{
	int base;
	
	base = 27;
	printf("count = %d\n", ft_collatz_conjecture(base));
	return (0);
}