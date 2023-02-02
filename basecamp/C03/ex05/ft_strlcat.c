/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:11:18 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/17 13:13:45 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[b] && b < size)
	{
		b++;
	}
	a = b;
	while (src[b - a] && (b + 1) < size)
	{
		dest[b] = src[b - a];
		b++;
	}
	if (a < size)
	{
		dest[b] = '\0';
	}
	return (a + ft_strlen(src));
}
