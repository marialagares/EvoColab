/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:36:04 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/14 13:42:04 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	num = 0;
	while (num * num < nb && num <= 46340)
		num++;
	return (num);
}

int	ft_is_prime(int nb, int sqr)
{
	int	num;

	num = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (++num <= sqr && nb != num)
	{
		if ((nb % num) == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	num;
	int	aux;
	int	sqr;

	num = 0;
	aux = nb;
	sqr = ft_sqrt(nb);
	while (num != 1)
	{
		nb = aux;
		num = ft_is_prime(nb, sqr);
		aux++;
	}
	return (nb);
}

/*
int	main(void)
{
    int	nb = 8;

    printf("El siguiente primo de %d es:%d", nb, ft_find_next_prime(nb));
}
*/