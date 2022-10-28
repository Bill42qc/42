/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:07:49 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/02 10:07:51 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_iterative_factorial(int nb)
{
	unsigned int res;

	res = 1;
while (nb > 0)
{
	res *= nb;
	nb --;
}

if (nb < 0)
{
return(0);
}
return (res);
}


int main()
{
	printf("%d\n", ft_iterative_factorial(-7));
}
#include <stdio.h>