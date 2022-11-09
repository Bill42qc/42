/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_print_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:37:23 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/09 16:08:15 by bmartin          ###   ########.fr       */
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

int	ft_hexa_print_min(unsigned long int n)
{
	ft_hexa(n);
	return (ft_nbrlen(n, 16));
}
