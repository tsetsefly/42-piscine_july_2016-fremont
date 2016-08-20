/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 15:10:55 by dtse              #+#    #+#             */
/*   Updated: 2016/07/22 15:10:59 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_AUSTIN_POWERS "spy"

typedef	struct	s_perso
{
	char		*name;
	float		life;
	int			age;
	char		*profession;
}				t_perso;

#endif
