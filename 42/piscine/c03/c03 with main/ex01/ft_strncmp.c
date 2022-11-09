/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:01:36 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/27 11:01:39 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	i = 0;

	if (n < 0)
	{
		return(0);
	}

	if (i < n)
	{
		while ((s1[i] != '\0' || s2[i] != '\0' ))
		{
			if(s1[i] > s2[i])
				return (1);
			if (s1[i]<s2[i])
				return (-1);
			i++;
		}
	}
	return (0);
}

	int main()
{
		printf("%d\n", ft_strncmp("Hello", "Hello1", '4'));
		
		printf("%d\n", ft_strncmp("Hello", "He" ,'4'));
		
		printf("%d\n", ft_strncmp("Hello", "Hello", '6'));
}
