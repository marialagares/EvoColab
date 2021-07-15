/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:37:46 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 20:53:03 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr (char *str)
{
	int		counter;
	char	temp_char;

	counter = 0 ;
	while (str[counter] != '\0')
	{
		temp_char = str[counter];
		write (1, &temp_char, 1);
		counter += 1;
	}
}
