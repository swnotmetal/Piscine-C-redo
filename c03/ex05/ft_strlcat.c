/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 04:48:51 by swu               #+#    #+#             */
/*   Updated: 2023/09/18 05:44:10 by swu              ###   ########.fr       */
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

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    i2;

    i = 0;
    i2 = 0;
    if (size == 0)
        return(ft_strlen(src));
    while(dest[i] && i < size)
        i++;
    while(src[i2] && i2 + i < size -1)
    {
        dest[i + i2] = src[i2];
        i2++;
    }
    dest[i + i2] = '\0';
    return(i + ft_strlen(src));
}