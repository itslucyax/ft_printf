/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:29:39 by luciamar          #+#    #+#             */
/*   Updated: 2026/03/30 18:08:15 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* ft_print_nbr
** Prints a signed integer (for %d and %i)
** Handles the special case of INT_MIN (-2147483648) because 
** if we do not negate it
** an overflow occurs: -INT_MIN does not fit into an int
** Returns the number of characters printed
*/
int	ft_print_nbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_print_nbr(n / 10);
	count += ft_print_char(n % 10 + '0');
	return (count);
}

int	ft_print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_print_unsigned(n / 10);
	count += ft_print_char(n % 10 + '0');
	return (count);
}

/* ft_print_hex
** Prints a number in hexadecimal (for %x and %X)
** If uppercase == 0, uses ‘0123456789abcdef’
** If uppercase == 1, uses ‘0123456789ABCDEF’
** Returns the number of characters printed
*/
int	ft_print_hex(unsigned int n, int uppercase)
{
	char	*base;
	int		count;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, uppercase);
	count += ft_print_char(base[n % 16]);
	return (count);
}

/*ft_print_pointer
** Prints a memory address in hexadecimal (for %p)
** Always prefixes the address with ‘0x’
** Uses `unsigned long` to support 64-bit systems (8-byte addresses)
** If the pointer is NULL, it prints (‘nil’) as in the original printf
** Returns the number of characters printed
*/
static	int	ft_print_hex_ptr(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_print_hex_ptr(n / 16);
	count += ft_print_char(base[n % 16]);
	return (count);
}

int	ft_print_pointer(void *ptr)
{
	int	count;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	write(1, "0x", 2);
	count += 2;
	count += ft_print_hex_ptr((unsigned long)ptr);
	return (count);
}
