/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenoyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 17:02:30 by mdenoyel          #+#    #+#             */
/*   Updated: 2016/01/08 19:14:27 by mdenoyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int n)
{
	int x;

	x = 0;
	while (x * x <= n)
	{
		if (x * x == n)
			return (x);
		x++;
	}
	return (x - 1);
}
