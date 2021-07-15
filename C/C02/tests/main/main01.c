/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/07 12:47:18 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	printf("TEST ex01 ft_strncpy\n");
	char src[] ="Hello world";
	char dest[12];
	char *test;
	unsigned int n=0;
	
	test = ft_strncpy(dest, src, n);

	printf("Source=%s\n", src);
	printf("Des=%s\n", dest);
	printf("Return=%s\n", test);
	
	n = 5;
	test = ft_strncpy(dest, src, n);
	printf("Source=%s\n", src);
	printf("Des=%s\n", dest);
	printf("Return=%s\n", test);

	n = 12;
	test = ft_strncpy(dest, src, n);
	printf("Source=%s\n", src);
	printf("Des=%s\n", dest);
	printf("Return=%s\n", test);

	printf("\n");
}
