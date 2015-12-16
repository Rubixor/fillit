/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:01:38 by pgrassin          #+#    #+#             */
/*   Updated: 2015/12/16 16:48:59 by pgrassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

typedef struct		s_list
{
	int				coord1;
	int				coord2;
	int				coord3;
	int				coord4;
	int				index;
	struct s_list	*next;
}					t_list;
#endif
