/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 16:43:29 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char * ft_strcpy(char *dest, char *src);

int	main(void)
{
	printf("TEST ex00 ft_strcpy\n");
	char src[] ="Hello world";
	char dest[11];
	char *test;
	
	test = ft_strcpy(dest, src);

	printf("Des=%s\n", dest);
	printf("Return=%s\n", test);
	printf("\n");
}
