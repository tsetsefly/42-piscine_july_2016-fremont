/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 19:56:17 by dtse              #+#    #+#             */
/*   Updated: 2016/07/13 19:56:19 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void fill_array (int *a) {
	int i;

	i = 0;
	while (i<10) {
		a[i] = 0;
		i++;
	}
}

void positive_number(int nb) {
	int a[10];
	int i;

	i = 0;
	fill_array(a);
	while (nb != 0) {
		a[i] = nb % 10;
		nb /= 10;
		i++;
	}
	i -= 1;
	while (i >= 0) {
		ft_putchar(a[i]+48);
		i--;
	}
}

void ft_putnbr(int nb) {
	if (nb == 0) {
		ft_putchar('0');
	}
	else if (nb < 0) {	
		nb = nb * -1;
		ft_putchar('-');
		positive_number(nb);
	}
	else {
		positive_number(nb);
	}	
}