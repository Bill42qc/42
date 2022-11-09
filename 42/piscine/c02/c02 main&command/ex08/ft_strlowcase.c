/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:08:49 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/26 11:08:52 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strlowcase(char *str)
	{
		int i;
		i = 0;

		while (str[i]) 
			{	
				if (str[i] >= 'A' && str[i] <='Z')
					str[i] += 32;
			i++;
			}	
	return(str);

	}


	int main()
	{
		char str[] = ("paTAT4");
		printf("%s",ft_strlowcase(str));
	}