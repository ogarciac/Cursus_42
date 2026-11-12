/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_output.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 04:34:07 by orlgarci          #+#    #+#             */
/*   Updated: 2026/11/12 04:34:07 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	count;

	if (!str)
		str = "(null)";
	count = 0;
	while (*str)
	{
		if (count == INT_MAX || ft_putchar(*str++) < 0)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_put_digits(const char *digits, size_t length)
{
	int	count;

	count = 0;
	while (length > 0)
	{
		if (count == INT_MAX || ft_putchar(digits[--length]) < 0)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_put_unsigned(unsigned long long value, unsigned int base,
		int uppercase)
{
	const char	*alphabet;
	char		digits[65];
	size_t		length;

	if (base < 2 || base > 16)
		return (-1);
	alphabet = "0123456789abcdef";
	if (uppercase)
		alphabet = "0123456789ABCDEF";
	length = 0;
	while (value >= base)
	{
		digits[length++] = alphabet[value % base];
		value /= base;
	}
	digits[length++] = alphabet[value];
	return (ft_put_digits(digits, length));
}

int	ft_put_signed(int value)
{
	unsigned int	magnitude;
	int				sign;
	int				digits;

	magnitude = (unsigned int)value;
	sign = 0;
	if (value < 0)
	{
		sign = ft_putchar('-');
		magnitude = (unsigned int)(-(value + 1)) + 1;
		if (sign < 0)
			return (-1);
	}
	digits = ft_put_unsigned(magnitude, 10, 0);
	if (digits < 0 || sign > INT_MAX - digits)
		return (-1);
	return (sign + digits);
}
