/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:10:10 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/09 17:26:11 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_define_arg(const char *format, va_list arg)
{
	if (format == 'c')
	{
		return (ft_printchar(va_arg(arg, char)));
	}
	if (format == 's')
	{
		return (ft_printstr(va_arg(arg, char *)));
	}
	if (format == 'i' || format == 'd' || format == 'u')
	{
		return (ft_printnbr(va_arg(arg, int)));
	}
	if (format == 'x')
	{
		return (ft_hexa_to_min(va_arg(arg, int)));
	}
	if (format == 'X')
	{
		return (ft_hexa_to_max(va_arg(arg, int)));
	}
	if (format == '%')
	{
		//////////$@!$@!$!#@%#$!^%$#*&^%($*#&%$^#%@$!%$%&^**&%^$#@!#@#$%^)
	}

	// les 3 petits point dans le prototypes represente les argument passer dans le printf apres les
	int ft_printf(const char *format, ...)
	{
		va_list arg;
		int count;
		int i;

		prinstr(va_arg(arg, char *), format);
		i = 0;
		count = 0;
		va_start(arg, format);
		while (format[i])
		{
			if (format[i] == '%')
			{
				count += ft_define_arg(format[i + 1], arg);
			}
			else
			{
				count += ft_printchar(format[i]);
			}
			i++;
		}
		va_end(arg);
		return (count);
	}
