/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:46:16 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/03 18:18:04 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ rative_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		res *= nb;
		power --;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (res);
}
