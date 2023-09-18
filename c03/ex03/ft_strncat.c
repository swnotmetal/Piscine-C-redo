/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:19:09 by swu               #+#    #+#             */
/*   Updated: 2023/09/18 02:26:33 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int i2;

    i = 0;
    i2 = 0;
    if(nb == 0)
        return(0);
    while(dest[i])
        i++;
    while(src[i2] && i2 < nb)
    {
        dest[i] = src[i2];
        i++;
        i2++;
    }
    dest[i] = '\0';
    return(dest);
    

}