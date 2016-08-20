# include <unistd.h>
# include <stdio.h>

int ft_sqrt(int nb);

int main () {
	int root;

	root = ft_sqrt(144);
	printf("root = ");
	printf("%d", root);
	return (0);
}