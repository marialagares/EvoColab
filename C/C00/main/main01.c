/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:59:39 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/30 14:15:51 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft (int *********num_ptr9);

int	main(void)
{
	int		num	;
	int		*num_ptr1	;
	int		**num_ptr2	;
	int		***num_ptr3	;
	int		****num_ptr4	;
	int		*****num_ptr5	;
	int		******num_ptr6	;
	int		*******num_ptr7	;
	int		********num_ptr8	;
	int		*********num_ptr9	;
	
	num_ptr1 = &num;
	num_ptr2 = &num_ptr1;
	num_ptr3 = &num_ptr2;
	num_ptr4 = &num_ptr3;
	num_ptr5 = &num_ptr4;
	num_ptr6 = &num_ptr5;
	num_ptr7 = &num_ptr6;
	num_ptr8 = &num_ptr7;
	num_ptr9 = &num_ptr8;
	ft_ultimate_ft (num_ptr9);
	printf("num es %d \n", num);
}