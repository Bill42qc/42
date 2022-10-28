/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:06:33 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:21 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SYNOPSIS
// #include <stdlib.h>

// int	atoi(const char *str);

// #include <xlocale.h>

// int	atoi_l(const char *str, locale_t loc);

// DESCRIPTION
// The	atoi(void) function converts the initial portion of the string pointed to
// by str to int representa
// 	-
// 	tion.

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	//check for whitespace
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	// gerer le signe + -
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	// the ATOI part
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	return (result * sign);
}

int	main(void)
{
	printf("ft_atoi give%d\n", ft_atoi("100"));
	printf("atoi give %d\n", atoi("100"));
}
