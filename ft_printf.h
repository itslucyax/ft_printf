/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:39:00 by luciamar          #+#    #+#             */
/*   Updated: 2026/03/28 16:39:00 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

/*FUNCION PRINCIPAL*/
int	ft_printf(const char *format, ...);

/*UTILS: conversores simples*/
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_percent(void);

/*NUMBERS: conversores numericos*/
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, int uppercase);
int	ft_print_pointer(void *ptr);

#endif