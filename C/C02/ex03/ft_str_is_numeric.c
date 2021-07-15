/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:59:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/06 17:55:44 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric (char c);

int	ft_str_is_numeric(char *str)
{
	int	pos;
	int	alpha;

	alpha = 0;
	pos = 0;
	if (str[pos] == '\0')
		return (1);
	while (str[pos] != '\0')
	{
		if (!ft_char_is_numeric(str[pos]))
			return (0);
		else
			alpha = 1;
		pos ++;
	}
	return (alpha);
}

int	ft_char_is_numeric (char c)
{
	int	ret;

	ret = 0;
	if ((c >= '0' && c <= '9'))
		ret = 1;
	return (ret);
}
