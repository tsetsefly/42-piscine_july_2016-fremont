/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:27:27 by dtse              #+#    #+#             */
/*   Updated: 2016/07/28 19:27:28 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"
#define BUF_SIZE 10

void		check_arguments(int error_num, char *file_name)
{
	ft_puterror("ft_cat: ");
	ft_puterror(file_name);
	if (error_num == 1)
		ft_puterror(": Operation not permitted\n");
	if (error_num == 2)
		ft_puterror(": No such file or directory\n");
	if (error_num == 7)
		ft_puterror(": Argument list too long\n");
	if (error_num == 13)
		ft_puterror(": Permission denied\n");
	if (error_num == 21)
		ft_puterror(": Is a directory\n");
}

void		blank_entry(int file_desc)
{
	int		file_contents;
	char	buf[BUF_SIZE + 1];

	while ((file_contents = read(file_desc, buf, BUF_SIZE)))
	{
		buf[file_contents] = '\0';
		ft_putstr(buf);
	}
}

void		print_files(int file_desc)
{
	int		file_contents;
	char	buf[BUF_SIZE + 1];

	while ((file_contents = read(file_desc, buf, BUF_SIZE)))
	{
		buf[file_contents] = '\0';
		ft_putstr(buf);
	}
	close(file_desc);
}

int			main(int argc, char **argv)
{
	int		i;
	int		file_desc;

	file_desc = 0;
	if (argc == 1)
		blank_entry(file_desc);
	i = 1;
	while (i < argc)
	{
		file_desc = open(argv[i], O_RDONLY | O_RDWR);
		if (ft_strcmp(argv[i], ".") == 0 || ft_strcmp(argv[i], "..") == 0)
			check_arguments(21, argv[i]);
		else
		{
			if (file_desc == -1)
				check_arguments(errno, argv[i]);
			else
				print_files(file_desc);
		}
		i++;
	}
	return (0);
}
