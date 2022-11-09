/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-roux <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:23:39 by gle-roux          #+#    #+#             */
/*   Updated: 2022/09/18 13:19:47 by gle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	first_part(int x)
{
	int	z;

	if (x >= 1)
		ft_putchar('A');
	if (x > 2)
	{
		z = 2;
		while (z++ < x)
			ft_putchar('B');
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	second_part(int x, int y)
{
	int	z;

	if ((x >= 1) && (y >= 1))
	{
		while (y > 2)
		{
			if (y > 1)
				ft_putchar('B');
			if (x == 1)
				ft_putchar('\n');
			else
			{
				z = 2;
				while (z++ < x)
					ft_putchar(' ');
			}
			if (x > 1)
			{
				ft_putchar('B');
				ft_putchar('\n');
			}
		y--;
		}
	}
}

void	last_part(int x, int y)
{
	int	z;

	if ((x >= 1) && (y > 1))
	{
		ft_putchar('C');
		if (x > 2)
		{
			z = 2;
			while (z++ < x)
				ft_putchar('B');
		}
		if (x > 1)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		if (x == 1)
			ft_putchar('\n');
	}	
}

void	rush(int x, int y)
{
	first_part(x);
	second_part(x, y);
	last_part(x, y);
}
