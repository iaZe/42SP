/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 01:10:00 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/27 13:42:33 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	a;

	a = 0;
	if (!s) // Se s for vazio retorna nulo
		return ;
	while (s[a])
	{
		f(a, &s[a]); // Vai fazer o calculo para que some com o número anterior
		a++;
	}
}
