/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:59:27 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/27 14:59:29 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcat(char *dest, char *src, unsigned int n)
{
	unsigned int i; // utiliser tel que strlen (on veut le nombre de character de la dest)
	unsigned int j; // on copie le string s2 a la fin du s1

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;


	while (j < n && src[j])
	{
		dest[i+j] = src[j];
		j++;
	}
	dest[i+j] = '\0';
	return (dest);
}
#include <stdio.h>
int main()
{
	char dest[] = "patate";
	char src[] = "jambon";
	printf("%s", ft_strcat(dest, src, 3));
}
