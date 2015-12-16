/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 19:40:13 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/16 19:50:08 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_newlst(void)
{
	t_list	*new_lst;

	if (!(new_lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new_lst->coord1 = -1;
	new_lst->coord2 = -1;
	new_lst->coord3 = -1;
	new_lst->coord4 = -1;
	new_lst->index = 0;
	return (new_lst);
}
