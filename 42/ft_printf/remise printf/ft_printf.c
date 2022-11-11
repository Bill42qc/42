/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:10:10 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/10 20:13:13 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_define_arg(const char format, va_list arg)
{
	int	count;

	count = 0;
	if (format == 'c')
	{
		count += ft_printchar(va_arg(arg, int));
	}
	if (format == 's')
	{
		count += (ft_printstr(va_arg(arg, char *)));
	}
	if (format == 'i' || format == 'd')
	{
		count += (ft_printnbr(va_arg(arg, int)));
	}
	if (format == 'u')
	{
		count += (ft_printu(va_arg(arg, unsigned int)));
	}
	if (format == 'x')
	{
		count += (ft_hexa_print_min(va_arg(arg, int)));
	}
	if (format == 'p')
	{
		count += (ft_ptr_to_hexa(va_arg(arg, size_t)));
	}
	if (format == 'X')
	{
		count += (ft_hexa_print_max(va_arg(arg, int)));
	}
	if (format == '%')
	{
		count += write(1, "%", 1);
	}
	return (count);
}
// les 3 petits point dans le prototypes represente les argument passer dans le printf apres les
//ap = arg ;)
int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_define_arg(format[i + 1], arg);
			i++;
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
