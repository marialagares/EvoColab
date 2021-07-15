/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:51:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/14 13:42:04 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	fact;
	int	res;

	fact = 1;
	while (fact <= 46340)
	{
		res = fact * fact;
		if (res == nb)
			return (fact);
		fact++;
	}
	return (0);
}
