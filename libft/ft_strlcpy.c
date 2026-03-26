/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:16:24 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:19:06 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copia un string de forma segura con limite de tamaño
** Copia hasta (dstsize - 1) caracteres de src a dst.
** asegurando que dst SIEMPRE termine en '\0' (si dstsize > 0)
** Es decir: Copia la cadena a la que apunta src, incluido el byte nulo de 
** terminación '\0', al búfer señalado por dst
**
** Devuelve LONGITUD TOTAL src que es lo que intenta copiar
** - Si devuelvo >= dstsize: hay truncamiento
** - Si devuelvo < dstsize: copia completa
** 
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
