/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:05:20 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/09 12:57:00 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_pow(int num, int base, int power)
{
	int	ret;

	ret = 1 ;
	while (power)
	{
		ret = ret * base;
		power--;
	}
	return (num * ret);
}

int	ft_calc_num(char *src, int pos, int num_str_size)
{
	int	char_num;
	int	ret_num;

	ret_num = 0;
	
	while (num_str_size)
	{
		char_num = src[pos] - 48;
		char_num = ft_pow(char_num, 10, num_str_size-1);
		ret_num = ret_num + char_num;
		num_str_size--;
		pos++;
	}
	return (ret_num);
}

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || \
		c == '\v' || c == '\f' || c == '\r' || c == '\t')
		return (1);
	else
		return (0);
}

int	ft_num_str_size(char *src, int pos)
{
	int	size;

	size = 0;
	while (src[pos + size] && \
		   src[pos + size] >= '0' && src[pos + size] <= '9')
		size++;
	return (size);	
}

int	ft_atoi(char *src)
{
	int	pos;
	int	positive;
	int	num;
	int	num_str_size;

	pos = 0;
	positive = 1;
	num = 0;
	num_str_size = 0;
	while (ft_is_space(src[pos]))
		pos++;
	while (!src[pos] || src[pos] == '-' || src[pos] == '+')
	{
		if (src[pos] == '-')
			positive = !positive;
		pos++;
	}
	num_str_size = ft_num_str_size(src, pos);
	num = ft_calc_num(src, pos, num_str_size);
	if (! positive)
		return (num = num * -1);
	else
		return (num);
}
