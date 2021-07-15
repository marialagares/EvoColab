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
int	ft_str_is_uppercase(char *src);

int	main(void)
{
	printf("TEST ex05 ft_str_is_uppercase\n");
	char src1[] ="HELLOWORLD";
	char src2[] ="HelloworlD";
	char src3[] ="Hello World";
	char src4[] ="2345world2";
	char src5[] ="";

	int n1, n2 , n3, n4, n5;

	n1 = ft_str_is_uppercase(src1);
	n2 = ft_str_is_uppercase(src2);
	n3 = ft_str_is_uppercase(src3);
	n4 = ft_str_is_uppercase(src4);
	n5 = ft_str_is_uppercase(src5);

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
