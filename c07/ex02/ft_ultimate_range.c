/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swu <swu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:02:59 by swu               #+#    #+#             */
/*   Updated: 2023/10/31 05:47:54 by swu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*store;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	store = (int *)malloc(sizeof(int) * (max - min));
	if (!store)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			store[i] = min + i;
		*range = store;
		return (i);
	}
}