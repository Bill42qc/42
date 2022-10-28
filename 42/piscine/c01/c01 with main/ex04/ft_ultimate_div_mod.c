/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:07:02 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/20 09:47:06 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int temp1;
	int temp2;
	temp1 = *a / *b; 
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
	printf("%d%d\n",*a ,*b);


}


int main()	
{	
	int o;
	int p;

	o = 4;
	p = 2;

		printf("%d\n",o );
		printf("%d\n",p );

		ft_ultimate_div_mod(&o,&p);
		
}

