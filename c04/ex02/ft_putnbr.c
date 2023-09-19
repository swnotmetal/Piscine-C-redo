/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 04:57:01 by swu               #+#    #+#             */
/*   Updated: 2023/09/19 06:29:51 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0' )
    {
        ft_putchar(str[i]);
        i++;
    }   
}

void ft_putnbr(int nb)
{
    int min = -2147483648;
    int max = 2147483647;

    if (nb <= max && nb >= min)
    {
        if (nb == -2147483648)
	    {
		    ft_putchar('-');
		    ft_putchar('2');
		    nb = 147483648;
        }
        if (nb < 0)
        {
            ft_putchar('-');
            nb = -nb;
        }
        if (nb >= 10)
        {
            ft_putnbr(nb / 10);
        }
        
        ft_putchar(nb % 10 + '0');
    }
    else
    {
        ft_putstr("Eror, out of range");
    }
}