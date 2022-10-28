/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:54:18 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:21 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSI
		#include <string.h>

		void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
 The memmove() function copies n bytes from memory area src to memory area dest.  The memory areas may
overlap: copying takes place as though the bytes in src are first copied into a temporary array  that
 does not overlap src or dest,
	and the bytes are then copied from the temporary array to dest.
		*/

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}

int	main(void)
{
	char src[50] = "patate";
	char dest[50] = "q";
	printf("%s\n", dest);
	ft_memmove(dest, src, 5);
	printf("%s\n", dest);
}
