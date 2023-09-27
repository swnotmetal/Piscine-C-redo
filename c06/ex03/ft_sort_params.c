/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 05:03:45 by swu               #+#    #+#             */
/*   Updated: 2023/09/27 06:12:57 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
    { 
        i++;
    }
    return(s1[i] - s2[i]);

}

void    ft_print_args(char **argv)
{
    int i;
    int j;

    j = 1;
    while(argv[j])
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
}

int main(int argc, char **argv)
{
    int i;
    int j;
    char *temp;

    i = 1;
    while(i < argc)
    {
        j = 1;
        while (j < argc)
        {
            if(ft_strcmp(argv[i], argv[j]) < 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;

            }
            j++;
        }
        i++;
    }
    ft_print_args(argv);
}