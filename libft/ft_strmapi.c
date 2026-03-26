/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:57:19 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:48:42 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Aplica una funcion a cada caracter de un string
**Aplica funcion f como primer arg y el char como segundo
** Crea un nuevo str con malloc con resultados de las aplicaciones de f
**
**s - str sibre el que iteras
**f - fun que aplicas sobre cada char
**	Recibe indice (unsinged int) y char
**	Devuelve char transformaco
**
**DEVUELVE 
**	-Str con resuletado
**	-NULL si falla asignacion o si s o f son NULL
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*resultado;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	resultado = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!resultado)
		return (NULL);
	i = 0;
	while (s[i])
	{
		resultado[i] = f(i, s[i]);
		i++;
	}
	resultado[i] = '\0';
	return (resultado);
}
