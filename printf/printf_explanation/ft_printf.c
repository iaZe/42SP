/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:54:13 by dantavar          #+#    #+#             */
/*   Updated: 2022/05/25 13:50:37 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsig_itoa(unsigned int a)
{
	int		n;
	char	*str;

	n = ft_base_say(a);
	str = malloc(sizeof(char) * n + 1);
	str[n] = '\0';
	while (n > 0)
	{
		str[n - 1] = a % 10 + '0';
		a = a / 10;
		n--;
	}
	n = array_print(str);
	free(str);
	return (n);
}

int	hex_print(unsigned int n, char c)
{
	int				i;
	int				index;
	int				num;
	char			*a;
	unsigned int	number;

	if (c == 'X')
		a = ft_strdup("0123456789ABCDEF");
	else
		a = ft_strdup("0123456789abcdef");
	i = 1;
	number = n;
	while (number >= 16 && i++)
		number = number / 16;
	num = i;
	while (--i >= 0)
	{
		number = n;
		index = i;
		while (--index >= 0)
			number = number / 16;
		ft_putchar2(a[number % 16]);
	}
	free(a);
	return (num);
}

int	ft_strcheck(va_list arg, int t)
{
	char	*a;
	int		n;

	n = 0;
	if (t == 'c')
		n += ft_putchar2(va_arg(arg, int));
	if (t == 's')
		n += array_print(va_arg(arg, char *));
	if (t == 'p')
		n += ptr_print(va_arg(arg, unsigned long));
	if (t == 'd' || t == 'i')
	{
		a = ft_itoa(va_arg(arg, int));
		n += array_print(a);
		free(a);
	}
	if (t == 'u')
		n += ft_unsig_itoa(va_arg(arg, unsigned int));
	if (t == 'x' || t == 'X')
		n += hex_print(va_arg(arg, unsigned int), t);
	if (t == '%')
		n += ft_putchar2('%');
	return (n);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		n;
	int		c;

	va_start(arg, str);
	c = 0;
	n = 0;
	while (str[c])
	{
		if (str[c] == '%')
		{
			c++;
			n += ft_strcheck(arg, str[c]);
		}
		else
		{
			ft_putchar_fd(str[c], 1);
			n++;
		}
		c++;
	}
	va_end(arg);
	return (n);
}
