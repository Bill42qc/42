/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:09:09 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/27 13:09:11 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i; // utiliser tel que strlen (on veut le nombre de character de la dest)
	int j; // on copie le string s2 a la fin du s1

	i = 0;
	while (dest[i])
		i++;

	j = 0;

	while (src[j])
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "patatengrwngrwngr";
	char src[] = "jambon";
	printf("%s", ft_strcat(dest, src));
}