/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:08:41 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/13 13:29:33 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	else
	{
		if (power < 0)
			return (0);
		else
			return (1);
	}
	return (nb);
}
