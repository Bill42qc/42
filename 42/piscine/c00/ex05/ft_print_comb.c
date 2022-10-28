/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:40:10 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/20 19:37:09 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

		a = 0;
		b = 1;
		c = 2;
	while (a <= 7 && b <= 8 && c <= 9)
	{
		{
			ft_putchar(a + 48);
			ft_putchar(b + 48);
			ft_putchar(c + 48);
			if (a != 7)
				write(1, ", ", 2);
			c++;
			while (c == 10 && c > b)
			{
				c = b++ + 2 ;
				while (b == 9 && b > a)
				b = a++ + 1;
			}
		}
	}
	ft_putchar('\n');
}




int main()
{
ft_print_comb();
}

