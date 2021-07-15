/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/05 17:39:31 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_str_is_lowercase(char *src);

int	main(void)
{
	printf("TEST ex04 ft_str_is_lowercase\n");
	char src1[] ="helloworld";
	char src2[] ="Helloworld";
	char src3[] ="Hello world";
	char src4[] ="2345world2";
	char src5[] ="";

	int n1, n2 , n3, n4, n5;

	n1 = ft_str_is_lowercase(src1);
	n2 = ft_str_is_lowercase(src2);
	n3 = ft_str_is_lowercase(src3);
	n4 = ft_str_is_lowercase(src4);
	n5 = ft_str_is_lowercase(src5);

	printf("Source=%s\n", src1);
	printf("Return=%d\n", n1);
	printf("Source=%s\n", src2);
	printf("Return=%d\n", n2);
	printf("Source=%s\n", src3);
	printf("Return=%d\n", n3);
	printf("Source=%s\n", src4);
	printf("Return=%d\n", n4);
	printf("Source=%s\n", src5);
	printf("Return=%d\n", n5);
	printf("\n");
}