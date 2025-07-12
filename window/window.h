#ifndef WINDOW_H
# define WINDOW_H

# include "minilibx-linux/mlx.h"
# include <fcntl.h>
# include <stdlib.h>

# define ESC 65307

typedef struct s_window
{
    void    *win;
    void    *ptr;
    void    *img;
    char    *addr;  //memory adress for pixel the image
    int     bpp;    //bits per pixel
    int     line_len;   //number bits for line
    int     endian; //order this bits
}   t_window;

typedef struct s_rgb
{
    int x;
    int y;
    double  r;
    double  g;
    double  b;
    int ir;
    int ig;
    int ib;
    int color;
}   t_rgb;


void    creat_window(t_window *mlx, int width, int heigth);
void    draw_gradient(t_window *mlx, int width, int heigth);

#endif