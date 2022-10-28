/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:27:03 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 09:49:39 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//isascii nous dit si le int est un ascii ou pas

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isascii(128));
}