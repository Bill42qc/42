/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:23:21 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:20 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_substr
Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);
Fichiers de rendu -
Paramètres s: La chaîne de laquelle extraire la nouvelle
chaîne.
start: L’index de début de la nouvelle chaîne dans
la chaîne ’s’.
len: La taille maximale de la nouvelle chaîne.
Valeur de retour La nouvelle chaîne de caractères.
NULL si l’allocation échoue.
Fonctions externes autorisées
malloc
Description Alloue (avec malloc(3)) et retourne une chaîne de
caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et
a pour taille maximale ’len’.
*/

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (start < ft_strlen(s))
		while (s[i + start] && len > i)
			i++;
	str = (char *)malloc(sizeof(*s) * (i + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
	}
	str[j] = 0;
	return (str);
}
