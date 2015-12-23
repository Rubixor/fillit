/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:44:37 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/23 09:10:30 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>

int		ft_addinlist(t_list *list, int x, int y)
{
//	printf("Entree dans addinlist\n");
	if ((list->coord1) == -1)
	{
		list->coord1 = x * 10 + y;
//		printf("Coordonnee placee en 1: %d\n", list->coord1);
	}
	else if ((list->coord2) == -1)
	{
		list->coord2 = x * 10 + y;
//		printf("Coordonnee placee en 2: %d\n", list->coord2);
	}
	else if ((list->coord3) == -1)
	{
		list->coord3 = x * 10 + y;
//		printf("Coordonnee placee en 3: %d\n", list->coord3);
	}
	else if ((list->coord4) == -1)
	{
		list->coord4 = x * 10 + y;
//		printf("Coordonnee placee en 4: %d\n", list->coord4);
	}
	else
	{
//		printf("Sortie de addinlist return 0\n");
		return (0); // ceci est une erreur
	}
//	printf("Sortie de addinlist return 1\n");
	return (1);
}

int		ft_check_tetris(int fd, t_list *list, int y)
{
	char	buf[5];
	int		x;
	int		rd;

//	printf("Entree dans ft_check_tetris\n");
	if ((rd = read(fd, buf, 5) != 0))
	{
//		printf("Entree if read != 0 : rd = %d | buf = %s\n", rd, buf);
		if (rd < 0)
		{
//			printf("rd < 0 : rd = %d\n", rd);
			return (0);
		}
		x = 0;
		while (x < 4)
		{
//			printf("x < 4: x = %d\n", x);
			if (buf[x] == '#')
			{
//				printf("buf[x] = %c\n", buf[x]);
				if (!(ft_addinlist(list, x, y)))
				{
//					printf("Erreur dans addinlist\n");
					return (0); // error
				}
			}
			else if (buf[x] != '.')
			{
//				printf("##buf[x] = %c\n", buf[x]);
				return (0);
			}
			x++;
		}
		if (buf[x] != '\n')
		{
//			printf("buf[x] != \\n : buf[x] = %c\n", buf[x]);
			return (0);
		}
//		printf("Sortie read, tout est ok\n");
		return (1);
	}
//	printf("rd = 0\n");
	return (0);
}

int		ft_check_block(int fd, t_list **list) // si return (0) afficher erreur ailleurs
{
	int		i;
	int		rd;
	t_list	*new_lst;
	char	buf[1];

//	printf("Entree check_block\n");
	while (1) // attention au segfault
	{
		i = 0;
//		printf("Entree while(1)\n");
		new_lst = ft_newlst();
		while (i <= 4)
		{
//			printf("i <= 4: i = %d\n", i);
			if ((i < 4) && (!(ft_check_tetris(fd, new_lst, i))))
			{
//				printf("ft_check_tetris = 0\n");
				return (0);
			}
			i++;
		}
		rd = read(fd, buf, 1);
//		printf("i = 4, rd = %d\n", rd);
		if (ft_check_links(new_lst))
		{
//			printf("Nombre de liens ok\n");
			ft_lst_pushback(list, new_lst);
//			printf("Sortie lst_pushback\n");
		}
		else
			return (0);
		if (rd == 0)
			return (1); //fin du fichier
		else if (rd < 0 || buf[0] != '\n')
			return (0);
	}
}
