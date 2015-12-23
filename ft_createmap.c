/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:28:10 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/23 09:01:56 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "fillit.h"

t_map	*ft_createmap(size_t size)
{
	t_map	*m;
	size_t	i;

	m = (t_map *)malloc(sizeof(t_map));
	i = 0;
	m->map = (char **)malloc(sizeof(char *) * (size + 1));
	while (i < size)
	{
		m->map[i] = (char *)malloc(sizeof(char) * (size + 1));
		ft_memset(m->map[i], '.', size);
		m->map[i][size] = 0;
	}
	m->map[size] = 0;
	m->size = size;
	return (m);
}
