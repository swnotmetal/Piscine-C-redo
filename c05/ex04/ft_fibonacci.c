/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:51:40 by swu               #+#    #+#             */
/*   Updated: 2023/09/25 22:14:29 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int n;

    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    if (index >= 2)
    {
        n = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
        return (n);
    }
    else
        return(-1);
}