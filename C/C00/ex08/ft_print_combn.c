/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:06:09 by mlagares          #+#    #+#             */
/*   Updated: 2021/06/30 18:06:14 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
void    ft_putchar(char c)
{
    write (1, &c, 1);
}
void    ft_one(void)
{
    int cnt;
    cnt = 47;
    while (++cnt < 58)
    {
        ft_putchar(cnt);
        if (cnt < 57)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        else
        {
            return ;
        }
    }
}
void    ft_organizer(int *a, int n)
{
    int cnt;
    int hol_up;
    cnt = 1;
    hol_up = 1;
    while (cnt < n)
    {
        if (a[cnt] <= a[cnt - 1])
            hol_up = 0;
        cnt++;
    }
    if (hol_up != 0)
    {
        cnt = 0;
        while (cnt < n)
            ft_putchar(a[cnt++] + '0');
        if (a[0] < (10 - n))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}
void    ft_print_combn(int n)
{
    int cnt;
    int a[9];
    cnt = 0;
    if (n >= 10 || n <= 0)
        return ;
    if (n == 1)
        ft_one();
    while (cnt < n)
        a[cnt++] = 0;
    while (a[0] <= (10 - n) && n > 1)
    {
        ft_organizer(a, n);
        a[n - 1]++;
        cnt = n;
        while (cnt != 0 && n > 1)
        {
            cnt--;
            if (a[cnt] > 9)
            {
                a[cnt - 1]++;
                a[cnt] = 0;
            }
        }
    }
}
