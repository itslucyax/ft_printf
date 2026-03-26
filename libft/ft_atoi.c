/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:57:06 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/27 19:21:11 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte string a integer
** Convierte porcion inicial del string str a representacion como int
**
**Devuelve el valor entero representado por el string
**
*/

int	ft_atoi(const char *str)
{
	int	num;
	int	negative;

	num = 0;
	negative = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (negative == 1)
		return (num * -1);
	return (num);
}
