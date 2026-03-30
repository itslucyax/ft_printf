/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:11:10 by luciamar          #+#    #+#             */
/*   Updated: 2026/03/30 18:09:12 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* ft_print_char
** Prints a single character using write()
** Takes an int rather than a char because va_arg automatically casts the char 
** to an int
** Returns 1 because it always prints exactly one character
*/
int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

/*ft_print_str
** Prints a string character by character
** If the pointer is NULL, it prints ‘(null)’, 
** just like the original printf function
** Returns the number of characters printed
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
**Prints the literal % character
** Does not consume a va_list argument
** Returns 1 because it prints exactly 1 character
*/
int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
