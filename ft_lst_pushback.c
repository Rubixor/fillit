/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:21:02 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/19 19:22:10 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_lst_pushback(t_list **lst, t_list *item)
{
	t_list *tmp;

//	printf("Entree lst_pushback\n");
	if (!(*lst))
	{
//		printf("if !lst in lst_pushback\n");
		*lst = item;
	}
	else
	{
		tmp = *lst;
//		printf("if lst in lst_pushback\n");
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = item;
	}
	return (item);
}
