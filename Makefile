ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

NAME = libft_malloc_$(HOSTTYPE).so

SRC = ft_malloc.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

SRC_DIR = src

OBJ_DIR = obj

all: $(NAME)

$(NAME): $(OBJ)
	gcc -shared -o $(NAME) $(OBJ)

# add -Wall -Wextra -Werror later
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c include/malloc.h $(OBJ_DIR)
	gcc -fPIC -c -I include -o $@ $<

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "Object directory is created! (./obj)"

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc -I include libft_malloc_x86_64_Darwin.so main.c
