/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 01:20:55 by swu               #+#    #+#             */
/*   Updated: 2023/09/22 02:42:11 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int check_base(char *base)
{
    int i;

    i = 0;
    while(base[i])
    {
        if(base[i] == '-' || base[i] == '+' || base[i] == base[i + 1])
            return (0);
        i++;
    }
    if(i < 2)
            return (0);
    return (1);  
}

void    print_base_nb(int nbr, char *base, int size)
{
    unsigned int n;
    char    c;

    if(nbr < 0)
    {
        ft_putchar('-');
        n = -nbr;
    }
    else
        n = nbr;
    if (n >= (unsigned int)size)
            print_base_nb(n / size, base, size );
    c = base[n % size];
    ft_putchar(c);
}
void    ft_putnbr_base(int nbr, char *base)
{
    int i;

    i = 0;
    if(check_base(base) == 1)
    {
        while(base[i])
            i++;
        print_base_nb(nbr, base, i);
    }
}