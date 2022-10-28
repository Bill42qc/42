/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:52:52 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 09:49:51 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memset rempli les n premiers octets de la zone memoire pointer
//par b avec loctet c
//la fonction memset renvoit un pointeur sur la zone m/moire b.
// on va CASTER la valeur de s dans ptr pour convertir le void en unsigned char
// prend la meme memoire et lis la comme on le demande maintenant

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*ptr = (unsigned char)c;
		i++;
		ptr++;
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	char v[] = "patate";
	printf("this is the string before memset %s \n", v);
	ft_memset(v, 'z', 3);
	printf("this is the string after memset %s \n", v);
}