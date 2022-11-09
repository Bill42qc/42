/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:31:04 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/03 09:31:06 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_recursive_factorial(int nb)
{

int res;
res =1;

if (nb > 0)
{
	res *= nb * ft_recursive_factorial(nb-1);
}
if (nb < 0)
{
	return(0);
}
return (res);
}



#include <stdio.h>

int main()
{
printf("%d", ft_recursive_factorial(10));
}