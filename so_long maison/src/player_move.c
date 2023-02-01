/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:50:05 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/31 19:33:15 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_down(void)
{
	t_data	*var;

	var = get_data();
	var->direction = 0;
	if (var->map[var->player_position_x + 1][var->player_position_y] == 'E'
		&& var->collectable_left == 0)
	{
		printf("\n YOU WON in %d moves", var->move_counter);
		mlx_terminate(var->mlx);
		exit(0);
	}
	if (var->map[var->player_position_x + 1][var->player_position_y] == 'C')
	{
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x + 1][var->player_position_y] = 'P';
		collectable_left();
	}
	else if (var->map[var->player_position_x + 1][var->player_position_y] != '1'
			&& var->map[var->player_position_x
			+ 1][var->player_position_y] != 'E')
	{
		var->move_counter++;
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x + 1][var->player_position_y] = 'P';
	}
}

void	move_up(void)
{
	t_data	*var;

	var = get_data();
	var->direction = 0;
	if (var->map[var->player_position_x - 1][var->player_position_y] == 'E'
		&& var->collectable_left == 0)
	{
		printf("\n YOU WON in %d moves", var->move_counter);
		mlx_terminate(var->mlx);
		exit(0);
	}
	if (var->map[var->player_position_x - 1][var->player_position_y] == 'C')
	{
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x - 1][var->player_position_y] = 'P';
		collectable_left();
	}
	else if (var->map[var->player_position_x - 1][var->player_position_y] != '1'
			&& var->map[var->player_position_x
			- 1][var->player_position_y] != 'E')
	{
		var->move_counter++;
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x - 1][var->player_position_y] = 'P';
	}
}

void	move_right(void)
{
	t_data	*var;

	var = get_data();
	var->direction = 2;
	if (var->map[var->player_position_x][var->player_position_y + 1] == 'E'
		&& var->collectable_left == 0)
	{
		printf("\n YOU WON in %d moves", var->move_counter);
		mlx_terminate(var->mlx);
		exit(0);
	}
	if (var->map[var->player_position_x][var->player_position_y + 1] == 'C')
	{
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x][var->player_position_y + 1] = 'P';
		collectable_left();
	}
	else if (var->map[var->player_position_x][var->player_position_y + 1] != '1'
			&& var->map[var->player_position_x][var->player_position_y
			+ 1] != 'E')
	{
		var->move_counter++;
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x][var->player_position_y + 1] = 'P';
	}
}

void	move_left(void)
{
	t_data	*var;

	var = get_data();
	var->direction = 1;
	if (var->map[var->player_position_x][var->player_position_y - 1] == 'E'
		&& var->collectable_left == 0)
	{
		printf("\n YOU WON in %d moves", var->move_counter);
		mlx_terminate(var->mlx);
		exit(0);
	}
	if (var->map[var->player_position_x][var->player_position_y - 1] == 'C')
	{
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x][var->player_position_y - 1] = 'P';
		collectable_left();
	}
	else if (var->map[var->player_position_x][var->player_position_y - 1] != '1'
			&& var->map[var->player_position_x][var->player_position_y
			- 1] != 'E')
	{
		var->move_counter++;
		var->map[var->player_position_x][var->player_position_y] = '0';
		var->map[var->player_position_x][var->player_position_y - 1] = 'P';
	}
}

void	my_key_hook(mlx_key_data_t keydata, void *param)
{
	t_data	*var;

	(void)param;
	var = get_data();
	if (keydata.key == MLX_KEY_S && (keydata.action == MLX_REPEAT
			|| keydata.action == MLX_PRESS))
		move_down();
	else if (keydata.key == MLX_KEY_W && (keydata.action == MLX_REPEAT
				|| keydata.action == MLX_PRESS))
		move_up();
	else if (keydata.key == MLX_KEY_D && (keydata.action == MLX_REPEAT
				|| keydata.action == MLX_PRESS))
		move_right();
	else if (keydata.key == MLX_KEY_A && (keydata.action == MLX_REPEAT
				|| keydata.action == MLX_PRESS))
		move_left();
	else if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		exit(0);
	render();
	printf("\n move_counter = %d \n", var->move_counter);
}
