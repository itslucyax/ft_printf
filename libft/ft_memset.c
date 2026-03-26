/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 00:53:26 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:32:54 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memset - Rellena un bloque de memoria con un byte especifico
**
** Escribre len bytes valor c (convertido a unsigned char) en la memoria
** que apunta b
**
** Trabaja con bytes no con strings
** - No se para en '\0'
** - Escribe exactamente len bytes
**
** b - puntero de memoeria a rellenar
** c - valor a escribir
** len - numero de bytes a escribir
** Devuelve puntero original b
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
