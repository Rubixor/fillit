/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_upleft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:48:40 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/16 19:04:59 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_move_upleft(t_list *list)
{
	while (list)
	{
		while (list->coord1 / 10 != 0 && list->coord2 / 10 != 0
				&& list->coord3 / 10 != 0 && list->coord4 / 10 != 0)
		{
			list->coord1 -= 10;
			list->coord2 -= 10;
			list->coord3 -= 10;
			list->coord4 -= 10;
		}
		while (list->coord1 % 10 != 0 && list->coord2 % 10 != 0
				&& list->coord3 % 10 != 0 && list->coord4 % 10 != 0)
		{
			list->coord1 -= 1;
			list->coord2 -= 1;
			list->coord3 -= 1;
			list->coord4 -= 1;
		}
		list = list->next;
	}
}
