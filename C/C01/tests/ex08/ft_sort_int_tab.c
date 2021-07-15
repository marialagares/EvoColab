/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:18:59 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/30 20:19:01 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	next;
	int	keep;

	pos = 0;
	next = pos + 1;
	keep = 0;
	while (pos < size)
	{
		next = pos + 1;
		while (next < size)
		{
			if (tab[pos] > tab[next])
			{
				keep = tab[pos];
				tab[pos] = tab[next];
				tab[next] = keep;
			}
			next++;
		}
		pos++;
	}
}
