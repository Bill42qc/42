/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:31:16 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/27 10:31:19 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	unsigned int i;
	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;

		return (s1[i] - s2[i]);
}

int main()
{
		printf("%d\n", ft_strcmp("Hello", "Hello1"));
		
		printf("%d\n", ft_strcmp("Hello", "He"));
		printf("%d\n", ft_strcmp("Hello", "Hello"));
}
