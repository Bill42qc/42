/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_to_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:01:50 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/10 20:13:19 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hexa(unsigned long int n)
{
	if (n > 15)
	{
		ft_hexa(n / 16);
		ft_hexa(n % 16);
	}
	else
	{
		if (n > 9)
			ft_printchar(n + 87);
		else
			ft_printchar(n + 48);
	}
}

static int	ft_hexa_print(unsigned long int n)
{
	ft_hexa(n);
	return (ft_nbrlen(n, 16));
}

int	ft_ptr_to_hexa(size_t n)
{
	int	len;

	ft_printstr("0x");
	//on commence len=2 car on write le 0x au debut
	len = 2;
	len += ft_hexa_print((unsigned long)n);
	return ((len));
}
