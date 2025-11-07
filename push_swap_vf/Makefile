# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 08:46:22 by thodavid          #+#    #+#              #
#    Updated: 2025/03/26 16:38:25 by thodavid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
## ARGUMENTS / VARIABLES

NAME		= push_swap 

CC		= cc

CFLAGS		= -Wall -Wextra -Werror -g



################################################################################
## SOURCES

SRCS		= push_swap.c \
		  tools/push.c\
		  tools/swap.c\
		  tools/reverse.c\
		  tools/rotate.c\
		  tools/radix.c\
		  tools/parser.c\
		  tools/tools.c\
		  tools/tools_lst.c\
		  tools/index.c\
		  tools/simple_sort.c\

OBJS		= $(SRCS:.c=.o)


################################################################################
## REGLES

all: $(NAME)

$(NAME): $(OBJS)
	@${MAKE} -C ./LIBFT
	$(CC) $(OBJS) ./LIBFT/libft.a -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
	@${MAKE} -C ./LIBFT clean

fclean: clean
	rm -f $(NAME)
	@${MAKE} -C ./LIBFT clean

re: fclean all

.PHONY: all clean fclean re
