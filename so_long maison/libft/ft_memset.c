/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:52:52 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/03 18:18:10 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*ptr = (unsigned char)c;
		i++;
		ptr++;
	}
	return (s);
}
