/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:35:59 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 10:27:49 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digit_count(int n)
{
	size_t	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digit;
	int		num;

	digit = digit_count(n);
	str = ft_calloc(digit + 1, sizeof(char));
}

int	main(void)
{
	printf("%zu", digit_count(12345));
}
