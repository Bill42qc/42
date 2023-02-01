# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_Unix.mk                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alpicard <alpicard@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 21:36:38 by W2Wizard          #+#    #+#              #
#    Updated: 2022/12/10 23:48:53 by alpicard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#//= Colors =//#
BOLD	:= \033[1m
BLACK	:= \033[30;1m
RED		:= \033[31;1m
GREEN	:= \033[32;1m
YELLOW	:= \033[33;1m
BLUE	:= \033[34;1m
MAGENTA	:= \033[35;1m
CYAN	:= \033[36;1m
WHITE	:= \033[37;1m
RESET	:= \033[0m

#//= Make Rules =//#
$(NAME): $(OBJS)
	@ar rc $@ $^
#	@echo "$(GREEN)$(BOLD)Done$(RESET)"

%.o: %.c $(HDRS)
	@echo "$(GREEN)$(BOLD)Compiling: $(BLUE)$(notdir $<)$(RESET)"
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

# Convert shaders to .c files
$(SRC_DIR)/mlx_%_shader.c: $(SHADER_DIR)/default.%
	@echo "$(GREEN)$(BOLD)Shader to C: $< -> $@$(RESET)"
	@bash tools/compile_shader.sh $< > $@

clean:
	@rm -f $(OBJS) $(SHDR)
#	@echo "$(RED)Cleaning$(RESET)"

fclean: clean
	@rm -f $(NAME)
