/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:45:57 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 10:28:29 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>

     int
     memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.  Both strings are
		assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical,
	otherwise returns the difference between the
     first two differing bytes (treated as unsigned char values,
		so that `\200' is greater than `\0', for example).  Zero-
     length strings are always identical.  This behavior is not required by C and portable code 
		should only depend on the sign of the returned value.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (0 < n && str1[i])
	{
		if (str1[i] == str2[i])
		{
			i++;
			n--;
		}
		else
			break ;
	}
	return (str1[i] - str2[i]);
}

int	main(void)
{
	const void	*s1;
	const void	*s2;
	size_t		n;

	s1 = "ABB";
	s2 = "AB";
	n = 3;
	printf("Result: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}
