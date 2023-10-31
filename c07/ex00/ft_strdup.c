/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 04:45:44 by swu               #+#    #+#             */
/*   Updated: 2023/09/28 05:02:56 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    while(src[i])
    {
        i++;
    }
    dest = (char *) malloc(sizeof(char)*(i + 1));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}