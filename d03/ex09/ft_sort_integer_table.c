/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:35:37 by dtse              #+#    #+#             */
/*   Updated: 2016/07/14 19:35:38 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int swap1;

	i = 0;
	j = 0;
	
	while (j < size)
	{
		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				swap1 = tab[j];
				tab[j] = tab[i];
				tab[i] = swap1;
			}
			i++;
		}
		j++;
		i = j;
	}
}
