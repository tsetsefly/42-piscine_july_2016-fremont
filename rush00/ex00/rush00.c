/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 14:07:35 by dtse              #+#    #+#             */
/*   Updated: 2016/07/16 14:07:36 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	top_bottom(int x)
{
	int	count_x;

	count_x = 1;
	ft_putchar('o');
	if (x > 1)
	{
		while (count_x < x - 1)
		{
			ft_putchar('-');
			count_x++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	sides(int x, int y)
{
	int	count_x;
	int	count_y;

	count_y = 0;
	while (count_y < y - 2)
	{
		count_x = 0;
		ft_putchar('|');
		while (count_x < x - 2)
		{
			ft_putchar(' ');
			count_x++;
		}
		if (x > 1)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
		count_y++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		top_bottom(x);
		if (y > 2)
			sides(x, y);
		if (y > 1)
			top_bottom(x);
	}
}
