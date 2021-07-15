/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:00:05 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/30 16:44:17 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number2 (int x, int y)
{
	char	a ;
	char	b ;
	char	c ;
	char	d ;

	a = x / 10 + 48;
	b = x % 10 + 48;
	c = y / 10 + 48 ;
	d = y % 10 + 48;
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
}

void	ft_print_comb2 (void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1 ;
		while (y <= 99)
		{
			ft_print_number2(x, y);
			y += 1 ;
			if (x != 98)
			{
				write (1, ", ", 2);
			}		
		}
		x += 1;
	}
}
