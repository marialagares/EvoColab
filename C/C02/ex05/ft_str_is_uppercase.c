/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:59:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/06 18:29:16 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase (char c);

int	ft_str_is_uppercase(char *str)
{
	int	pos;
	int	uppercase;

	uppercase = 0;
	pos = 0;
	if (str[pos] == '\0')
		return (1);
	while (str[pos] != '\0')
	{
		if (!ft_char_is_uppercase(str[pos]))
			return (0);
		else
			uppercase = 1;
		pos ++;
	}
	return (uppercase);
}

int	ft_char_is_uppercase (char c)
{
	int	ret;

	ret = 0;
	if (c >= 'A' && c <= 'Z')
		ret = 1;
	return (ret);
}
