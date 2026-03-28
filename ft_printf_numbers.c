#include "ft_printf.h"

/*ft_print_nbr
** Imprime un entero con signo (para %d y %i)
** Gestiona el caso especial de INT_MIN (-2147483648) porque si no lo negamos
** se produce overflow: -INT_MIN no cabe en un int
** Devuelve el numero de caracteres impreso
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
/*ft_print_hex
**Imprime un numero en hexadecimal (para %x y %X)
**Si uppercase == 0 usa "0123456789abcdef"
**Si uppercase == 1 usa "0123456789ABCDEF"
**Devuelve el numero de caracteres impresos
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
	return ( count);
}
/*ft_print_pointer
**Imprime una direccion de memoria en hexadecimal (para %p)
**Siempre lleva el prefijo "0x" delante
**Usa unsigned long para cubrir sistemas de 64 bits (direcciones de 8 bytes)
**Si el puntero es NULL imprime ("nil") como el printf original
**Devuelve el numero de caracteres impresos
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
