/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:13:51 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/04 22:39:44 by oestrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_validate_argument(char *arg);
void	ft_store_inputs(char *arg, int *arr1, int *arr2, int size);
void	ft_print_int_array_square(int *arr, int size);
void	ft_find_fours (int *arr_in, int *arr_out);

int	main (int argc, char *argv[])
{
	int	*outer_numbers;
	int	*inner_numbers;

	outer_numbers = (int *)malloc(sizeof(int) * 16);
	inner_numbers = (int *)malloc(sizeof(int) * 16);
	if (argc != 2)
	{
		return (0);
	}
	else
	{
		if (ft_validate_argument(argv[1]) == 1)
			return (1);
		ft_store_inputs(argv[1], outer_numbers, inner_numbers, 16);
		ft_find_fours (outer_numbers, inner_numbers);
	}
	ft_print_int_array_square(inner_numbers, 16);
	write (1, &inner_numbers[0], 1);
}

int	ft_validate_argument(char *arg)
{
	int	counter;

	counter = 0;
	while (counter < 32 && arg[counter] != '\0')
	{
		if (counter % 2 == 0)
		{
			if (arg[counter] < 48 || arg[counter] > 52)
			{
				return (1);
			}	
		}
		else
		{
			if (arg[counter] != 32)
				return (1);
		}
		counter ++;
	}			
	if (counter != 31)
		return (1);
	return (0);
}

void	ft_store_inputs(char *arg, int *arr1, int *arr2, int size)
{
	int		counter;
	char	c;

	counter = 0;
	while (counter < size)
	{
		c = arg[counter * 2] - 48;
		arr1[counter] = c;
		counter++;
	}
	arr1[counter] = '\0';
	counter = 0;
	while (counter < size)
	{
		arr2[counter] = 0;
		counter++;
	}
}

void	ft_print_int_array_square(int *arr, int size)
{
	int		counter;
	char	c;

	counter = 0;
	while (counter < size)
	{
		c = arr[counter] + 48;
		write (1, &c, 1);
		if (counter == 3 || counter == 7 || counter == 11 || counter == 15 )
			write(1, "\n", 1);
		counter++;
	}
}

void	ft_find_fours (int *arr_in, int *arr_out)
{
	int	counter1;
	int	counter2;
	int	done;

	counter1 = 0;
	counter2 = 0;
	done = 0;
	while (counter2 < 12)
	{
		while (counter1 < 16)
		{
			if (arr_in[counter2] == 1)
				arr_out[counter1] = 4;
			counter1++;
			counter2++;
		}
		counter2 += 4;
	}
}
/*
 * void ft_find_threes (int *arr_in, int *arr_out)
{
	int counter1;
	int counter2;
	int done;

	counter1 = 0;
	counter2 = 0;
	done = 0;
	while (counter2 < 12)
	{
		while (counter1 < 16)
		{
			if (arr_in[counter2] == 1)
				arr_out[counter1] = 4;
			counter1++;
			counter2++;
		}
		counter2 += 4;
	}
}
*/
