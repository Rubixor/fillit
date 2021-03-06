/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:28:10 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/09 16:13:15 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

t_map	*ft_createmap(int size)
{
	t_map	*m;
	int		i;

	m = (t_map *)malloc(sizeof(t_map));
	i = 0;
	m->map = (char **)malloc(sizeof(char *) * (unsigned int)(size + 1));
	while (i < size)
	{
		m->map[i] = (char *)malloc(sizeof(char) * (unsigned int)(size + 1));
		ft_memset(m->map[i], '.', size);
		m->map[i][size] = 0;
		i++;
	}
	m->map[size] = 0;
	m->size = size;
	return (m);
}
