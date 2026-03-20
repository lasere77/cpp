# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolin <mcolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 21:59:30 by mcolin            #+#    #+#              #
#    Updated: 2026/03/19 19:18:48 by mcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
NAME := a.out
SRCS_DIR := srcs
SOURCES :=	$(SRCS_DIR)/main.cpp		\
			$(SRCS_DIR)/ClapTrap.cpp	\
			$(SRCS_DIR)/ScavTrap.cpp	\
			$(SRCS_DIR)/FragTrap.cpp	\
			$(SRCS_DIR)/DiamondTrap.cpp	\
			

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

.PHONY: all bonus fclean clean re gdb

-include $(DEPS)