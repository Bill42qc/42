/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:54:46 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/20 18:15:22 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98 && b <= 99)
	{
		ft_putchar(a / 10 +48);
		ft_putchar(a % 10 +48);
		ft_putchar(' ');
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
		if (a != 98)
			write(1, ", ", 2);
		b++;
		if (b == 100)
		{
			a++;
			b = a + 1;
		}			
	}	
}
