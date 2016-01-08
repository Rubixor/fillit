/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:52:37 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/08 17:59:50 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>

static size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void		ft_putstr(const char *s)
{
	write(1, s, ft_strlen(s));
}

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putendl(const char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
