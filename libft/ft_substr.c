/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:07:14 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/21 00:15:11 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*c;

	if (s)
	{
		a = 0;
		while (a < len && s[a + start] != '\0' && start < ft_strlen(s))
			a++;
		c = malloc((sizeof(char) * a) + 1);
		if (!(c))
			return (NULL);
		b = 0;
		while (b < a)
		{
			c[b] = s[start + b];
			b++;
		}
		c[b] = '\0';
		return (c);
	}
	return (NULL);
}
