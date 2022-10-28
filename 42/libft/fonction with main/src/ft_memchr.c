/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:27:09 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:21 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>

     void *
     memchr(const void *s, int c, size_t n);

DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an unsigned char) 
		in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located,
	or NULL if no such byte exists within 
		n bytes.
*/

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	character;

	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*ptr == character)
		{
			return (ptr);
		}
		ptr++;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("%s", ft_memchr("patate", 97, 2));
}
