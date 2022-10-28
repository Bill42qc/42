/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:17:42 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:20 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
sYNOPSIS
     #include <string.h>

     char *
     strchr(const char *s, int c);

     char *
     strrchr(const char *s, int c);

DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The
     terminating null character is considered to be part of the string; therefore if c is `\0',
	the functions locate the
     terminating `\0'.

     The strrchr() function is identical to strchr(),
	except it locates the last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character,
	or NULL if the character does not
     appear in the string.
		*/

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_strchr("patate", 97));
}
