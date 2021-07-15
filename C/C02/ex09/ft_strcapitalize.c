/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:16:19 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/06 18:43:20 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_turn_lower_char (char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	ft_turn_upper_char (char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	ft_char_is_numeric (char c)
{
	int	ret;

	ret = 0;
	if ((c >= '0' && c <= '9'))
		ret = 1;
	return (ret);
}

int	ft_char_is_alpha (char c)
{
	int	ret;

	ret = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		ret = 1;
	return (ret);
}

char	*ft_strcapitalize(char *str)
{
	int	pos;
	int	next_up;

	next_up = 1;
	pos = 0;
	while (str[pos] != '\0')
	{
		if (ft_char_is_alpha(str[pos]) || ft_char_is_numeric(str[pos]))
		{
			if (ft_char_is_alpha(str[pos]))
			{
				if (next_up)
					ft_turn_upper_char(&str[pos]);
				else
					ft_turn_lower_char(&str[pos]);
			}
			next_up = 0;
		}
		else
			next_up = 1;
		pos++;
	}
	return (str);
}
