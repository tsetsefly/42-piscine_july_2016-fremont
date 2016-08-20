#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return(0);
}

void ft_print_comb2(void);

int main() {
	 ft_print_comb2();
	 return(0);
}