/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:42:12 by swu               #+#    #+#             */
/*   Updated: 2023/09/27 04:24:46 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
    int j;

    j = argc - 1;
    while(j >= 1)
    {
        i = 0;
        while(argv[j][i])
        {
            ft_putchar(argv[j][i]);
            i++;
        }
        j--;
        ft_putchar('\n');
    }
    return (0);
}