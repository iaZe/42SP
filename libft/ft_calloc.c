/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:00:16 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/26 01:14:52 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*a;
	size_t	tot;

	if (n == 0 || s == 0) // Caso receba 0, já retorna NULO
		return (NULL);
	tot = n * s; //                                                                    t   n   s       t   n   s
	if (tot / n != s) // Faz uma verificação para saber se n e s são iguais ( supondo: 4 / 2 = 2) (já: 8 / 2 = 4)
		return (NULL);
	a = malloc(n * s); // Aloca um espaço na memoria com o valor de n * s
	if (!a) // Se A não tiver valor, retrona NULL
		return (NULL);
	ft_bzero (a, n * s); // Preenche A em todo valor de n * s (preenche A em 4 espaços supondo n = 2 e s = 2)
	return (a); // Retorna A totalmente preenchido
}

/* The malloc() function allocates size bytes and returns a pointer to the allocated memory.
The memory is not initialized. If size is 0, then malloc() returns either NULL,
or a unique pointer value that can later be successfully passed to free(). */