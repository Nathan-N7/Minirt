#include "window.h"

static void    put_pixel(t_window *mlx, int x, int y, int color)
{
    char    *dst;

    dst = mlx->addr + (y * mlx->line_len + x * (mlx->bpp / 8));
    *(unsigned int *)dst = color;
}

void    draw_gradient(t_window *mlx, int width, int heigth)
{
    t_rgb ptr;

    ptr.y = 0;
    while (ptr.y < heigth)
    {
        ptr.x = 0;
        while (ptr.x < width)
        {
            ptr.r = (double)ptr.x / (width - 1);
            ptr.g = (double)ptr.y / (heigth - 1);
            ptr.b = 0.0;

            ptr.ir = (int)(255.999 * ptr.r);
            ptr.ig = (int)(255.999 * ptr.g);
            ptr.ib = (int)(255.999 * ptr.b);

            ptr.color = (ptr.ir << 16) | (ptr.ig << 8) | ptr.ib;
            put_pixel(mlx, ptr.x, ptr.y, ptr.color);
            ptr.x++;
        }
        ptr.y++;
    }
}