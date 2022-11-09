/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_to_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:01:50 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/09 16:06:18 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_to_hexa(void *ptr)
{
	unsigned long int	n;

	n = (unsigned long int)(ptr);
	ft_printstr("0x");
	//ft_hexa_print_min(n);
	return (ft_hexa_print_min(n));
}
