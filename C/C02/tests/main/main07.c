/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:59:42 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/05 17:39:31 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strupcase(char *src);

int	main(void)
{
	printf("TEST ex07 ft_strupcase\n");
	char c;
	c=127;
	
	char src1[] ="Hello %cWorld%c";
	char src2[] ="HHel234as&.";
	
	char src3[] ="Blard\1";
	char src4[] ="2345\31world2";
	char src5[] ="";

	char *dest1, *dest2 , *dest3, *dest4, *dest5;

	dest1 = ft_strupcase(src1);
	dest2= ft_strupcase(src2);

	dest3= ft_strupcase(src3);
	dest4= ft_strupcase(src4);
	dest5 = ft_strupcase(src5);

	printf("Source=%s\n", src1);
	printf("Return=%s\n", dest1);
	printf("Source=%s\n", src2);
	printf("Return=%s\n", dest2);
	printf("Source=%s\n", src3);
	printf("Return=%s\n", dest3);
	printf("Source=%s\n", src4);
	printf("Return=%s\n", dest4);
	printf("Source=%s\n", src5);
	printf("Return=%s\n", dest5);
	printf("\n");
}
