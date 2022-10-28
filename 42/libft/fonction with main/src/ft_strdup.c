/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:30:13 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/24 11:42:55 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>

     char *
     strdup(const char *s1);

     char *
     strndup(const char *s1, size_t n);

DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the string s1,
	does he copy,
		and returns a pointer to it.  The pointer may subsequently be used
		as an argument to the function free(3).

     If insufficient memory is available,
	NULL is returned and errno is set to ENOMEM.

     The strndup() function copies at most n characters from the string s1 always NUL
		terminating the copied string.
*/
#include "libft.h"

char	*strdup(const char *s1)
{
	char	*new;
	size_t	len;

	len = ft_strlen + 1;
	new = (char *)malloc(sizeof(*new) * len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s1, len));
}
