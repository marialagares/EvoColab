/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:41:03 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/28 15:21:51 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	c ;

	c = 122;
	while (c > 96 )
	{
		ft_putchar (c);
		c -= 1 ;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
