/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:13:08 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/08 18:29:58 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	dest_pos;
	unsigned int	src_pos;

	dest_pos = 0;
	src_pos = 0;
	while (dest[dest_pos])
		dest_pos++;
	while (src_pos + dest_pos < n - 1 && src[src_pos] && n)
	{
		dest[dest_pos + src_pos] = src[src_pos];
		src_pos++;
	}
	dest[dest_pos + src_pos] = '\0';
	while (src[src_pos])
		src_pos++;
	if (n < dest_pos)
		return (n + src_pos);
	return (dest_pos + src_pos);
}
