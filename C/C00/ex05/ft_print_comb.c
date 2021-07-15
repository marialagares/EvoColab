/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:00:05 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/28 19:38:00 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_number2 (int num1, int num2, int num3)
{	
	char	a ;
	char	b ;
	char	c ;

	a = num1 + 48;
	b = num2 + 48;
	c = num3 + 48;
	ft_putchar (a);
	ft_putchar (b);
	ft_putchar (c);
}

void	ft_print_comb (void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 9 )
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				ft_print_number2 (num1, num2, num3);
				if (!(num1 == 7 && num2 == 8 && num3 == 9))
				{
					ft_putchar (',' );
					ft_putchar (' ' );
				}
				num3 += 1;
			}
			num2 += 1;
		}
		num1 += 1;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
