/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:27:20 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/27 13:12:49 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	n;

	if (!s1 || !s2)
		return (0);
	n = ft_strlen(s1) + ft_strlen(s2); // Recebe o tamanho de s1 e s2
	str = malloc(sizeof(char ) * (n + 1)); // Aloca um array com tamanho de s1 + s2 + 1
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1); // Copia o valor de s1 pra str
	ft_strlcat(str, s2, n + 1); // Contatena o valor de s2 para str 
	//(O terceiro argumento de strlcat representa o tamanho total de dst e src.)
	return (str);
}
