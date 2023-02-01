/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:31:45 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/31 19:16:58 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_position(int x, int y)
{
	t_data	*var;

	var = get_data();
	var->player_position_x = x;
	var->player_position_y = y;
	// printf("\ncollectable_count= %d\n", var->collectable_count);
	// printf("collectable left = %d \n", var->collectable_left);
	// printf ("direction state numebr is = %d", var->direction);

	
}

void	collectable_left(void)
{
	t_data	*var;
	int		x;
	int		y;
	int		C;

	static bool done; /// valide que la map a bien imprimer une fois
	C = 0;
	y = 0;
	var = get_data();
	while (y < var->width)
	{
		x = 0;
		while (x < var->height)
		{
			if (var->map[x][y] == 'C')
				C++;
			x++;
		}
		y++;
	}
	if (!done)
	{
		var->collectable_count = C;
		var->collectable_left = C;
		done = 1;
	}
	else
		var->collectable_left = C;
}

