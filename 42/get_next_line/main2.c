/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:31:10 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/17 18:22:34 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	i;

	i = 1;
	fd = open("text.txt", O_RDONLY);
	while (i > 0)
	{
		printf("%s", get_next_line(fd));
		i--;
	}
}
