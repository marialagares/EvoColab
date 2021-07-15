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

int	ft_rev_int_tab (int *tab, int size);

int	main(void)
{
	int	tab1[5];
	int		size1;
	int i = 0;

	tab1[0]= 2;
	tab1[1] =3; 
	tab1[2]= 4;
	tab1[3] = 5; 
	tab1[4]= 6;

	printf("ANTES\n");
	while(i < size1) 
	{
  		printf("%d ", tab1[i]);
		printf("- ");
		i++;
	}
	printf("\n");
	i = 0;
	while(i < size2)
	{
  		printf("%d ", tab2[i]);
		printf("- ");
		i++;
	}
	
	ft_rev_int_tab (tab1, size1);
	ft_rev_int_tab (tab2, size2);

	printf("\nDESPUES\n");
	i = 0;
	while(i < size1) 
	{
  		printf("%d ", tab1[i]);
		printf("- ");
		i++;
	}
	printf("\n");
	i = 0;
	while(i < size2)
	{
  		printf("%d ", tab2[i]);
		printf("- ");
		i++;
	}
}
