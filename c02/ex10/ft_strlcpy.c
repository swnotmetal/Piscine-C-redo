/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 04:03:44 by swu               #+#    #+#             */
/*   Updated: 2023/09/16 05:20:59 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlen(char *str)
{
    unsigned int c;

    c = 0;
    while(str[c])
    {
        c++;
    }
    return(c);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    
    i = 0;
    if (size == 0)
        return(ft_strlen(src));
    while(src[i] != '\0' && i < size -1)
    {
                dest[i] = src[i];
                i++;   
    }
            dest[i] = '\0';
    return(i);
}