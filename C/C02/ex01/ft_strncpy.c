/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:45:52 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/07 14:25:57 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n && src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos ++;
	}
	while (pos < n)
	{
		dest[pos] = '\0';
		pos ++;
	}
	return (dest);
}
