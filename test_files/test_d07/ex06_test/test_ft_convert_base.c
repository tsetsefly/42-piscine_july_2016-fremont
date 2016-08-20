#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_putnbr_base(int nbr, char *base);

int main()
{
	char *nbr;
	char *base_from;
	char *base_to;

	// nbr = "the quick brown fox jumps over the lazy dog";
	nbr = "1000";
	base_from = "0123456789";
	base_to = "01";
	ft_convert_base(nbr, base_from, base_to);
}