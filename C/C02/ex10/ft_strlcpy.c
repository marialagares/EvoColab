/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:12:57 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/07 14:39:51 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n - 1 && src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos ++;
	}
	dest[pos] = '\0';
	while (src[pos] != '\0')
		pos ++;
	return (pos);
}
