/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:12:53 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/04 02:20:29 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb / 10 == 0)
		ft_putchar('-');
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	if (nb % 10 < 0)
		ft_putchar((nb % 10) * -1 + '0');
	else
		ft_putchar(nb % 10 + '0');
}
