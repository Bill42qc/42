/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:32:42 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 09:49:42 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isprint nous dit si le int est imprimable ou non

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isprint(110));
}