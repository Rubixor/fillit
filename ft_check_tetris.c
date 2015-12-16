/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetris.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:44:37 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/16 19:51:02 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>

int		ft_addinlist(t_list *list, int x, int y)
{
	if ((list->coord1) == -1)
		list->coord1 = x * 10 + y;
	else if ((list->coord2) == -1)
		list->coord2 = x * 10 + y;
	else if ((list->coord3) == -1)
		list->coord3 = x * 10 + y;
	else if ((list->coord4) == -1)
		list->coord4 = x * 10 + y;
	else
		return (0); // ceci est une erreur
	return (1);
}

int		ft_check_tetris(int fd, t_list *list, int y)
{
	char	buf[5];
	int		x;
	int		rd;

	if ((rd = read(fd, buf, 5) != 0))
	{
		if (rd < 0)
			return (0);
		x = 0;
		while (x < 5)
		{
			if (buf[x] == '#')
			{
				if (!(ft_addinlist(list, x, y)))
					return (0); // error
			}
			else if (buf[x] != '.')
				return (0);
		}
		if (buf[x] != '\n')
			return (0);
		return (1);
	}
	return (0);
}

int		ft_check_block(int fd, t_list *list) // si return (0) afficher erreur ailleurs
{
	int		i;
	int		y;
	int		rd;
	t_list	*new_lst;
	char	buf[1];

	i = 0;
	y = 0;
	while (1) // attention au segfault
	{
		new_lst = ft_newlst();
		while (i <= 5)
		{
			if ((i < 5) && (!(ft_check_tetris(fd, new_lst, y))))
				return (0);
			else if (i == 5 && ((rd = read(fd, buf, 1))))
			{
				if (rd < 0 || buf[0] != '\n')
					return (0);
				else if (rd == 0)
					return (1); //fin du fichier
			}
			if () // verif des liaisons
				ft_lst_pushback(&list, new_lst);
			ft_lstdel(new_lst);
			i++;
		}
		y++;
	}
}
