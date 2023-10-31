/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:21:01 by swu               #+#    #+#             */
/*   Updated: 2023/10/30 09:52:38 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

int *ft_range(int min, int max)
{
   int i;
   int *store;
   int num_biz;

   i = 0;

    if (min >= max)
    {
        return (0);
    }    
    if (max >= min)
    {
        num_biz = max - min + 1;
    }else{
        num_biz = min - max + 1;
    }
    store = (int *)malloc((sizeof(int)) * ((long long) num_biz));
    if(!store)
        return (0);
    while (max >= min)
    {
        store[i] = min;
        min++;
        i++;
    }
    return (store);

}   