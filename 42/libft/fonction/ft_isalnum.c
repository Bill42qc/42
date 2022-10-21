/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:19:39 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/21 11:08:43 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isalnum nous dit si le int est un alpha numerique ou pas

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c >= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalnum(117));
}
