/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:48:12 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/20 00:38:12 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strarray(const char *s, char limiter) // Essa função serve para contar quantas vezes o limitador apareceu na frase
{
	unsigned int	n;

	n = 0;
	while (*s)
	{
		if (*s == limiter)
			s++;
		else
		{
			while (*s != limiter && *s)
				s++;
			n++;
		}
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	a;
	unsigned int	b;

	if (!s)
		return (NULL);
	array = (char **) ft_calloc(ft_strarray(s, c) + 1, sizeof(char *)); // Cria um array vazio com o valor limitado por strarray
	if (!array) // Se não tiver nada retorna nulo
		return (NULL);
	b = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			a = 0;
			while (*s != c && *s && ++a) // Enquanto for diferente do limitador, vai andando pela frase
				s++;
			array[++b -1] = (char *) ft_calloc(a + 1, sizeof(char)); // Cria um array com o tamanho de A + 1
			ft_strlcpy(array[b -1], s - a, a + 1); // PReenche os dados até a primeira limitação usando o valor de A 
		}
	}
	return (array);
}
