/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:59:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/06 18:29:16 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable (char c);

int	ft_str_is_printable(char *str)
{
	int	pos;
	int	alpha;

	alpha = 0;
	pos = 0;
	if (str[pos] == '\0')
		return (1);
	while (str[pos] != '\0')
	{
		if (!ft_char_is_printable(str[pos]))
			return (0);
		else
			alpha = 1;
		pos ++;
	}
	return (alpha);
}

int	ft_char_is_printable (char c)
{
	int	ret;

	ret = 0;
	if ((c > 31 && c < 127) || c > 127)
		ret = 1;
	return (ret);
}
