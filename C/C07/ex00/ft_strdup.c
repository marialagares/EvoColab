/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:50:13 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/13 19:19:29 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		len;
	int		counter;

	len = 0;
	counter = 0;
	while (src[len])
	{
		len++;
	}
	new_str = (char *) malloc(sizeof (char) * (len + 1));
	counter = 0;
	while (counter < len)
	{
		new_str[counter] = src[counter];
		counter++;
	}
	new_str[counter] = '\0';
	return (new_str);
}
