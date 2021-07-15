/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:06:25 by dexposit          #+#    #+#             */
/*   Updated: 2021/06/27 14:35:19 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	search_B_esp(int row, int col, int x, int y);
void	search_A_C(int row, int col, int x, int y);

void	imp_newline(int row, int x)
{
	if (row == x)
	{
		ft_putchar('\n');
	}
}

void	rush04(int x, int y)
{
	int	row;
	int	col;

	col = 1 ;
	while (col <= y)
	{	
		row = 1 ;
		while (row <= x)
		{
			search_A_C (row, col, x, y);
			row += 1;
		}
		col += 1;
	}
}

void	search_A_C(int row, int col, int x, int y)
{
	if ((row == 1 && col == 1) || (row == x && col == y))
	{
		ft_putchar('A');
		imp_newline(row, x);
	}
	else
	{
		if ((row == 1 && col == y) || (row == x && col == 1))
		{
			ft_putchar('C');
			imp_newline(row, x);
		}
		else
		{
			search_B_esp(row, col, x, y);
		}
	}
}

void	search_B_esp(int row, int col, int x, int y)
{
	if (row == 1 || row == x || col == 1 || col == y)
	{
		ft_putchar('B');
		imp_newline(row, x);
	}
	else
	{
		ft_putchar(' ');
	}
}
