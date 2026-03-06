# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolin <mcolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 21:59:30 by mcolin            #+#    #+#              #
#    Updated: 2026/03/04 13:36:05 by mcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
NAME = megaphone
SRCS_DIR = ./
SOURCES = $(SRCS_DIR)megaphone.cpp

OBJ_DIR = .build/
OBJS = $(SOURCES:$(SRCS_DIR)%.cpp=$(OBJ_DIR)%.o)

DEPS = $(SOURCES:$(SRCS_DIR)%.cpp=$(OBJ_DIR)%.d)

CFLAGS = -MP -MMD -Wall -Werror -Wextra -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -c -o $@

gdb: $(NAME)
	gdb -tui $(NAME)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all bonus fclean clean re gdb

-include $(DEPS)