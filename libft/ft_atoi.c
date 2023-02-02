/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:25:11 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/20 00:57:00 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	b;
	int	value;

	a = 0;
	b = 1;
	value = 0;
	while ((nptr[a] >= '\t' && nptr[a] <= '\r') || nptr[a] == ' ') // Faz uma verificação para quebras de linhas e espaços
		a++;
	if (nptr[a] == '+' || nptr[a] == '-') // Faz uma verificação para saber se o número passado possui apenas 1 vez um dos caracteres
	{
		if (nptr[a] == '-') // Caso seja "-", ele multiplica por -1 para que o valor final seja negativo
			b *= -1;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9') // Faz uma verificação para saber se os caracteres a seguir são números
	{
		value = (value * 10) + nptr[a] - '0'; // Aqui ele multiplica o valor que ta armazenado por 10 e depois soma o número seguinte
		a++;	// Supondo 123, 1 * 10 = 10 + 2 = 12 * 10 = 120 + 3 = 123
	}
	return (value * b); // Retorna o valor * o b (que caso negativo será -1)
}

/* The atoi() function converts the initial portion of the string
pointed to by nptr to int. */
