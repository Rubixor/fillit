/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_links.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 20:06:53 by mdenoyel          #+#    #+#             */
/*   Updated: 2015/12/18 15:15:34 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_check_links_1(t_list *list)
{
	int links1;
	int x;

	links1 = 0;
	x = list->coord1 + 10;
	if (x == list->coord2 || x == list->coord3 || x == list->coord4)
		links1++;
	x = list->coord1 - 10;
	if (x == list->coord2 || x == list->coord3 || x == list->coord4)
		links1++;
	x = list->coord1 + 1;
	if (x == list->coord2 || x == list->coord3 || x == list->coord4)
		links1++;
	x = list->coord1 - 1;
	if (x == list->coord2 || x == list->coord3 || x == list->coord4)
		links1++;
	return (links1);
}

static int	ft_check_links_2(t_list *list)
{
	int links2;
	int x;

	links2 = 0;
	x = list->coord2 + 10;
	if (x == list->coord1 || x == list->coord3 || x == list->coord4)
		links2++;
	x = list->coord2 - 10;
	if (x == list->coord1 || x == list->coord3 || x == list->coord4)
		links2++;
	x = list->coord2 + 1;
	if (x == list->coord1 || x == list->coord3 || x == list->coord4)
		links2++;
	x = list->coord2 - 1;
	if (x == list->coord1 || x == list->coord3 || x == list->coord4)
		links2++;
	return (links2);
}

static int	ft_check_links_3(t_list *list)
{
	int links3;
	int x;

	links3 = 0;
	x = list->coord3 + 10;
	if (x == list->coord2 || x == list->coord1 || x == list->coord4)
		links3++;
	x = list->coord3 - 10;
	if (x == list->coord2 || x == list->coord1 || x == list->coord4)
		links3++;
	x = list->coord3 + 1;
	if (x == list->coord2 || x == list->coord1 || x == list->coord4)
		links3++;
	x = list->coord3 - 1;
	if (x == list->coord2 || x == list->coord1 || x == list->coord4)
		links3++;
	return (links3);
}

static int	ft_check_links_4(t_list *list)
{
	int links4;
	int x;

	links4 = 0;
	x = list->coord4 + 10;
	if (x == list->coord2 || x == list->coord3 || x == list->coord1)
		links4++;
	x = list->coord4 - 10;
	if (x == list->coord2 || x == list->coord3 || x == list->coord1)
		links4++;
	x = list->coord4 + 1;
	if (x == list->coord2 || x == list->coord3 || x == list->coord1)
		links4++;
	x = list->coord4 - 1;
	if (x == list->coord2 || x == list->coord3 || x == list->coord1)
		links4++;
	return (links4);
}

int			ft_check_links(t_list *list)
{
	int total_links;
	int links1;
	int links2;
	int links3;
	int links4;

//	printf("Entree check_link\n");
	links1 = ft_check_links_1(list);
	links2 = ft_check_links_2(list);
	links3 = ft_check_links_3(list);
	links4 = ft_check_links_4(list);
	total_links = links1 + links2 + links3 + links4;
//	printf("total links = %d\n", total_links);
	if (total_links != 6 && total_links != 8)
		return (0);
	else
		return (1);
}
