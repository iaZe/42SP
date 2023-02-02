/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:45:09 by dantavar          #+#    #+#             */
/*   Updated: 2022/05/25 13:49:49 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar2(char c)
{
	write(1, &c, 1);
	return (1);
}

int	array_print(char *str)
{
	int	n;

	n = 0;
	if (!str)
		return (array_print("(null)"));
	while (str[n])
		n += ft_putchar2(str[n]);
	return (n);
}

int	ptr_printer(unsigned long n)
{
	char	*c;

	c = ft_strdup("0123456789abcdef");
	if (n >= 16)
	{
		ptr_printer(n / 16);
		ptr_printer(n % 16);
	}
	else
		ft_putchar2(c[n]);
	free(c);
	return (0);
}

int	ptr_print(unsigned long n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	ptr_printer(n);
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i + 2);
}

int	ft_base_say(unsigned int c)
{
	int	n;

	n = 0;
	while (c >= 10)
	{
		c = c / 10;
		n++;
	}
	return (n + 1);
}
