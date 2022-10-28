/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:53:14 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:20 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

SYNOPSIS

char *	strnstr(const char *haystack, const char *needle, size_t len);

DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated string needle
      in the null-terminated string
     haystack.

     The strcasestr() function is similar to strstr(),
	but ignores the case of both strings.

     The strnstr() function locates the first occurrence of the null-terminated string needle
      in the string haystack,
     where not more than len characters are searched.  Characters that appear after a `\0' 
     character are not searched.
     Since the strnstr() function is a FreeBSD specific API,
	it should only be used when portability is not a concern.

     While the strcasestr() function uses the current locale,
	the strcasestr_l() function may be passed a locale directly.
     See xlocale(3) for more information.

RETURN VALUES
     If needle is an empty string,
	haystack is returned; if needle occurs nowhere in haystack,
	NULL is returned; otherwise
     a pointer to the first character of the first occurrence of needle is returned.

*/
#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const void	*s1;
	const void	*s2;
	size_t		n;

	s1 = "ABCDEF";
	s2 = "CD";
	n = 4;
	printf("Result: %s\n", ft_strnstr(s1, s2, n));
	return (0);
}
