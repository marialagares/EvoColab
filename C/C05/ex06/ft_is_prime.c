/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:51:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/14 13:42:04 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	fact;

	fact = 2;
	if (nb == 0 || nb == 1 || nb < 1)
		return (0);
	while (fact < nb)
	{
		if (nb % fact == 0)
			return (0);
		fact++;
	}
	return (1);
}
