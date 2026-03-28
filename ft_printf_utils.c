#include "ft_printf.h"

/*ft_print_char
** Imprime un solo caracter usando write()
** Recibe int y no char porque va_arg promociona char a int automaticamente
** Devuelve 1 prique siempre imprime exactemente 1 caracetr
*/
int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

/*ft_print_str
** Imrpime un string char a char
** Si el punero es NULL imprime "(null)" como hace el printf original
** Devuelve el numero de caracteres impresos
*/
int	ft_print_str(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

/*ft_print_percent
**Imprime carccter % literal
** No consume argumento de va_list
** Devuelve 1 porque imprime exactamente 1 char
*/
int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
