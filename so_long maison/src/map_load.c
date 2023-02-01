/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:42:40 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/26 20:20:58 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_load(int argc, char *argv[])
{
	ber_to_string(argc, argv);
	get_map_width();
	get_map_height(argc, argv);
	string_to_2d_map();
}

void	ber_to_string(int argc, char *argv[])
{
	int		fd;
	int		map_y;
	char	*stash;
	char	*all_char_map;
	t_data	*var;

	map_y = -1;
	stash = "p";
	all_char_map = NULL;
	if (argc != 2)
		printf("number of arguments is wrong");
	fd = open(argv[1], O_RDONLY);
	if (fd >= 0)
	{
		while (stash)
		{
			map_y++;
			stash = get_next_line(fd);
			if (stash != NULL)
				all_char_map = ft_strjoin2(all_char_map, stash);
		}
	}
	var = get_data();
	var->all_char_map = all_char_map;
	var->height = map_y;
	var->height_pixel = (map_y * IMG_PIXEL_SIZE);
	close(fd);
}

void	get_map_width(void)
{
	t_data	*var;
	char	*all_char_map;
	int		map_x;

	map_x = 0;
	var = get_data();
	all_char_map = var->all_char_map;
	while (all_char_map[map_x] != '\n')
		map_x++;
	var->width = map_x;
	var->width_pixel = (map_x * IMG_PIXEL_SIZE);
}

void	get_map_height(int argc, char *argv[])
{
	int		fd;
	int		map_y;
	char	*stash;
	t_data	*var;

	map_y = -1;
	stash = "patate";
	if (argc != 2)
		printf("number of arguments is wrong");
	fd = open(argv[1], O_RDONLY);
	if (fd >= 0)
	{
		while (stash)
		{
			map_y++;
			stash = get_next_line(fd);
		}
	}
	var = get_data();
	var->height = map_y;
	var->height_pixel = (map_y * IMG_PIXEL_SIZE);
	close(fd);
}

void	string_to_2d_map(void)

{
	t_data *var;
	char **map_array;
	int map_array_length;

	var = get_data();
	map_array_length = ft_strlen(var->all_char_map);
	var->all_char_map[map_array_length + 1] = '\0';
	map_array = ft_split(var->all_char_map, '\n');
	var->map = map_array;
	var->tmp_map = map_array;
}
