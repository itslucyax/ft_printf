/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:59:55 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/17 11:59:56 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strncmp - Comapra dos strings hasta n caracteres
**
** Compara los strings s1 y s2 caracter por caracter hasta que
**	-Encuentra una diferencia (la devuelve)
**	-LLega a n caracteres (devuelve 0)
**	-Enuentra '\0' (devuelve diferencia o 0) 
** 
** Se usa unsigned char para manejar bien caracteres extendidos
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
