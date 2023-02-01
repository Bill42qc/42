# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 11:31:23 by bmartin           #+#    #+#              #
#    Updated: 2023/01/31 17:33:03 by bmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
CC		= gcc
CFLAGS	= -Wextra -Wall -Werror -Wunreachable-code -Ofast
LIBMLX	= MLX42
LIBFT	= libft


HEADERS	= -I ./include -I $(LIBMLX)/include
LIBS	= lib/libmlx42.a lib/libglfw3.a libft/libft.a
SRCS	=	src/main.c \
			src/map_load.c \
			src/map_valid.c \
			src/map_utils.c \
			src/errors.c \
			src/img_init.c \
			src/render.c \
			src/player_move.c \
			src/utils.c  \
			src/animation.c

			
OBJDIR	=	bin/
SRCDIR	=	src/
OBJS	=	$(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))

all: libs_make $(NAME)
	./so_long maps/map_42.ber
	
libs_make:
	@$(MAKE) -C $(LIBMLX)

	@$(MAKE) -C $(LIBFT)


$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c $(INC) | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@ $(HEADERS)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME) -framework Cocoa -framework OpenGL -framework IOKit

	@echo "$(G) ║ ALL DONE!! 🥳 ║$(RT)"


clean:
	@echo "\n$(R)Cleaning...$(RT)"
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBMLX) clean
	@echo "$(G)MLX42 Cleaned$(RT)"
	@$(MAKE) -C $(LIBFT) clean
	@echo "$(G)Libft Cleaned$(RT)\n"


fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBMLX) fclean
	@echo "$(G)MLX42 Fluckin Cleaned$(RT)"
	@$(MAKE) -C $(LIBFT) fclean
	@echo "$(G)Libft Cleaned$(RT)"

	

re: clean all


