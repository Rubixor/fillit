/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:04:06 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/09 16:15:31 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_memset(void *b, int c, int len)
{
	unsigned char *b1;

	b1 = (unsigned char *)b;
	while (len--)
		b1[len] = (unsigned char)c;
	return (b);
}
