/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 12:06:45 by orlgarci          #+#    #+#             */
/*   Updated: 2026/11/01 12:06:45 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	value;
	char			digit;

	if (n < 0)
	{
		(void)write(fd, "-", 1);
		value = (unsigned int)(-(n + 1)) + 1;
	}
	else
		value = (unsigned int)n;
	if (value >= 10)
		ft_putnbr_fd((int)(value / 10), fd);
	digit = (value % 10) + '0';
	(void)write(fd, &digit, 1);
}
