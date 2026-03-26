/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:47:00 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:51:09 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Extrae una subcadena de un string
**Reserva memoria (con malloc) y devuelve una subcadena del string s.
**La subcadena comienza en el indice start y tiene longitud maxima len
** s - string del que coges subcadena
** start - indice inicial de subcadena s
** len - longitud maxima subcadena
**
**DEVUELVE
**	- Subcadena resultante
	- NULL si falla asignacion memoeria
	- String vacio si start >= strlen
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
