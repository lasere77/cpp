CC := c++
NAME := a.out
SRCS_DIR := ./
SOURCES := $(SRCS_DIR)megaphone.cpp	\

OBJ_DIR := .build/
OBJS := $(SOURCES:$(SRCS_DIR)%.cpp=$(OBJ_DIR)%.o)

DEPS := $(SOURCES:$(SRCS_DIR)%.cpp=$(OBJ_DIR)%.d)

CFLAGS := -MP -MMD -Wall -Werror -Wextra -std=c++98 -g

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