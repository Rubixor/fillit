/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:01:38 by pgrassin          #+#    #+#             */
/*   Updated: 2015/12/16 19:51:26 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>

typedef struct		s_list
{
	int				coord1;
	int				coord2;
	int				coord3;
	int				coord4;
	int				index;
	struct s_list	*next;
}					t_list;

int					ft_check_tetris(int fd, t_list *list, int y);

t_list				*ft_lst_pushback(t_list **lst, t_list *item);

void				ft_lstdel(t_list *alst);

void				ft_lstdelone(t_list *alst);

t_list				*ft_newlst(void);

#endif
