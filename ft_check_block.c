/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:44:37 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/09 16:59:58 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>

static int	ft_addinlist(t_list *list, int x, int y)
{
	if ((list->coord1) == -1)
	{
		list->coord1 = x * 10 + y;
	}
	else if ((list->coord2) == -1)
	{
		list->coord2 = x * 10 + y;
	}
	else if ((list->coord3) == -1)
	{
		list->coord3 = x * 10 + y;
	}
	else if ((list->coord4) == -1)
	{
		list->coord4 = x * 10 + y;
	}
	else
	{
		return (0);
	}
	return (1);
}

static int	ft_check_tetris(int fd, t_list *list, int y)
{
	char	buf[5];
	int		x;
	int		rd;

	if ((rd = read(fd, buf, 5) != 0))
	{
		if (rd < 0)
		{
			return (0);
		}
		x = 0;
		while (x < 4)
		{
			if (buf[x] == '#')
			{
				if (!(ft_addinlist(list, x, y)))
				{
					return (0);
				}
			}
			else if (buf[x] != '.')
			{
				return (0);
			}
			x++;
		}
		if (buf[x] != '\n')
		{
			return (0);
		}
		return (1);
	}
	return (0);
}

int			ft_check_block(int fd, t_list **list)
{
	int		i;
	int		rd;
	t_list	*new_lst;
	char	buf[1];

	while (1)
	{
		i = 0;
		new_lst = ft_newlst();
		while (i <= 4)
		{
			if ((i < 4) && (!(ft_check_tetris(fd, new_lst, i))))
			{
				return (0);
			}
			i++;
		}
		rd = (int)read(fd, buf, 1);
		if (ft_check_links(new_lst))
		{
			ft_lst_pushback(list, new_lst);
		}
		else
			return (0);
		if (rd == 0)
			return (1);
		else if (rd < 0 || buf[0] != '\n')
			return (0);
	}
}
