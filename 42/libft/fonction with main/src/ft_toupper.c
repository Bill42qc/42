/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:18:58 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 09:50:09 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <ctype.h>

     int
     toupper(int c);

     #include <ctype.h>
     #include <xlocale.h>

     int
     toupper_l(int c, locale_t loc);

DESCRIPTION
     The toupper() function converts a lower-case letter to the corresponding upper-case letter.  The 
		argument must be
     representable as an unsigned char or the value of EOF.

     Although the toupper() function uses the current locale,
	the toupper_l() function may be passed a 
		locale directly.
     See xlocale(3) for more information.

RETURN VALUES
     If the argument is a lower-case letter,
	the toupper() function returns the corresponding upper-case
		letter if there
     is one; otherwise, the argument is returned unchanged.
		*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}

int	main(void)
{
	printf("%d", ft_toupper(110));
	printf("%c", ft_toupper(110));
}