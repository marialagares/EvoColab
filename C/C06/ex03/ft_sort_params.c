/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:29:06 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/14 13:23:00 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_print_params(char *sorted_params)
{
	int	counter;

	counter = 0;
	while (sorted_params[counter] != '\0')
	{
		write(1, &sorted_params[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' || s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			break ;
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

void	ft_sort_params(char **args, int total_args)
{
	char	*aux;
	int		counter;

	counter = 1;
	while (counter < total_args)
	{
		if (ft_strcmp(args[counter], args[counter + 1]) > 0)
		{
			aux = args[counter + 1];
			args[counter + 1] = args[counter];
			args[counter] = aux;
			counter = 1;
		}
		else
			counter++;
	}
	counter = 1;
	while (counter <= total_args)
	{
		ft_print_params(args[counter]);
		counter++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	else
		ft_sort_params(argv, argc - 1);
}