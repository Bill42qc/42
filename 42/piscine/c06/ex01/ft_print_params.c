/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:10:17 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/05 16:25:22 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			k = 0;
			while (argv[i][k])
			{
				write(1, &argv[i][k], 1);
				k++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
