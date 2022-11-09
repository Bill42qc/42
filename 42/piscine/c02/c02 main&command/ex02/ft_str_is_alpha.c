/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:25:48 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/22 12:49:37 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//copie de strncpy ( comme un strcpy mais on choisi le nombre de charactere imprimable)
// destination / source / n (nombre de character a imprimer

int ft_str_is_alpha(char *str)
{
// unsigned int sont compris entre  [0 to 4294967295] (ne peuvent etre negatif)
unsigned int i;
i =0;
 while (str[i] != '\0')
	{
		//si str de i es plus petit que 'A' OU str de i est plus grand que 'Z' OU que str de i est plus petit que 'a' OU str de i est plus petit que 'z'
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		//on retourne 0 dans ce cas
			return (0);
		i++;
	}
 // si ce nest pas le cas (condition non rencontrer) on retourne 0
return (1);

}

int main (void)
{
char str[] = "";
printf("%d", ft_str_is_alpha(str));

}
