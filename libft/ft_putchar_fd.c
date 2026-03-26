/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:46:04 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:46:05 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Escribe un caracter en unn fila descriptor
Encia el caracter c al archivo descriptor especificado

c - caracter a escribir
fd - archivo descriptor donde escribe
	0 - stdin entrada estandar
	1 - stdout salida estandar por pantalla
	2 - stderr salida de errores
	>2- archivo abierto

DEVUELVE void es decir qeu nada
-Usa write() writr (fd, buffer, bytes_a_escribir)
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
