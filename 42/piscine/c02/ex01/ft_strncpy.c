/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:58:11 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/28 18:05:26 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

i = 0;
    
	while (i < n && src[i])
	{	
	dest[i] = src[i];
	i++;
	}
    while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
    
    
    
	return (dest);
}
