# include <unistd.h>
# include <stdio.h>

int ft_recursive_power(int nb, int power);

int main () {
	int power;

	power = ft_recursive_power(1, 0);
	printf("%d", power);
	return(0);
}