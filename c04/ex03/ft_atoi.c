/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 04:11:03 by swu               #+#    #+#             */
/*   Updated: 2023/09/20 06:19:34 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while(*str == 32 || (*str >= 9 && *str <= 13))
            str++;
    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res * sign);
}