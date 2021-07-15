/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:07:21 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/30 19:07:29 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen (char *str)
{
	int		counter;
	char	temp_char;

	counter = 0 ;
	while (str[counter] != '\0')
	{
		temp_char = str[counter];
		counter += 1;
	}
	return (counter);
}
