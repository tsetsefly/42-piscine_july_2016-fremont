/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 11:45:36 by dtse              #+#    #+#             */
/*   Updated: 2016/08/01 11:45:39 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <errno.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				print_list(t_list *list);
t_list				*ft_create_elem(char *data);
void				ft_list_push_back(t_list **begin_list, char *data);
int					min_three(int num1, int num2, int num3);
t_list				*read_stdin_array(int *row, int *col, int file_desc);
int					**map_array(int *row, int *col, t_list *list, char empty);
int					**solution_array(int *row, int *col, int **array,
						int **p_array);
void				max_size(int p_num, int row, int col);
void				print_array(int *row, int *col, int **array);
int					**create_array(int *row, int *col);
int					**boundary_solutions(int *row, int *col, int **p_array,
						int **array);
int					ft_check_chars(t_list *list, char obstacle, char empty,
						char full);
int					ft_check_rows(t_list *list, int error);
int					read_stdin_instr(int file_desc);
void				parse_map_chars(t_list *list, int length);
void				special_sauce_col(int row, int **m_array);
void				special_sauce_row(int col, int **m_array);
void				ft_list_push_front(t_list **begin_list, char *data);
int					ft_check_first_row(t_list *list, int length);
int					num_of_points(t_list *list, int total);
void				process_solution(int *row, int *col, int ***m_array);
void				print_solution(int *row, int *col, int **array);

#endif
