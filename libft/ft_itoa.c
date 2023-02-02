/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:41:52 by dantavar          #+#    #+#             */
/*   Updated: 2022/04/16 01:55:59 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int nbr) // Usado para fazer a contagem dos inteiros
{
	int	n;

	n = 0;
	if (nbr <= 0)
		n++;
	while (nbr)
	{
		nbr /= 10; // Diminui o número em 1 digito
		n++;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		a;

	a = ft_getlen(n); // Faz a contagem dos inteiros
	str = ft_calloc(a + 1, sizeof(char)); // Aloca uma memoria no tamanho passado por getlen + 1
	if (!str) // Se o valor de str for 0 então retorna nulo
		return (NULL);
	if (n == 0) // Se o valor de n for 0 então colocamos um 0 no ponteiro de str
		*str = '0';
	else if (n < 0)
	{
		if (n == -2147483648) // Caso o número seja
		{
			ft_strlcpy(str, "-2147483648", a + 1); // Copia o valor para str
			return (str);
		}
		str[0] = '-'; // Adiciona o - a posição zero
		n *= -1; // Faz o número ficar positivo
	}
	while (n != 0)
	{
		*(str + --a) = (n % 10) + '0'; // Preenche o array de str de trás pra frente com o valor passado
		n /= 10;
	}
	return (str);
}
