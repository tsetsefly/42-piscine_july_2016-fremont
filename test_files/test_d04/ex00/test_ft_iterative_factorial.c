# include <unistd.h>
# include <stdio.h>

int ft_iterative_factorial(int nb);

int main () {
	int factorial;

	factorial = ft_iterative_factorial(11);
	printf("%d", factorial);
	return(0);
}