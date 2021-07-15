/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:11:05 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/08 17:15:41 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n )
{
	unsigned int	pos;

	pos = 0;
	if (!n)
		return (0);
	while ((s1[pos] || s2[pos]) && pos < n)
	{
		if (s1[pos] > s2 [pos])
			return (1);
		if (s1[pos] < s2 [pos])
			return (-1);
		pos++;
	}
	return (0);
}
