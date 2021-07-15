/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:28:43 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/14 10:50:19 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	counter_char;
	int	counter_arg;

	counter_arg = argc - 1;
	while (counter_arg > 0)
	{
		counter_char = 0;
		while (argv[counter_arg][counter_char])
		{
			write(1, &argv[counter_arg][counter_char], 1);
			counter_char++;
		}
		write(1, "\n ", 1);
		counter_arg --;
	}
}
