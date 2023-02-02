/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:33:34 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/27 13:15:36 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (n != 0)
	{
		while (src[a] != '\0' && a < (n - 1))
		{
			dst[a] = src[a]; //Copia o valor de scr para dst
			a++;
		}
		dst[a] = '\0'; // Adiciona um char nulo ao final
	}
	while (src[b] != '\0')
		b++;
	return (b);
}
