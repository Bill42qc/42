/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:03:26 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/10 11:16:52 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned int n)
{
	if (n > 9)
	{
		ft_printu(n / 10);
		ft_printu(n % 10);
	}
	else
		ft_printchar(n + '0');
	return (ft_nbrlen(n, 10));
}
