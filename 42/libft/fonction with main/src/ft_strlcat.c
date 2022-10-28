/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:36:57 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:20 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t

strlcat(char *dst, const char *src, size_t size);


The	strlcpy(void) and strlcat() functions copy and concatenate strings respectively. They are designed to be
safer, more consistent,
	and less error prone replacements for strncpy(3) and strncat(3).
Unlike those functions,
	strlcpy() and strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as size is larger than 0 or,
		in the case of strlcat(),
 as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in
 size. Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means that for
 strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.


The	strlcat(void) function appends the NUL-terminated string src to the end of dst. It will append
 at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

*/

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t i;
	size_t dst_len;
	size_t src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while (src[i] && (dst_len > size - 1))
	{
		dst[dst_len + 1] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len > size)
		return (src_len + size);
	return (src_len + dst_len);
}
int	main(void)
{
	char src[] = "patate";
	char dest[] = "q";
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcat(dest, src, 2));
}
