/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:12:20 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/08 12:57:00 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_pos;
	unsigned int	dest_pos;

	src_pos = 0;
	dest_pos = 0;
	while (dest[dest_pos])
		dest_pos++;
	while (src[src_pos] && src_pos < nb)
	{
		dest[dest_pos] = src[src_pos];
		src_pos ++;
		dest_pos ++;
	}
	dest[dest_pos] = 0;
	return (dest);
}
