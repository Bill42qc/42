/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:19:50 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/31 18:06:23 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_init(void)
{
	png_to_texture();
	texture_to_image();
}

void	png_to_texture(void)
{
	t_data	*var;

	var = get_data();
	var->wall = mlx_load_png("./assets/wall.png");
	var->grass = mlx_load_png("./assets/grass.png");
	var->collectable = mlx_load_png("./assets/collectable.png");
	var->collectable_shine = mlx_load_png("./assets/collectable_shine.png");
	var->penguin_idle = mlx_load_png("./assets/penguin_idle.png");
	var->penguin_idle2 = mlx_load_png("./assets/penguin_idle2.png");
	var->penguin_walk_left = mlx_load_png("./assets/penguin_walk_left.png");
	var->penguin_walk_left2 = mlx_load_png("./assets/penguin_walk_left2.png");
	var->penguin_walk_right = mlx_load_png("./assets/penguin_walk_right.png");
	var->penguin_walk_right2 = mlx_load_png("./assets/penguin_walk_right2.png");
	var->sun = mlx_load_png("./assets/sun.png");
	var->exit = mlx_load_png("./assets/exit.png");
}

void	texture_to_image(void)
{
	t_data	*var;

	var = get_data();
	var->wall_img = mlx_texture_to_image(var->mlx, var->wall);
	var->grass_img = mlx_texture_to_image(var->mlx, var->grass);
	var->collectable_img = mlx_texture_to_image(var->mlx, var->collectable);
	var->penguin_idle_img = mlx_texture_to_image(var->mlx, var->penguin_idle);
	var->sun_img = mlx_texture_to_image(var->mlx, var->sun);
	var->exit_img = mlx_texture_to_image(var->mlx, var->exit);
}
