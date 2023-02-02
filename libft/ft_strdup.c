/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:48:01 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/27 12:59:36 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;

	a = malloc(ft_strlen(s) + 1); // Faz uma alocação na memoria
	if (!a) // Se a alocação for vazia retorna 0
		return (NULL);
	ft_memcpy(a, s, ft_strlen(s) + 1); // Preenche o valor de A com o valor de S no tamanho de strlen + 1
	return (a);
}
