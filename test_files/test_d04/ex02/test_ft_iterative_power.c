# include <unistd.h>
# include <stdio.h>

int ft_iterative_power(int nb, int power);

int main () {
	int power;

	power = ft_iterative_power(2, 0);
	printf("%d", power);
	return(0);
}