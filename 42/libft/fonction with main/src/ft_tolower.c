/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:11:02 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:20 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>

     int
     tolower(int c);

     #include <ctype.h>
     #include <xlocale.h>

     int
     tolower_l(int c, locale_t loc);

DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument must be
     representable as an unsigned char or the value of EOF.

     Although the tolower() function uses the current locale,
	the tolower_l() function may be passed a locale directly.
     See xlocale(3) for more information.

RETURN VALUES
     If the argument is an upper-case letter,
	the tolower() function returns the corresponding lower-case letter if there
     is one; otherwise, the argument is returned unchanged.
		*/
#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}

int	main(void)
{
	printf("%d", ft_tolower(65));
	printf("%c", ft_tolower(65));
}
