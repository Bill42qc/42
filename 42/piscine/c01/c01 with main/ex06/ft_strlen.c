/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:28:35 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/21 20:09:57 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int ft_strlen(char *str)
{
	int x;
	
	while ( *str != '\0')
	{
	x ++;
	str ++;
	}
	return(x);
}

int main () 
{
printf("%d", ft_strlen("yyyyyyvfrghvifrijvbfeiyyy") );
}
