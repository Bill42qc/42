/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:32:04 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/27 15:32:06 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{	int i;
	int j;
	i = 0;
	j = 0;

	if (to_find[j])
		return (str);

	while (str[i])
	{
		while (str[i+j] == to_find[j] && str[i+j])
		j++;

		if (to_find[j])
			return(str+i);
			
			i++;
			j = 0;
	}
	return(0);
}

int main()
{
	char str[] = "patate est bonne";
	char to_find[] = "est";
	printf("%s", ft_strstr(str, to_find));
}
