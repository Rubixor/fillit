/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:52:31 by pgrassin          #+#    #+#             */
/*   Updated: 2015/12/19 19:20:25 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_back(t_map *m, t_list *l, int x, int y)
{
	if (m->map[x][y])
	{
		if ((m->map[x + l->coord1 / 10][y + l->coord1 % 10]
				&& m->map[x + l->coord2 / 10][y + l->coord2 % 10]
				&& m->map[x + l->coord3 / 10][y + l->coord3 % 10]
				&& m->map[x + l->coord4 / 10][y + l->coord4 % 10])
				&& (m->map[x + l->coord1 / 10][y + l->coord1 % 10] == '.'
				&& m->map[x + l->coord2 / 10][y + l->coord2 % 10] == '.'
				&& m->map[x + l->coord3 / 10][y + l->coord3 % 10] == '.'
				&& m->map[x + l->coord4 / 10][y + l->coord4 % 10] == '.'))
		{
			m->map[x + l->coord1 / 10][y + l->coord1 % 10] = 'A' + l->index;
			m->map[x + l->coord2 / 10][y + l->coord2 % 10] = 'A' + l->index;
			m->map[x + l->coord3 / 10][y + l->coord3 % 10] = 'A' + l->index;
			m->map[x + l->coord4 / 10][y + l->coord4 % 10] = 'A' + l->index;
		}
		else
		{
			ft_back(m, l, x, y);
			if (m->map[x][y] ==  0)
			{
				x = 0;
				y++;
				ft_back(m, l, x, y);
			}
		}
		if (!l->next)
			return (1);
		if (ft_back(m, l->next, 0, 0))
			return (1);
		else
		{
			ft_erase('A' + l->index, m);
			if (m->map[++x][y] != 0)
				return (ft_back(m, l, x, y));
			x = 0;
			return (ft_back(m, l, x, y++));
		}
	}
	return (0);
}
