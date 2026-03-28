/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:11:32 by luciamar          #+#    #+#             */
/*   Updated: 2026/03/28 16:11:32 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* ── DISPATCHER ───────────────────────────────────────────────────────────────
** Recibe el carácter que viene después del '%' y la lista de argumentos.
** Llama al conversor correspondiente y devuelve cuántos chars imprimió.
** ───────────────────────────────────────────────────────────────────────────*/
static int	ft_dispatch(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));

	if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));

	if (specifier == '%')
		return (ft_print_percent());

	if (specifier == 'd' || specifier == 'i')
		return (ft_print_nbr(va_arg(args, int)));

	if (specifier == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));

	if (specifier == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));

	if (specifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));

	if (specifier == 'p')
		return (ft_print_pointer(va_arg(args, void *)));

	return (0);
}

/*FUNCION PRINCIPAL
** Recorre el format string cha a char
** Si encuentra % llama al dispatcher con el siguiente char
** Si es un char normal lo imprime directamente
** Suma todo lo imprimido y lo devuelve
*/
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;
	int	i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_dispatch(format[i + 1], args);
			i += 2;
		}
		else
		{
			count += ft_print_char(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
