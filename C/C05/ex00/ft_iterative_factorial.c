/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:02:46 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/12 13:57:57 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	counter;

	fact = 1;
	counter = 1;
	if (nb < 0)
		fact = 0;
	while (counter <= nb)
	{
		fact = fact * counter;
		counter ++;
	}
	return (fact);
}
