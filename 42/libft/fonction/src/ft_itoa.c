/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:35:59 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 15:56:37 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	digit_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	int		is_negative;

	is_negative = 0;
	digit = digit_count(n);
	str = ft_calloc(digit + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[digit] = 0;
	str[digit - 1] = '0';
	while (n > 0)
	{
		str[digit] = n % 10 + 48;
		n /= 10;
		digit--;
	}
	return (str);
}

int	main(void)
{
	char	*str;

	str = ft_itoa(-127773);
	printf("%s", str);
	free(str);
}
