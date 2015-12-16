/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:21:02 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/16 19:15:28 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_lst_pushback(t_list **lst, t_list *item)
{
	t_list *tmp;

	tmp = *lst;
	if (!tmp)
		*lst = item;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = item;
	}
	return (item);
}
