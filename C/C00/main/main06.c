/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 21:03:46 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen (char *str);

int	main(void)
{
	char	str1[5];
	char	str2[3];
	int		num1;
	int		num2;

	str1[0]= 'H';
	str1[1] = 'i'; 
	str1[2]= ' ';
	str1[3] = '2'; 
	str1[4]= '\0';
	
	str2[0]= 'H';
	str2[1] = 'i'; 
	str2[2]= '\0';
	
	num1 = ft_strlen (str1);
	num2 = ft_strlen (str2);
	
	printf("a es %d \n", num1);
	printf("b es %d \n", num2);

}
