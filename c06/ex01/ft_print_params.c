/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:25:39 by swu               #+#    #+#             */
/*   Updated: 2023/09/27 04:29:57 by swu              ###   ########.fr       */
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

    j = 1;
    while(argc > 0)
    {
        i = 0;
        while(argv[j][i])
        {
            ft_putchar(argv[j][i]);
            i++;
        }
        j++;
        ft_putchar('\n');
    }
    return (0);
}
