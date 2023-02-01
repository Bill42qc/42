/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:31:36 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/31 19:02:15 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../MLX42/include/GLFW/glfw3.h"
# include "../MLX42/include/MLX42/MLX42.h"
# include "../libft/gnl/get_next_line.h"
# include "../libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define DEFAULT_MAP "../maps/1.ber"
# define IMG_PIXEL_SIZE 64

//message erreur
# define E_CHAR_INVALID "Error \n Found Invalid Character\n"
# define E_CHAR_MISSING "Error \n Mandatory Character Count Wrong\n"
# define E_MAP_TOO_WIDTH "Error \n Map Too Wide (Max 40)\n"
# define E_MAP_TOO_HEIGTH "Error \n Map Too High (max 21)\n"
# define E_MAP_LINE_DIFF "Error \n Lines Are Not Egal Length On Map\n"
# define E_MAP_BORDER "Error \n Map Border Missing\n"

//function

void				map_load(int argc, char *argv[]);
void				ber_to_string(int argc, char *argv[]);
void				get_map_height(int argc, char *argv[]);
void				get_map_width(void);
void				string_to_2d_map(void);
void				map_valid(void);
void				map_valid_length(void);
void				map_valid_char(void);
void				map_valid_char_count(void);
void				map_valid_line_length(void);
void				map_valid_border(void);
void				print_error_exit(void);
void				img_init(void);
void				png_to_texture(void);
void				texture_to_image(void);
void				render(void);
void				render_moving_asset(int x, int y);
void				player_position(int x, int y);
void				render_exit(int x, int y);
void				my_key_hook(mlx_key_data_t keydata, void *param);
void				collectable_left(void);
void				 animation_choose (void);
void				animation_up_down(void);
void 				animation_left (void);
void 				animation_right (void);



typedef struct s_data
{
	mlx_t			*mlx;
	
	int width;          //number of character for map width
	int height;         //number of character for map height
	char *all_char_map; //string  containing all map character
	int width_pixel;    // map width in pixel relative to IMG_PIXEL_SIZE
	int				height_pixel;// map heigth in pixel relative to IMG_PIXEL_SIZE
	char **map;                 // array of array representing the map
	char **tmp_map;             // copy of **map that can be modify for test
	int player_position_x;      // the player position [x]
	int player_position_y;      // the player position [y]
	int collectable_count; //nbr of collectable at map load
	int collectable_left;      //nbr of collectable at map load
	int move_counter;           // count of the number of move  the player made
	int direction;     ///// 0 is up or down // 1 is left and 2 is right/

	mlx_texture_t	*wall;
	mlx_texture_t	*grass;
	mlx_texture_t	*collectable;
	mlx_texture_t	*collectable_shine;
	mlx_texture_t	*penguin_idle;
	mlx_texture_t	*penguin_idle2;
	mlx_texture_t	*penguin_walk_right;
	mlx_texture_t	*penguin_walk_right2;
	mlx_texture_t	*penguin_walk_left;
	mlx_texture_t	*penguin_walk_left2;
	mlx_texture_t	*sun;
	mlx_texture_t	*sun2;
	mlx_texture_t	*exit;

	mlx_image_t		*wall_img;
	mlx_image_t		*grass_img;
	mlx_image_t		*collectable_img;
	mlx_image_t		*collectable_shine_img;
	mlx_image_t		*penguin_idle_img;
	mlx_image_t		*penguin_idle2_img;
	mlx_image_t		*penguin_walk_right_img;
	mlx_image_t		*penguin_walk_right2_img;
	mlx_image_t		*penguin_walk_left_img;
	mlx_image_t		*penguin_walk_left2_img;
	mlx_image_t		*sun_img;
	mlx_image_t		*sun2_img;
	mlx_image_t		*exit_img;

	// void	*floor;
	// void	*collectable;
	// int		collectable_left;
	// int		check_collectable_left;
	// void	*player;
	// void	*exit;
	// int		pos_x;
	// int		pos_y;
	// int		exit_walked;
	// int		move_counter;
	// int		exit_flag;
	// int		flag;
}					t_data;

t_data				*get_data(void);

char				*get_next_line(int fd);
size_t				ft_strlen2(char *str);
char				*ft_strjoin2(char *s1, char *s2);
char				*ft_strchr2(char *s, int c);
char				*ft_substr_overflow(char *s);
void				*ft_calloc2(size_t nitems, size_t size);
char				*ft_new_left_str(char *left_str);
void				*ft_calloc(size_t count, size_t size);
char				**ft_split(char const *s, char c);
size_t				ft_strlen(const char *str);

#endif
