/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 02:48:22 by swu               #+#    #+#             */
/*   Updated: 2023/09/15 02:48:44 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
   while(str[i])
   {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return(0);
        }
        i++;
   }
   return 1;

}