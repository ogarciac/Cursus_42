/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:20:17 by orlgarci          #+#    #+#             */
/*   Updated: 2026/09/28 16:27:01 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	is_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static unsigned int	parse_number(const char *str)
{
	unsigned int	value;

	value = 0;
	while (ft_isdigit(*str))
	{
		value = value * 10U + (unsigned int)(*str - '0');
		str++;
	}
	return (value);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned int	value;

	while (is_whitespace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	value = parse_number(str);
	if (sign < 0)
	{
		if (value == (unsigned int)INT_MAX + 1U)
			return (INT_MIN);
		return (-(int)value);
	}
	return ((int)value);
}
