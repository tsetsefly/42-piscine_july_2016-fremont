/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 13:39:07 by dtse              #+#    #+#             */
/*   Updated: 2016/07/27 13:39:08 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int			check_arguments(int ac)
{
	int		result;

	result = 1;
	if (ac < 2)
	{
		ft_puterror("File name missing.");
		ft_putchar('\n');
		result = 0;
	}
	if (ac > 2)
	{
		ft_puterror("Too many arguments.");
		ft_putchar('\n');
		result = 0;
	}
	return (result);
}

int			main(int argc, char **argv)
{
	int		file_des;
	int		file_contents;
	char	buf[4096 + 1];

	if (!(check_arguments(argc)))
		return (0);
	file_des = open(argv[1], O_RDONLY);
	while ((file_contents = read(file_des, buf, 4096)))
	{
		buf[file_contents] = '\0';
		ft_putstr(buf);
	}
	close(file_des);
	return (0);
}
