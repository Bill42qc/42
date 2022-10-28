/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:18:11 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/21 11:00:14 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str ++;
	}
}


int main ()
{
ft_putstr("ytytyt");
}
