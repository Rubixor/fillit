/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_upleft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:48:40 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/08 18:27:45 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_move_upleft(t_list *list)
{
//	printf("Entree move\n");
	int		i;

	i = 0;
	while (list)
	{
//		printf("while (list)\n");
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
		list->index = i;
		i++;
		printf("coord1 = %d, coord2 = %d, coord3 = %d, coord4 = %d, index = %d\n"
				, list->coord1, list->coord2, list->coord3,
				list->coord4, list->index);
		list = list->next;
	}
	return (i + 1);
}
