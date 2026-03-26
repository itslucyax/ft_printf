/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:12:49 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/17 11:47:40 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_memcpy - Copia n bytes de src a dst
**
** Copia n bytes de memoeria apuntada por src a la memoria apuntada
** por dst. (Si src y dst se solapan - overlapping). Usar ft_memmove
**
** dst - destino copia
** src - origden """"
** n - num bytes a copiar
** Devuelve puntero a dst
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
