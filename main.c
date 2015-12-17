/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:32:52 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/17 17:39:29 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int		main()
{
	int	fd;
	t_list	*lst;

	lst = NULL;
	fd = open("test.txt", O_RDONLY);
	if (fd)
		printf("%d", ft_check_block(fd, lst));
	close(fd);
	return (0);
}
