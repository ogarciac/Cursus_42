/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 04:34:14 by orlgarci          #+#    #+#             */
/*   Updated: 2026/11/12 04:34:14 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_parse_format(const char **format, va_list *args)
{
	int		written;

	if (**format == '%')
	{
		(*format)++;
		if (**format)
			written = ft_dispatch(**format, args);
		else
			written = ft_putchar('%');
	}
	else
		written = ft_putchar(**format);
	if (written >= 0 && **format)
		(*format)++;
	return (written);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*cursor;
	int			count;
	int			written;

	if (!format)
		return (-1);
	va_start(args, format);
	cursor = format;
	count = 0;
	while (*cursor)
	{
		written = ft_parse_format(&cursor, &args);
		if (written < 0 || count > INT_MAX - written)
		{
			count = -1;
			break ;
		}
		count += written;
	}
	va_end(args);
	return (count);
}
