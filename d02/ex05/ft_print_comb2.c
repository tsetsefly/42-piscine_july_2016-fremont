/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 16:53:28 by dtse              #+#    #+#             */
/*   Updated: 2016/07/13 16:53:31 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int print_two_digits(int num) {
	int a;
	int b;

	a = num / 10;
	b = num % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	return(0);
}

void ft_print_comb2(void) {
	int i;
	int j;

	i = 0;
	while(i <= 98) {
		j = i + 1;
		while(j <= 99) {
			print_two_digits(i);
			ft_putchar(' ');
			print_two_digits(j);
			if(!(i == 98 && j == 99)) {
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}