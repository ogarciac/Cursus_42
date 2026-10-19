/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:20:43 by orlgarci          #+#    #+#             */
/*   Updated: 2026/10/19 17:24:41 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	void *ft_memcpy(void *dest, const void *src, size_t n)
	{
		destino = (unsigned char *)dest;
		origen = (unsigned char *)src;

		if (destino == '\0' && origen == '\0' && n > 0)
			return (NULL);


	// 1. Declarar punteros auxiliares del tipo (unsigned char *)
    //    Uno para el destino y otro para el origen.

    // 2. Control de seguridad / Casos límite:
    //    ¿Qué pasa si tanto dest como src son NULL?
    //    Si ambos son NULL y n > 0, retorna NULL para evitar un fallo de segmentación.

    // 3. Convertir los punteros de entrada a tus punteros auxiliares.

    // 4. Bucle para copiar byte a byte:
    //    Mientras no hayas copiado 'n' bytes, asigna el byte actual de src a dest
    //    y avanza los punteros (o usa un índice i).

    // 5. Retornar el puntero original 'dest'.
}
