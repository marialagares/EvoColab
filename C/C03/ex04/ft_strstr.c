/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:12:51 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/08 17:50:28 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		x;
	int		in_str;
	char	*aux_str;

	in_str = 0;
	x = 0;
	aux_str = str;
	while (*str != '\0' && in_str == 0)
	{
		if (*str == to_find[x])
		{
			x++;
			if (to_find[x] == '\0')
				in_str = 1;
		}
		else
			x = 0;
		str++;
	}
	if (str_length(to_find) == 0)
		return (aux_str);
	if (in_str == 0)
		return (0);
	return (str - x);
}
