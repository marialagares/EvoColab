/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:59:58 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/05 19:00:01 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lowercase_char (char *c);
void	ft_turn_upper_char (char *c);

char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		ft_turn_upper_char (&str[pos]);
		pos ++;
	}
	return (str);
}

int	ft_is_lowercase_char (char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (1);
	else
		return (0);
}

void	ft_turn_upper_char (char *c)
{
	if (ft_is_lowercase_char(c))
		*c -= 32;
}
