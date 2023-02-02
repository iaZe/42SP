/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:14:30 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/26 01:08:23 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	if (!s) // Retorna nulo caso S não tenha valor
		return (NULL);
	while (a < n)
	{
		if (((unsigned char *)s)[a] == (unsigned char)c) // Verifica onde o valor pedido está em s
			return ((void *)(s + a)); // Retorna tudo que vem de S pra frente
		a++;
	}
	return (0); // Retorna nulo caso não ache
}
