/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:46:53 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/24 11:02:11 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	SYNOPSIS
     #include <stdlib.h>

     void *
     calloc(size_t count, size_t size);
		
	The calloc() function contiguously allocates enough space for count objects that are size
		bytes of memory each and returns a pointer to the allocated memory. 
		The allocated memory is filled with bytes of value zero.

		Cette fonction alloue un bloc de mémoire en initialisant tous ces octets à la valeur 0. Bien que relativement proche de la fonction malloc,
			deux aspects les différencient :

L'initialisation : calloc met tous les octets du bloc à la valeur 0 alors que malloc ne 
modifie pas la zone de mémoire.

Les paramètres d'appels : calloc requière deux paramètres (le nombre d'éléments consécutifs 
à allouer et la taille d'un élément) alors que malloc attend la taille totale du bloc à allouer.

Paramètres
elementCount: permet de spécifier le nombre d'éléments consécutifs à réserver dans le bloc 
de mémoire.

elementSize : permet de fixer la taille (en nombre d'octets) d'un élément.

*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
