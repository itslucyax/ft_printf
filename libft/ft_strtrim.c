/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:00:02 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:49:38 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* is_in_set _ funcion auxiliar para verificar si caracter esta en set
** Esta funcion es static porque solo se usa dentro de este archivo.
** No queremos que sea visible fuera de ft_strtrim
*/

static	int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

/* ft_strtrim - Elimina caracteres de set del inicio y final de s1
** Reserva memoria (malloc) y devuelve copia de s1
**con los caracteres especificados en set eliminados del inicio y final de string
DEVUELVE
	- String recortado
	- NULL si falla asignacion memoria
	- Str vacio si s1 queda vacio al recortar
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*cut;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	cut = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!cut)
		return (NULL);
	ft_strlcpy(cut, s1 + start, end - start + 1);
	return (cut);
}
