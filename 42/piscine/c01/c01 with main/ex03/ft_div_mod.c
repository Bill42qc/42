
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:07:02 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/20 10:11:33 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div  = a / b; 
	*mod = a % b;
	a = *div;
	b = *mod;
	printf("%d%d\n",a ,b);


}


int main()	
{	
	int o;
	int p;

	o = 4;
	p = 2;

		printf("%d\n",o );
		printf("%d\n",p );
		ft_div_mod(4,2,&o,&p);		
}
