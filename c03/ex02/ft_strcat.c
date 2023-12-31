/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:46:45 by swu               #+#    #+#             */
/*   Updated: 2023/09/18 02:07:43 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int i2;

    i = 0;
    i2 = 0;
    while(dest[i])
        i++;
    while(src[i2])
    {
        dest[i] = src[i2];
        i++;
        i2++;
    }
    dest[i] = '\0';
    return(dest);
}