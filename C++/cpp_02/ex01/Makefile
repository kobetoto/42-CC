# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/16 09:11:12 by thodavid          #+#    #+#              #
#    Updated: 2025/11/17 15:48:07 by thodavid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 14:54:22 by thodavid          #+#    #+#              #
#    Updated: 2025/11/04 15:33:10 by thodavid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#####
#Var#
#####
NAME	= a.out
FLAGS	= -Wall -Wextra -Werror -std=c++98
SRCDIR	= src
OBJDIR	= obj
INCLUDES= -I.

#####
#Src#
#####
SRC		= main Fixed
SRCS	= $(addprefix $(SRCDIR)/,$(addsuffix .cpp,$(SRC)))
OBJ		= $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

#######
#Rules#
#######
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "✅ ready ✅"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	c++ $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
