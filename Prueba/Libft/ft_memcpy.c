/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:20:43 by orlgarci          #+#    #+#             */
/*   Updated: 2026/10/19 17:32:39 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	void *ft_memcpy(void *dest, const void *src, size_t n)
	{
		unsigned char       *destino;
		const unsigned char *origen;
		size_t              i;

		if (!dest && !src && n > 0)
			return (NULL);

		destino = (unsigned char *)dest;
		origen = (const unsigned char *)src;

		i = 0;
		while (i < n)
		{
			destino[i] = origen[i];
			i++;
		}
		return (dest);
}
