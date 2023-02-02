/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:38:27 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/07 22:21:59 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_column(int x, char a, char b, char c);

void	rush(int x, int y)
{
	if (y > 0)
	{
		ft_column(x, 'A', 'B', 'A');
		y--;
	}
	while (y > 1)
	{
		ft_column(x, 'B', ' ', 'B');
		y--;
	}
	if (y == 1)
	{
		ft_column(x, 'C', 'B', 'C');
	}
}

void	ft_column(int x, char a, char b, char c)
{
	if (x > 0)
	{
		ft_putchar(a);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(b);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(c);
	}
	if (x > 0)
	{
	ft_putchar('\n');
	}
}
