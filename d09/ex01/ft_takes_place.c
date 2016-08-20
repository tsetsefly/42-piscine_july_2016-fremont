/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:49:25 by dtse              #+#    #+#             */
/*   Updated: 2016/07/21 18:49:27 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		four_digits(int time)
{
	if (time > 25)
		time = time / 100;
	return (time);
}

char	*am_pm(int time)
{
	if (time > 11 && time < 24)
		return ("P.M.");
	else
		return ("A.M.");
}

int		twelve_conversion(int time)
{
	if (time > 12 && time < 25)
		time = time - 12;
	else if (time == 25)
		time = 1;
	else if (time == 0)
		time = 12;
	return (time);
}

void	ft_takes_place(int hour)
{
	int hour_plus;

	hour = four_digits(hour);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", twelve_conversion(hour));
	printf(".00 ");
	printf("%s", am_pm(hour));
	printf(" AND ");
	hour_plus = hour + 1;
	hour_plus = four_digits(hour_plus);
	printf("%d", twelve_conversion(hour_plus));
	printf(".00 ");
	printf("%s", am_pm(hour_plus));
	printf("\n");
}
