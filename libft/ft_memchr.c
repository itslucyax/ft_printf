/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:23:49 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/17 12:51:02 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*  ft_memchr - Busca un byte en bloque de memoeria
**  Comparando con ft_strchr, que se detiene en '\0',
**	ft_memchr busca en bytes exactos
**
**	Buscar la primera aparicion del byte c en  (interpreta unsigned c) 
**	en los primeros bytes de memoeria apuntada por s
**	
**	
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
