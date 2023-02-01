 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:35:59 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/02 14:51:43 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*dest;
	long long	a;

	len = ft_len(n);
	a = n;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	if (a < 0)
	{
		dest[0] = '-';
		a = -a;
	}
	if (a == 0)
		dest[0] = '0';
	dest[len--] = '\0';
	while (a)
	{
		dest[len] = ((a % 10) + 48);
		a /= 10;
		len--;
	}
	return (dest);
}
