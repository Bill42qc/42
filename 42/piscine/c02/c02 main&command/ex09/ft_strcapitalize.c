/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:21:43 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/26 11:21:49 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return(str);
}

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;

	ft_strlowcase(str);
	
	

	// condition pour la premiere lettre de notre string (regle une exception du debut de phrase)
	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

i =1;

	while (str[i])
	{

		// on utilise le j = i +1 pour interroger le charactere suivant du i actuel
	// permet de savoir quelle sera la valeur suivant i et de modifier valeur de i en connaissance de cause
		if (str[i] >= 'a' && str[i] <= 'z' )
			if (str[i-1] <= 47 || str[i-1] >= 123 || (str[i-1] >= 96 && str[i-1] <= 91))
				str[i] -= 32 ;

	i++;
	}
	return (str);
}


int main ()
{
char str[] = "salut, cOmmEnt tu vas ? 42mots {quarante-deux; cinquante+et+un";
printf("%s", ft_strcapitalize(str));
}