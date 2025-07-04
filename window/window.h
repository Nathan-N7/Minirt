#ifndef WINDOW_H
# define WINDOW_H

# include "minilibx-linux/mlx.h"
# include <fcntl.h>
# include <stdlib.h>

# define ESC 65307

# define WIDTH 1920
# define HEIGTH 1080

typedef struct s_window
{
    void    *win;
    void    *ptr;
}   t_window;

void    creat_window(t_window *mlx);

#endif