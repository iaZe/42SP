/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:16:42 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/14 21:16:44 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*str;

	if (min >= max)
		return (0);
	if ((str = (int *)malloc(sizeof(int) * (max - min))) == ((void *)0))
		return (-1);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	*range = str;
	return (i);
}