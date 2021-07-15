/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:59:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/01 19:00:01 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_uppercase_char (char *c);
void	ft_turn_lower_char (char *c);

char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		ft_turn_lower_char (&str[pos]);
		pos ++;
	}
	return (str);
}

int	ft_is_uppercase_char (char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		return (1);
	else
		return (0);
}

void	ft_turn_lower_char (char *c)
{
	if (ft_is_uppercase_char(c))
		*c += 32;
}
