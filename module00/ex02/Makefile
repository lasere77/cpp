CC = c++
NAME = a.out
SRCS_DIR = srcs/
SOURCES =	$(SRCS_DIR)tests.cpp	\
			$(SRCS_DIR)Account.cpp	\

OBJ_DIR = .build/
OBJS = $(SOURCES:$(SRCS_DIR)%.cpp=$(OBJ_DIR)%.o)

INCLUDES = -I includes/

DEPS = $(SOURCES:$(SRCS_DIR)%.cpp=$(OBJ_DIR)%.d)

CFLAGS = -MP -MMD -Wall -Werror -Wextra -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(INCLUDES) -o $(NAME)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

gdb: $(NAME)
	gdb -tui $(NAME)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all bonus fclean clean re gdb

-include $(DEPS)