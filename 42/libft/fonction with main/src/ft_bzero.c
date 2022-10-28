/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:33:50 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 09:49:18 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bzero rempli les n premiers octets de la zone memoire pointer par b avec loctet 0
//la fonction memset renvoit un pointeur sur la zone m/moire b.

//UN BON PETIT TRUC POUR FAIRE BZERO AVEC LIBRAIRIE         ft_memset(0)

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char v[] = "patate";

	printf("this is the string before bzero %s \n", v);
	ft_bzero(v, 1);
	printf("this is the string after bzero %s \n", v);
}