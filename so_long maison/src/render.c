/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:42:53 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/31 18:19:59 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render_asset(int x, int y)
{
	t_data	*var;

	var = get_data();

	if (var->map[x][y] == '1')
		mlx_image_to_window(var->mlx, var->wall_img, y * 64, x * 64);
	else if (var->map[x][y] == 'C')
	{
		mlx_image_to_window(var->mlx, var->grass_img, y * 64, x * 64);
		mlx_image_to_window(var->mlx, var->collectable_img, y * 64, x * 64);
	}
	else if (var->map[x][y] == '0')
		mlx_image_to_window(var->mlx, var->grass_img, y * 64, x * 64);
}

void	render_moving_asset(int x, int y)
{
	t_data		*var;

	var = get_data();
	if (var->map[x][y] == 'P')
	{
		mlx_delete_image(var->mlx, var->penguin_idle_img);
		animation_choose();
		mlx_image_to_window(var->mlx, var->grass_img, y * 64, x * 64);
		mlx_image_to_window(var->mlx, var->penguin_idle_img, y * 64, x * 64);
	}
}

void	render_exit(int x, int y)
{
	t_data	*var;

	var = get_data();
	if (var->map[x][y] == 'E')
		mlx_image_to_window(var->mlx, var->exit_img, y * 64, x * 64);
}

void	render(void)
{
	t_data		*var;
	int			x;
	int			y;
	static bool	done;

	y = 0;
	var = get_data();
	while (y < var->width)
	{
		x = 0;
		while (x < var->height)
		{
			if (!done)
				render_asset(x, y);
			if (var->map[x][y] == 'P')
				player_position(x, y);
			render_exit(x, y);
			x++;
		}
		y++;
	}
	done = 1;
	render_moving_asset(var->player_position_x, var->player_position_y);
}
