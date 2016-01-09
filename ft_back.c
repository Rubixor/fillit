/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:52:31 by pgrassin          #+#    #+#             */
/*   Updated: 2016/01/09 16:58:25 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_verif_exist(t_map *m, int x, int y, t_list *l)
{
	if ((x + l->coord1 % 10 < m->size && y + l->coord1 / 10 < m->size)
			&& (x + l->coord2 % 10 < m->size && y + l->coord2 / 10 < m->size)
			&& (x + l->coord3 % 10 < m->size && y + l->coord3 / 10 < m->size)
			&& (x + l->coord4 % 10 < m->size && y + l->coord4 / 10 < m->size))
		return (1);
	return (0);
}

static int	ft_is_point(t_map *m, int x, int y, t_list *l)
{
	if ((m->map[x + l->coord1 % 10][y + l->coord1 / 10] == '.')
			&& (m->map[x + l->coord2 % 10][y + l->coord2 / 10] == '.')
			&& (m->map[x + l->coord3 % 10][y + l->coord3 / 10] == '.')
			&& (m->map[x + l->coord4 % 10][y + l->coord4 / 10] == '.'))
		return (1);
	return (0);
}

static int	ft_help(t_map *m, t_list *l, int x, int y)
{
	y++;
	if (m->map[x][y] == 0)
	{
		y = 0;
		x++;
	}
	return (ft_back(m, l, x, y));
}

int			ft_back(t_map *m, t_list *l, int x, int y)
{
	if (x < m->size)
	{
		if (ft_verif_exist(m, x, y, l))
		{
			if (ft_is_point(m, x, y, l))
			{
				m->map[x + l->coord1 % 10][y + l->coord1 / 10] = 'A' + l->index;
				m->map[x + l->coord2 % 10][y + l->coord2 / 10] = 'A' + l->index;
				m->map[x + l->coord3 % 10][y + l->coord3 / 10] = 'A' + l->index;
				m->map[x + l->coord4 % 10][y + l->coord4 / 10] = 'A' + l->index;
				if (!l->next)
					return (1);
				if (ft_back(m, l->next, 0, 0))
					return (1);
				ft_erase('A' + l->index, m);
				return (ft_help(m, l, x, y));
			}
			else
				return (ft_help(m, l, x, y));
		}
		else
			return (ft_help(m, l, x, y));
	}
	return (0);
}
