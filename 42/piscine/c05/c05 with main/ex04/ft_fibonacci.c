/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:27:22 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/03 10:27:25 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
	return(-1);
	if(index < 2)
	return(index);;

	return(ft_fibonacci(index-2) + ft_fibonacci(index-1));
}
#include <stdio.h>
int main()
{
	printf("%d", ft_fibonacci(19));
}