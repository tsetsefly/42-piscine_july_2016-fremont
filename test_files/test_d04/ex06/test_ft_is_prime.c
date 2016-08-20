# include <unistd.h>
# include <stdio.h>

int ft_is_prime(int nb);

int main () {
	int prime;

	prime = ft_is_prime(10203);
	printf("%d", prime);
	return (0);
}