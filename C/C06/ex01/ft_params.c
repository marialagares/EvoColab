/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:28:43 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/13 15:47:19 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	counter_char;
	int	counter_arg;

	counter_arg = 1;
	while (counter_arg < argc)
	{
		counter_char = 0;
		while (argv[counter_arg][counter_char])
		{
			write(1, &argv[counter_arg][counter_char], 1);
			counter_char++;
		}
		write(1, "\n ", 1);
		counter_arg ++;
	}
}
