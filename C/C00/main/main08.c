/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/29 21:03:46 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sort_int_tab (int *tab, int size);

int	main(void)
{
	int	tab1[5];
	int		size1;
	int i = 0;

	size1 = 5;
	tab1[0]= 7;
	tab1[1] =9; 
	tab1[2]= 2;
	tab1[3] = 3; 
	tab1[4]= 0;
	
	
	printf("ANTES\n");
	while(i < size1) 
	{
  		printf("%d ", tab1[i]);
		printf("- ");
		i++;
	}
	printf("\n");
	
	ft_sort_int_tab (tab1, size1);
	

	printf("\nDESPUES\n");
	i = 0;
	while(i < size1) 
	{
  		printf("%d ", tab1[i]);
		printf("- ");
		i++;
	}
	printf("\n");
	
}
