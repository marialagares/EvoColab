/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 17:39:31 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_str_is_alpha(char *src);

int	main(void)
{
	printf("TEST ex02 ft_str_is_alpha\n");
	char src1[] ="Helloworld";
	char src2[] ="Hello 2 world";
	char src3[] ="2Hello world";
	char src4[] ="Hello world2";
	char src5[] ="";

	int n1, n2 , n3, n4, n5;

	n1 = ft_str_is_alpha(src1);
	n2 = ft_str_is_alpha(src2);
	n3 = ft_str_is_alpha(src3);
	n4 = ft_str_is_alpha(src4);
	n5 = ft_str_is_alpha(src5);

	printf("Source=%s\n", src1);
	printf("Return=%d\n", n1);
	printf("Source=%s\n", src2);
	printf("Source=%d\n", n2);
	printf("Source=%s\n", src3);
	printf("Source=%d\n", n3);
	printf("Source=%s\n", src4);
	printf("Source=%d\n", n4);
	printf("Source=%s\n", src5);
	printf("Source=%d\n", n5);
	printf("\n");
}
