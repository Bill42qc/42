/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:49:49 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:21 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlen renvoi un int = a la longueur du str

#include "../libft.h"
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*

int	main(void)
{
	printf("%d", ft_strlen("patate"));
}
*/
