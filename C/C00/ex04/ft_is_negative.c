/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:29:10 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/28 15:55:27 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative (int n)
{
	if (n >= 0)
	{
		ft_putchar ('P');
	}
	else
	{
		ft_putchar ('N');
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
