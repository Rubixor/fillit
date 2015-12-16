/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 12:56:19 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/16 19:32:11 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *alst)
{
	if (alst)
	{
		while (alst)
		{
			free(&alst->coord1);
			free(&alst->coord2);
			free(&alst->coord3);
			free(&alst->coord4);
			free(&alst->index);
		}
	}
}
