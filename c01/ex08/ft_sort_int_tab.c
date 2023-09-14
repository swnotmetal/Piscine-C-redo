/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 04:34:25 by swu               #+#    #+#             */
/*   Updated: 2023/09/14 05:26:37 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int min;

    i = 0;
    while((i < size -1))
    {
        min = i;
        j = i + 1;

        while((j < size))
        {
            if(tab[j] < tab[min])
            {
                min = j;
            }
            j++;
        }

    ft_swap(&tab[min], &tab[i]);
    i++;
    }
}