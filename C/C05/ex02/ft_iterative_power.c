/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:32:51 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/13 13:29:33 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	nb_temp;

	counter = 0;
	nb_temp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (counter < power - 1)
	{
		nb *= nb_temp ;
		counter ++;
	}
	return (nb);
}
