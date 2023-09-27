/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:01:11 by swu               #+#    #+#             */
/*   Updated: 2023/09/27 03:25:23 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
   int i;

   i = 0;
   if (argc > 0)
   {
        while(argv[0][i])
        {
            ft_putchar(argv[0][i]);
            i++;
        }
   } 
   ft_putchar('\n');
   return 0;
}