/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dexposit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:00:54 by dexposit          #+#    #+#             */
/*   Updated: 2021/06/27 14:17:27 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_first_last_line(int row, int x);
void	print_middle_line(int row, int x);

void	rush00(int x, int y)
{
	int	row;
	int	col;

	col = 1 ;
	while (col <= y)
	{	
		row = 1 ;
		while (row <= x)
		{
			if (col == 1 || col == y)
			{
				print_first_last_line(row, x);
			}
			else
			{
				print_middle_line(row, x);
			}
			row += 1;
		}
		col += 1;
	}
}

void	print_first_last_line(int row, int x)
{	
	if ((row == 1) || (row == x))
	{
		ft_putchar('o');
		if (row == x)
		{
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putchar('-');
	}
}

void	print_middle_line(int row, int x)
{
	if ((row == 1) || (row == x))
	{
		ft_putchar('|');
		if (row == x)
		{
			ft_putchar ('\n');
		}
		else
		{
			ft_putchar (' ');
		}
	}
}
