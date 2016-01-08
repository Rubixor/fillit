/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:32:52 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/08 18:47:01 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int		main()
{
	int		fd;
	t_list	*lst;
	t_map	*m;
	int		n;
	int		i;

	printf("Q");
	lst = NULL;
	fd = open("test.txt", O_RDONLY);
	printf("z");
	if (fd)
		ft_check_block(fd, &lst);
	printf("a");
	n = ft_move_upleft(lst);
	i = ft_sqrt(n * 4) + 0.5;
	printf("%d|%d|%d", i, ft_sqrt(n * 4),n);
	m = ft_createmap(i);
	printf("c");
	while (!(ft_back(m, lst, 0, 0)))
	{
		i++;
		printf("[%d]", i);
		free(m);
		m = ft_createmap(i);
	}
	ft_display(m);
	close(fd);
	return (0);
}
