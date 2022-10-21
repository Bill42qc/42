/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:36:50 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 11:33:42 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

size_t

strlcpy(char *dst, const char *src, size_t size);



The	strlcpy(void) and strlcat() functions copy and concatenate strings respectively. They are designed to be
safer, more consistent,
	and less error prone replacements for strncpy(3) and strncat(3).
Unlike those functions,
	strlcpy() and strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as size is larger than 0 or,
		in the case of
strlcat(),
	as long as there is at least one byte free in dst). Note that a byte for the NUL should
 be included in size. Also note that strlcpy() and strlcat() only operate on true ''C'' strings.
 This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must
  be NUL-terminated.

The	strlcpy(void) function copies up to size
	- 1 characters from the NUL-terminated string src to dst,
 NUL-terminating the result.


*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

int	main(void)
{
	char	src[50];
	char	dest[50];

	src[50] = "patate";
	dest[50] = "steaksteak";
	printf("%s\n", dest);
	printf("le resultat de ft_strlcpy is %zu\n", ft_strlcpy(dest, src, 0));
	//	printf("le resultat de strlcpy is %lu\n", strlcpy(dest, src, 40));
}
