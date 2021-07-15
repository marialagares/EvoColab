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

int ft_str_is_printable(char *str);

int main(void)
{
	printf("TEST ex06 ft_str_is_printable\n");
	char c;
	c = 127;

	char src1[] = "Hello %cWorld%c";
	char src2[] = "HHel234as&.";

	char src3[] = "Blard\1";
	char src4[] = "2345\31world2";
	char src5[] = "";

	int n1, n2, n3, n4, n5;

	n1 = ft_str_is_printable(src1);
	n2 = ft_str_is_printable(src2);
	n3 = ft_str_is_printable(src3);
	n4 = ft_str_is_printable(src4);
	n5 = ft_str_is_printable(src5);

	printf("Source=%s%c\n", src1, c);
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
