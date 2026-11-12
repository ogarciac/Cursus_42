/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dispatch.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 04:33:56 by orlgarci          #+#    #+#             */
/*   Updated: 2026/11/12 04:33:56 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_pointer(void *pointer)
{
	int	prefix;
	int	value;

	prefix = ft_putstr("0x");
	if (prefix < 0)
		return (-1);
	value = ft_put_unsigned((unsigned long long)(uintptr_t)pointer, 16, 0);
	if (value < 0)
		return (-1);
	return (prefix + value);
}

int	ft_dispatch(char specifier, va_list *args)
{
	if (specifier == 'c')
		return (ft_putchar((char)va_arg(*args, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (specifier == 'p')
		return (ft_put_pointer(va_arg(*args, void *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_put_signed(va_arg(*args, int)));
	if (specifier == 'u')
		return (ft_put_unsigned(va_arg(*args, unsigned int), 10, 0));
	if (specifier == 'x' || specifier == 'X')
		return (ft_put_unsigned(va_arg(*args, unsigned int), 16,
				specifier == 'X'));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (-1);
}
