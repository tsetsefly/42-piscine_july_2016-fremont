# include <unistd.h>
# include <stdio.h>

int ft_fibonacci(int index);

int main () {
	int fibonacci;

	fibonacci = ft_fibonacci(3);
	printf("%d", fibonacci);
	return(0);
}