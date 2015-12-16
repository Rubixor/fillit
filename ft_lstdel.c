/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 13:23:02 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/16 19:36:54 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <string.h>

void	ft_lstdel(t_list *alst)
{
	while (alst && alst->next)
	{
		ft_lstdelone(alst);
		alst = alst->next;
	}
}
