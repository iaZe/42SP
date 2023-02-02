/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantavar <dantavar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:51:46 by dantavar          #+#    #+#             */
/*   Updated: 2022/05/25 13:49:33 by dantavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_putchar2(char g);
int	array_print(char *str);
int	ptr_printer(unsigned long n);
int	ptr_print(unsigned long n);
int	ft_base_say(unsigned int c);
int	ft_unsig_itoa(unsigned int a);
int	hex_print(unsigned int n, char c);
int	ft_strcheck(va_list arg, int t);
int	ft_printf(const char *str, ...);

#endif