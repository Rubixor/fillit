/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:52:37 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/09 16:51:36 by mdenoyel         ###   ########.fr       */
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

static void		ft_putstr_error(const char *s)
{
	write(2, s, ft_strlen(s));
}

static void		ft_putchar_error(char c)
{
	write(2, &c, 1);
}

void			ft_putendl_error(const char *s)
{
	ft_putstr_error(s);
	ft_putchar_error('\n');
}
