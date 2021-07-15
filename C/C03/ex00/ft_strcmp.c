/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:10:46 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/08 16:44:40 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	pos;

	pos = 0 ;
	while (s1[pos] || s2[pos])
	{
		if (s1[pos] > s2 [pos])
		{
			return (1);
		}
		else if (s1[pos] < s2 [pos])
		{
			return (-1);
		}
		pos++;
	}
	return (0);
}
