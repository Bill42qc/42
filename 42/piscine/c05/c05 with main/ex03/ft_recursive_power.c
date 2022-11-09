/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:05:04 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/03 10:06:08 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int res;

	res =nb;

	if (power > 1)
	return (nb* ft_recursive_power(nb, (power-1)));

	if (power == 0 )
	return (1);

	if (power < 0)
	return (0);

return (res);
}


#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_power(2,3));
}