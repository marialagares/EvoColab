/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 20:55:57 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr (char *str);

int	main(void)
{
	char	str1[5];
	char	str2[3];
	
	str1[0]= 'H';
	str1[1] = 'i'; 
	str1[2]= ' ';
	str1[3] = '2'; 
	str1[4]= '\0';
	
	str2[0]= 'H';
	str2[1] = 'i'; 
	str2[2]= '\0';
	
	ft_putstr(str1);
	ft_putstr(str2);
	
}
