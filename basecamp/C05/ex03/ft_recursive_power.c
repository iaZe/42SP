/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:03:07 by dantavar          #+#    #+#             */
/*   Updated: 2022/02/14 19:11:47 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (a > a * nb)
		return (0);
	else if (power > 1)
		return (a * ft_recursive_power(a, power -1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (a);
}
