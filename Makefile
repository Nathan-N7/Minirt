NAME = minirt

CC = cc

FLAGS = -g -Wall -Werror -Wextra -Ivector -Iwindow -Iwindow/minilibx-linux

SRCS = \
	main.c \
	vector/add_vec.c \
	vector/vec_distance.c \
	vector/vec_length.c \
	vector/vec_negate.c \
	vector/vec_normalize.c \
	vector/vec_pordvet.c \
	vector/vec_prodesc.c \
	vector/vec_scale.c \
	vector/vec_sub.c \
	window/creat_window.c \
	window/color_img.c

OBJS = $(SRCS:.c=.o)

MLX_DIR = window/minilibx-linux

MLX_LIB = $(MLX_DIR)/libmlx.a

all: $(MLX_LIB) $(NAME)

$(MLX_LIB):
	@$(MAKE) -C $(MLX_DIR)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -o $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(MLX_DIR) clean

fclean: clean
	@rm -f $(NAME)

re: fclean all
