/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:15:18 by swu               #+#    #+#             */
/*   Updated: 2023/09/25 22:53:45 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    long    start;
    long    end;
    long    mid;
    long    res;

    start = 0;
    end = nb;
    res = -1;
    if (nb < 0 || nb == 2)
        return (0);
    if (nb <= 1)
        return(nb);
    while(start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == nb)
        {
            res = mid;
            break;
        }
        else if (mid * mid < nb)
        {
            start = mid + 1;
            res = mid;
        }
        else
        {
            end = mid - 1;
        }  
    }
    return (res);
}