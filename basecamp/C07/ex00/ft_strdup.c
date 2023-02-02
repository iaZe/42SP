/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:02:46 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/14 21:12:16 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return(a);
}

char *ft_strdup(char *src)
{
	int	a;
	int	size;
	char	*dest;

	a = 0;
	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(*dest) * (size));
	while (a < size)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}