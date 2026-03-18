# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolin <mcolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 21:59:30 by mcolin            #+#    #+#              #
#    Updated: 2026/03/18 18:06:48 by mcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
NAME := a.out
SRCS_DIR := srcs
SOURCES :=	$(SRCS_DIR)/main.cpp		\
			$(SRCS_DIR)/Zombie.cpp		\
			$(SRCS_DIR)/ZombieHorde.cpp	\

OBJ_DIR := .build
OBJS := $(SOURCES:$(SRCS_DIR)/%.cpp=$(OBJ_DIR)/%.o)

DEPS := $(SOURCES:$(SRCS_DIR)/%.cpp=$(OBJ_DIR)/%.d)

INCLUDES = -I includes/

CFLAGS := -MP -MMD -Wall -Werror -Wextra -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(INCLUDES) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

gdb: $(NAME)
	gdb -tui $(NAME)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(OBJ_DIR)/

re: fclean all

.PHONY: all fclean clean re gdb

-include $(DEPS)