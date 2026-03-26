/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:32:22 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:50:24 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Busca una subcadena en un string con limite
**Localiza la primera ocurrencia de la subcadena needle
**en el string haystack, buscando solo en los primeros len bytes
**Los bytes nulos finales no se comparan
**Solo busca dentro de los primeros len bytes en haystack
**DEVUELVE 
** - Si needle esta vacio - puntero a haystack
** - Si se encuentra - puntero al inicio de needle en haystack
** - Si no se encuentra - NULL
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
