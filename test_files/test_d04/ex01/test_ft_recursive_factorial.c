# include <unistd.h>
# include <stdio.h>

int ft_recursive_factorial(int nb);

int main () {
	int factorial;

	factorial = ft_recursive_factorial(11);
	printf("%d", factorial);
	return(0);
}