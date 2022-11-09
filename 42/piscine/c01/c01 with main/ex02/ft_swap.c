/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:23:38 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/19 20:02:52 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_swap(int *a, int *b)
{

	int temp;
    temp = *a; 
	*a = *b;
	*b = temp;
}


int main()	
{	
	int o;
	int p;

	o = 2;
	p = 4;

	printf("%d%d\n",o ,p);
	ft_swap(&o,&p);

		printf("%d%d\n",o ,p);

		
}
