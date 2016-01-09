/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:32:52 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/09 17:19:04 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		fd;
	t_list	*lst;
	t_map	*m;
	int		n;
	int		i;

	lst = NULL;
	if (argc > 2)
		return (ft_error());
	fd = open(argv[1], O_RDONLY);
	if (fd)
		if (!(ft_check_block(fd, &lst)))
			return (ft_error());
	n = ft_move_upleft(lst);
	i = (int)(ft_sqrt(n * 4) + 0.5);
	m = ft_createmap(i);
	while (!(ft_back(m, lst, 0, 0)))
	{
		i++;
		m = ft_createmap(i);
	}
	ft_display(m);
	close(fd);
	return (0);
}
