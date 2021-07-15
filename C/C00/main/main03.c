/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 19:54:03 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod (int *a, int *b, int *div, int *mod);
void 	ft_putnbr (int a);
int	main(void)
{
	int		num_a;
	int		num_b;	
	int		*a;
	int		*b;
	int		num_div;
	int 	num_mod;
	int		*div	;
	int		*mod	;

	num_a = 78;
	num_b = 5;
	a = &num_a;
	b = &num_b;
	num_div = 0;
	num_mod = 0;
	div = &num_div;
	mod = &num_mod;	
	ft_div_mod(a, b, div, mod);
	printf("a es %d \n", *a);
	printf("b es %d \n", *b);
	printf("div es %d \n", *div);
	printf("mod es %d \n", *mod);	
}
