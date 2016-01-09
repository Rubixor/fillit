/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_upleft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:48:40 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/09 17:14:12 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_minus_ten(t_list *list)
{
	list->coord1 -= 10;
	list->coord2 -= 10;
	list->coord3 -= 10;
	list->coord4 -= 10;
}

static void	ft_minus_one(t_list *list)
{
	list->coord1 -= 1;
	list->coord2 -= 1;
	list->coord3 -= 1;
	list->coord4 -= 1;
}

int			ft_move_upleft(t_list *list)
{
	int		i;

	i = 0;
	while (list)
	{
		while (list->coord1 / 10 != 0 && list->coord2 / 10 != 0
				&& list->coord3 / 10 != 0 && list->coord4 / 10 != 0)
			ft_minus_ten(list);
		while (list->coord1 % 10 != 0 && list->coord2 % 10 != 0
				&& list->coord3 % 10 != 0 && list->coord4 % 10 != 0)
			ft_minus_one(list);
		list->index = i;
		i++;
		list = list->next;
	}
	return (i + 1);
}
