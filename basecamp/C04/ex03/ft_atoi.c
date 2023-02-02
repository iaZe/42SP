/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:36:14 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/17 21:55:46 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	value;

	a = 0;
	b = 1;
	value = 0;
	while ((str[a] >= '\t' && str[a] <= '\r') || str[a] == ' ')
	{
		a++;
	}
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		value = (value 1* 0) + str[a] - '0';
		a++;
	}
	return (value * b);
}
