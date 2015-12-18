/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:01:38 by pgrassin          #+#    #+#             */
/*   Updated: 2015/12/18 15:35:40 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <stdio.h>

typedef struct		s_list
{
	int				coord1;
	int				coord2;
	int				coord3;
	int				coord4;
	int				index;
	struct s_list	*next;
}					t_list;

int					ft_check_links(t_list *list);

int					ft_check_block(int fd, t_list **list);

t_list				*ft_lst_pushback(t_list **lst, t_list *item);

void				ft_lstdel(t_list *alst);

void				ft_lstdelone(t_list *alst);

void				ft_move_upleft(t_list *list);

t_list				*ft_newlst(void);

#endif
