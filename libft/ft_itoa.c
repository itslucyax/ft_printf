/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:40:59 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:45:20 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cuenta el numero de digitos + signo si es necesario
** Calcula cuantos caracteres se necesitan para representar el numero,
** incluyendo signo negativo si aplica
**Long para eviyar overflow
*/

static int	count_digits(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num <= 0)
	{
		len = 1;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/*
**Convierte integer a string
**Reseva memoria con malloc y devuelve string que representa num entero pasado
**Maneja negativos
**Devuelve el num a string - NULL si falla asignacion memoria
*/

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	len = count_digits(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
