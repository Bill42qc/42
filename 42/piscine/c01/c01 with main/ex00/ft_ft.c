/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:48:08 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/19 14:56:52 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ft(int *nbr)
	{
		*nbr = 42;
	}	

int main (void)
{
	int ptr;

	ptr = 24;
	ft_ft(&ptr);
	printf("%d\n%p\n", ptr, &ptr);

}
