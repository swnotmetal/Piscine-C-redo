/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:00:18 by swu               #+#    #+#             */
/*   Updated: 2023/09/14 02:57:48 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}


void    ft_rev_int_tab(int *tab, int size)
{
    int l;
    int rev;

    l = 0;
    rev = size -1;
    while(l < rev)
    {
        ft_swap(&tab[l], &tab[rev]);
        l++;
        rev--;
    }
}

//without a cast could mean that the pointer could not locate an address sign.