/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_print_max.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:40:26 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/09 14:42:53 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hexa(unsigned int n)
{
	if (n > 15)
	{
		ft_hexa(n / 16);
		ft_hexa(n % 16);
	}
	else
	{
		if (n > 9)
			ft_printchar(n + 55);
		else
			ft_printchar(n + 48);
	}
}

int	ft_hexa_print_max(unsigned int n)
{
	ft_hexa(n);
	return (ft_nbrlen(n, 16));
}
