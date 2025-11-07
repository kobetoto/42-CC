# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 16:47:12 by thodavid          #+#    #+#              #
#    Updated: 2025/04/19 13:38:33 by thodavid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
## ARGUMENTS / VARIABLES

NAME		= so_long
CC		= cc
CFLAGS		= -Wall -Werror -Wextra
MLX_DIR		= mlx_linux/mlx
MLX_FLAGS	= -I$(MLX_DIR)
MLX_LIBS	= -L$(MLX_DIR) -lmlx_Linux -lXext -lX11 -lm -lz

################################################################################
## SOURCES

SRCS		= 	./src/main.c\
				./utilities/libft.c\
				./utilities/utils1.c\
				./utilities/utils2.c\
				./src/game_init.c\
				./src/gameplay.c\
				./mapping/floodfill.c\
				./mapping/mapping.c\
				./mapping/bug.c\
				./mapping/mapping_content.c\
				./get_next_line/get_next_line.c\
				./get_next_line/get_next_line_utils.c\

OBJS		= $(SRCS:.c=.o)

################################################################################
## REGLES

all: $(NAME)

$(NAME): $(OBJS)
	@${MAKE} -C ./ft_printf
	$(CC) $(CFLAGS) $(OBJS) ./ft_printf/libftprintf.a $(MLX_LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(MLX_FLAGS) -c $< -o $@

clean:
	rm -f *.o src/*.o get_next_line/*.o mapping/*.o utilities/*.o
	@${MAKE} -C ./ft_printf clean

fclean: clean
	rm -f $(NAME)
	@${MAKE} -C ./ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
