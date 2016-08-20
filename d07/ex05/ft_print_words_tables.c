/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 12:58:30 by dtse              #+#    #+#             */
/*   Updated: 2016/07/21 12:58:31 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int j;
	int k;

	k = 0;
	while (tab[k])
	{
		j = 0;
		while (tab[k][j])
		{
			ft_putchar(tab[k][j]);
			j++;
		}
		ft_putchar('\n');
		k++;
	}
}
