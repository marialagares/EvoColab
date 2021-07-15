/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:28:26 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/14 10:42:24 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	counter;

	counter = 0 ;
	if (argc)
		;
	while (argv[0][counter])
	{
		write(1, &argv[0][counter], 1);
		counter++;
	}
	write(1, "\n ", 1);
}
