/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:01:38 by pgrassin          #+#    #+#             */
/*   Updated: 2016/01/09 16:51:16 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <stdio.h>

typedef struct		s_map
{
	char			**map;
	int				size;
	char			padding[4];
}					t_map;

typedef struct		s_list
{
	int				coord1;
	int				coord2;
	int				coord3;
	int				coord4;
	int				index;
	char			padding[4];
	struct s_list	*next;
}					t_list;

int					ft_back(t_map *m, t_list *l, int x, int y);

int					ft_check_block(int fd, t_list **list);

int					ft_check_links(t_list *list);

t_map				*ft_createmap(int size);

void				ft_display(t_map *m);

void				ft_erase(int i, t_map *m);

int					ft_error();

t_list				*ft_lst_pushback(t_list **lst, t_list *item);

void				ft_lstdel(t_list *alst);

void				ft_lstdelone(t_list *alst);

t_list				*ft_lstlast(t_list *lst);

void				*ft_memset(void *b, int c, int len);

int					ft_move_upleft(t_list *list);

t_list				*ft_newlst(void);

void				ft_putendl(const char *s);

void				ft_putendl_error(const char *s);

int					ft_sqrt(int n);

#endif
