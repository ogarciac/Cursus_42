/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:05:39 by orlgarci          #+#    #+#             */
/*   Updated: 2026/09/23 18:14:30 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	output = malloc((max - min) * sizeof(int));
	if (!output)
		return (NULL);
	while (min + i < max)
	{
		output[i] = min + i;
		i++;
	}
	return (output);
}
