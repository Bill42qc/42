/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:18:52 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/21 16:33:01 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c)
{
write(1, &c, 1);
}


void ft_putnbr(int nb)
{

	if( nb == -2147483648)
		ft_putchar ('-');
		ft_putchar ('2');
		write(1, "2147483648",10);

	if (nb >= 0 && nb <10)
		ft_putchar(nb + 48);

	else if (nb < 0 && nb != -2147483648 )
	{
		ft_putchar ('-');
		ft_putnbr (nb *(-1));
	}
	else 
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

int main()
{
ft_putnbr(-2147483648);
}
