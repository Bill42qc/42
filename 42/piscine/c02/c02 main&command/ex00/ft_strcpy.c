/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:34:52 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/27 10:28:48 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
int i;
i = 0;

while(src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}


int main (void)
{
char src[] = "jambon";
char dest[] = "jmhmfhvmdj";
printf(":%s:\n", dest);
ft_strcpy (dest, src);
printf(":%s:\n", dest);
return(0);
}
