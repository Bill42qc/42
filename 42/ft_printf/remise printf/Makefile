# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 10:58:03 by bmartin           #+#    #+#              #
#    Updated: 2022/11/10 19:53:08 by bmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printchar.c						\
		ft_printstr.c						\
		ft_printnbr.c						\
		ft_nbrlen.c 						\
		ft_hexa_print_min.c 				\
		ft_hexa_print_max.c 				\
		ft_ptr_to_hexa.c					\
		ft_printf.c 						\
		ft_printu.c							\
		ft_len.c



OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
	$(AR) $@ $^

#on utilise le % comme une * mais qui traite tous les results one by one
#on compile ensuite chaque .o si un .c existe pour celui ci

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@


all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all
