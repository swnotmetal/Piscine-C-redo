/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 03:13:48 by swu               #+#    #+#             */
/*   Updated: 2023/09/22 03:34:08 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int n;

    n = nb;
    if(power < 0)
        return(0);
    if(power == 0)
        return(1);
    while(power > 1)
    {
        nb = nb * n;
        power--;
    }
    return(nb);
}