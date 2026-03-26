/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:00:49 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/17 11:41:56 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_bzero - Pone a cero un bloque de memoria
** Limpia memoria
** Escribe n bytes con valor 0 en la memoeria por s
** s - puntero a la memoeria a poner a cero
** n - numero de bytes a poner a cero
** No devuelve nada (void)
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
