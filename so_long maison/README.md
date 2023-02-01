</br>
<div align="center">
  <img src="https://user-images.githubusercontent.com/63303990/150698103-7e908ff3-abf8-4b0f-ad54-07a76b6c45e2.png" alt="42MLX_Logo">
</div>

# Getting Started


### 1. Download MLX42 and genereate libmlx42.a
```bash 
git clone https://github.com/codam-coding-college/MLX42.git
```
```bash 
cd MLX42
```
```bash 
make
```
this (make) generates a libmlx42.a file

### 2. Install GLFW and generate libglfw3.a
Through brew:
```bash
brew install glfw
```
(The GLFW folder will be in your brew repo("/.brew/Cellar/GLFW"))

#### Pre-compiled libraries (GLFW)

2.1 Move the GLFW library folder (GLFW/include/GLFW) in MLX42's library directory (MLX42/include).
	
2.2 Download the binaries directly [here](https://www.glfw.org/download.html).

2.3 Move the `GLFW/lib` foler you just downloaded and unzipped, in a lib directory placed at the root of your project

	NOTE: For the GLFW/lib choose the appropriate .a & .dylib folder depending on your architecture. ->(X86_64)

	NOTE: You no longer need the Directory GLFW

### 3. Basic Main
```c

#include "../MLX42/include/MLX42/MLX42.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <memory.h>
#define WIDTH 256
#define HEIGHT 256

mlx_image_t	*g_img;

void	hook(void *param)
{
	mlx_t	*mlx;

	mlx = param;
	if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
		mlx_close_window(mlx);
	if (mlx_is_key_down(mlx, MLX_KEY_UP))
		g_img->instances[0].y -= 5;
	if (mlx_is_key_down(mlx, MLX_KEY_DOWN))
		g_img->instances[0].y += 5;
	if (mlx_is_key_down(mlx, MLX_KEY_LEFT))
		g_img->instances[0].x -= 5;
	if (mlx_is_key_down(mlx, MLX_KEY_RIGHT))
		g_img->instances[0].x += 5;
}

int32_t	main(void)
{
	mlx_t	*mlx;

	mlx = mlx_init(WIDTH, HEIGHT, "MLX42", true);
	if (!mlx)
		exit(EXIT_FAILURE);
	g_img = mlx_new_image(mlx, 128, 128);
	memset(g_img->pixels, 255, g_img->width * g_img->height * sizeof(int));
	mlx_image_to_window(mlx, g_img, 0, 0);
	mlx_loop_hook(mlx, &hook, mlx);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}

```

### 4. Compile Program

You can now simply compile the program with:
```bash
gcc main.c libmlx42.a libglfw3.a -o so_long -framework Cocoa -framework OpenGL -framework IOKit
```
or run my Makefile 

### 5. Run
```bash
./so_long
```
`NOTE: at this point you can only move a white square in a dark window using arrow wasd`

`NOTE: type make re to restart a window`
