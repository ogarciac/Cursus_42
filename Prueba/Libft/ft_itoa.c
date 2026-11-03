/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 12:05:28 by orlgarci          #+#    #+#             */
/*   Updated: 2026/11/01 12:05:28 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digit_count(unsigned int n)
{
	size_t	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	value;
	size_t			len;
	char			*text;
	int				negative;

	negative = (n < 0);
	if (negative)
		value = (unsigned int)(-(n + 1)) + 1;
	else
		value = (unsigned int)n;
	len = digit_count(value) + negative;
	text = (char *)malloc(len + 1);
	if (!text)
		return (NULL);
	text[len] = '\0';
	while (len > (size_t)negative)
	{
		text[--len] = (value % 10) + '0';
		value /= 10;
	}
	if (negative)
		text[0] = '-';
	return (text);
}
