/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 20:34:01 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod (int *a, int *b);

int	main(void)
{
	int		num_a;
	int		num_b;	
	int		*a;
	int		*b;

	num_a = 78;
	num_b = 5;
	a = &num_a;
	b = &num_b;
		
	ft_ultimate_div_mod(a, b);
	printf("a es %d \n", *a);
	printf("b es %d \n", *b);
}
