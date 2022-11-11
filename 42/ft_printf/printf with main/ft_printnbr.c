/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:17:22 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/10 20:02:26 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	len;

	len = 0;
	len = ft_len(n, 10);
	if (n == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		ft_printnbr(147483648);
	}
	else if (n < 0)
	{
		ft_printchar('-');
		n = n * -1;
		ft_printnbr(n);
	}
	else if (n > 9)
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	else
		ft_printchar(n + '0');
	return (len);
}
