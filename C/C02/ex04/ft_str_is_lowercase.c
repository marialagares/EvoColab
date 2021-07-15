/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:59:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/06 18:29:16 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase (char c);

int	ft_str_is_lowercase(char *str)
{
	int	pos;
	int	lowercase;

	lowercase = 0;
	pos = 0;
	if (str[pos] == '\0')
		return (1);
	while (str[pos] != '\0')
	{
		if (!ft_char_is_lowercase(str[pos]))
			return (0);
		else
			lowercase = 1;
		pos ++;
	}
	return (lowercase);
}

int	ft_char_is_lowercase (char c)
{
	int	ret;

	ret = 0;
	if (c >= 'a' && c <= 'z')
		ret = 1;
	return (ret);
}
