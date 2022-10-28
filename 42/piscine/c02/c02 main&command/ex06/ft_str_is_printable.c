/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:02:39 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/23 12:48:18 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_printable(char *str)
{
	unsigned i;
	i= 0;

	while (str[i])

	{
		if (str[i] > 33 && str[i] < 126)
			return (0);

		i++;
	}
		return (1);
}

int main()
{
	printf("%d",ft_str_is_printable("pat\vate"));
}
