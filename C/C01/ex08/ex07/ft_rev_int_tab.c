/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:11:29 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/30 19:15:04 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_value;
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
		temp_value = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = temp_value;
		counter ++;
	}
}
