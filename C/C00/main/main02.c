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

#include <stdio.h>

void	ft_swap (int *ptr_a, int *ptr_b);
void	ft_putnbr(int num);

int	main(void)
{
	int		a;
	int		b;	
	int		*ptr_a	;
	int		*ptr_b	;

	a = 7;
	b = 5;
	ptr_a = &a;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("a es %d \n", a);
	printf("a es %d \n", b);
}
