/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:46:05 by swu               #+#    #+#             */
/*   Updated: 2023/09/12 00:54:37 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}