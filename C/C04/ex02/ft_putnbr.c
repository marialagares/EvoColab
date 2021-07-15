/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:11:29 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/08 20:44:32 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int final, int nb, int divisor)
{
	int	x;

	x = 0;
	while (divisor != 0)
	{
		 x = nb / divisor;
		x = x + final;
		write(1, &x, 1);
		nb = nb % divisor;
		divisor = divisor / 10;
	}
}

void	ft_putnbr(int nb)
{
	int	temporal;
	int	divisor;
	int	final;

	divisor = 1;
	final = 48;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	temporal = nb;
	while (temporal / 10 != 0)
	{
		temporal = temporal / 10;
		divisor = divisor * 10;
	}
	ft_putchar(final, nb, divisor);
}
