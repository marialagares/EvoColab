/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:07:31 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/28 13:45:18 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c ;

	c = 97;
	while (c < 123)
	{
		ft_putchar (c);
		c += 1;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
