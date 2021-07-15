/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:13:35 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/28 15:19:55 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c ;

	c = 48;
	while (c < 58 )
	{
		ft_putchar (c);
		c += 1;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
