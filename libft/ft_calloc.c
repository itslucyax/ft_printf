/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 20:15:01 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/22 20:15:01 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Asigna memoria inicializada a cero
Reserva memoria para un array de count elementos de size bytes cada uno, 
e inicializa toda la memoria a cero

** malloc - asigna memoria sin inicializar
** calloc - asigna memoria inicializada a cero

count - num elementos // tam - tamaño elemento en bytes

Devuelve
	- Puntero a la memoeria asiganada (ini a 0)
	- NULL si falla asignacion
	- NULL si count o size es 0
*/

void	*ft_calloc(size_t count, size_t tam)
{
	void	*ptr;
	size_t	tam_total;

	tam_total = count * tam;
	if (count != 0 && tam_total / count != tam)
		return (NULL);
	ptr = malloc(tam_total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tam_total);
	return (ptr);
}
