/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 04:34:38 by orlgarci          #+#    #+#             */
/*   Updated: 2026/11/12 04:34:38 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_dispatch(char specifier, va_list *args);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_put_digits(const char *digits, size_t length);
int		ft_put_unsigned(unsigned long long value, unsigned int base,
			int uppercase);
int		ft_put_signed(int value);

#endif
