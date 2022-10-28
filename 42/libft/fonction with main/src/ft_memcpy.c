/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:13:56 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 09:55:50 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SYNOPSIS
		#include <string.h>

		void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION
The	memcpy(void) function copies n bytes from memory area src to memory area dest.  The memory areas must
not overlap.  Use memmove(3) if the memory areas do overlap.

		*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[50];
	char	dest[50];

	src[50] = "patate";
	dest[50] = "q";
	printf("%s\n", dest);
	ft_memcpy(dest, src, 5);
	printf("%s\n", dest);
}
