/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:44:01 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/27 12:58:09 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != (char)c && s[a] != '\0') // Faz uma verificação no tamanho de S comparando com o valor de C
	{
		a++;
	}
	if (s[a] == (char)c) // Se o valor de S[a] for o valor passado em C
		return ((char *)s + a); // Retorna o valor de S no tamanho de A pra frente
	else
		return (0);
}
