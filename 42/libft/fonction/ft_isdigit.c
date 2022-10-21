/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:58:39 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 09:49:40 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//isdigit nous dit si cest un nbre ou pas

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isdigit(48));
}
