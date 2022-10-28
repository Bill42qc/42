/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:00:26 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/04 18:04:47 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//copie de strncpy ( comme un strcpy mais on choisi le nombre de charactere imprimable)
// destination / source / n (nombre de character a imprimer

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
unsigned i;

//on creer une boucle pour copier case par case le contenu de src dans dest
i = 0;
while(i<n && src[i] ) 
{
	dest[i] = src[i];
i++;
}

//on veut remplir le reste du string source avec des \0 pour ne pas que la lecture se poursuivre trop loin
while (i<n)
{dest[i]  = '\0';
i++;
}
return dest;
}


int main (void)
{
char src[] = "jambon";
char dest[] = "banane";
unsigned int n;
n = 4;
printf(":%s:\n", dest);
ft_strncpy (dest, src, n);
printf(":%s:\n", dest);
return(0);
}
