/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:46:23 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:47:18 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Escribe un string en un archivo descriptor
Envia el string s al archivo descriptor especificado

s - string a escribir
fd - archivo descriptor donde escribe

Devuelve void

si NULL no hace nada
no añade \n al final, asique solo escribe el string
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
