/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:55:35 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/07 15:23:54 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_char_is_printable (char c)
{
	int	ret;

	ret = 0;
	if (c > 31 && c < 127)
		ret = 1;
	return (ret);
}

unsigned char	ft_print_hex_digit(unsigned char c )
{
	if (c <= 9)
		return (c + 48);
	else
		return (c + 87);
}

void	ft_print_hex_char(char c)
{
	unsigned char	local_c;
	unsigned char	result_c;

	if (c < 0)
		local_c = c + 256;
	else
		local_c = c;
	result_c = ft_print_hex_digit(local_c / 16);
	write (1, &result_c, 1);
	result_c = ft_print_hex_digit(local_c % 16);
	write (1, &result_c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (!ft_char_is_printable(str[pos]))
		{
			write (1, "\\", 1);
			ft_print_hex_char(str[pos]);
		}
		else
			write (1, &str[pos], 1);
		pos++;
	}
}
