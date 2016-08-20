/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:50:26 by dtse              #+#    #+#             */
/*   Updated: 2016/07/13 13:50:29 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void print_numbers(int i, int j, int k) {
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void print_separators() {
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb(void) {
	int i;
	int j;
	int k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '9') {
		while (j <= '9') {
			while (k <= '9') {
				if (!(i == j || i == k || j == k)) {
					print_numbers(i, j, k);
					if (i == '7' && j == '8' && k == '9') break;
					print_separators();
				}
				k++;
			}
			k=j+1;
			j++;
		}
		j=i+1;
		i++;
	}
}