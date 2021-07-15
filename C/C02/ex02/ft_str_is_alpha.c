/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:59:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/06 17:55:44 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha (char c);

int	ft_str_is_alpha(char *str)
{
	int	pos;
	int	alpha;

	alpha = 0;
	pos = 0;
	if (str[pos] == '\0')
		return (1);
	while (str[pos] != '\0')
	{
		if (!ft_char_is_alpha(str[pos]))
			return (0);
		else
			alpha = 1;
		pos ++;
	}
	return (alpha);
}

int	ft_char_is_alpha (char c)
{
	int	ret;

	ret = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		ret = 1;
	return (ret);
}
