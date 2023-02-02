/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:15:16 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/14 21:15:30 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	a;
	int	*b;

	a = 0;
	if (min >= max)
		return ((void *)0);
	b = (int *)malloc(sizeof(*b) * (max - min - 1));
	if (b == ((void *)0))
		return ((void *)0);
	while (min < max)
	{
		b[a] = min;
		min++;
		a++;
	}
	return (b);
}