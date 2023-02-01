/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:31:30 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/31 19:29:41 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_data	*get_data(void)

{
	static t_data *var = NULL;

	if (!var)
	{
		var = ft_calloc(1, sizeof(t_data));
		var->map = ft_calloc(1, sizeof(char **));
		var->tmp_map = ft_calloc(1, sizeof(char **));
	}
	return (var);
}

int32_t	main(int argc, char *argv[])
{
	t_data	*var;
	static bool render_done;

	var = get_data();
	map_load(argc, argv);
	map_valid();
	var->mlx = mlx_init(var->width_pixel, var->height_pixel, "so_long", false);
	if (!var->mlx)
		exit(EXIT_FAILURE);
	img_init();
	if(!render_done)
	render();
	render_done = true;
	collectable_left();
	var->move_counter = 0;
	mlx_key_hook(var->mlx, &my_key_hook, NULL);
	mlx_loop(var->mlx);
	mlx_terminate(var->mlx);
	return (EXIT_SUCCESS);
}
