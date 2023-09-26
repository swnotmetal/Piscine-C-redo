/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 05:46:08 by swu               #+#    #+#             */
/*   Updated: 2023/09/26 05:57:00 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    i = 5;
    if (nb == 2 || nb == 3)
        return (1);
    if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
        return (0);
    while (i * i <= nb)
    {
        i = i + 6;
        if (nb % i == 0 || nb % (i +2) == 0)
            return (0);
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return 2;
    while(1)
    {
        nb++;
        if(ft_is_prime(nb))
            return (nb);
    }    
}