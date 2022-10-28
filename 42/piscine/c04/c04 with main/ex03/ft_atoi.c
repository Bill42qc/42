/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:38:04 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/02 12:40:48 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int sign;
	int res;
	int i;

	res = 0;
	sign = 1;
	i = 0;

		while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' ||
			str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
				i++;

		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] && str[i] >= '0' && str[i] <='9')
		{
			res *= 10;
			res += str[i] - '0';
			i++;
		}
res *= sign;
return (res);

}

int main () 
{
	// char *c = "---+--+1234ab567";
	// char *c = "1234ab567";
	printf("%d this is ft_atoi result  \n", ft_atoi("---+--+1234ab567"));
	printf("%d this is the real atoi result \n", atoi("---+--+1234ab567"));
	return(0);
}
