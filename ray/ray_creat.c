#include "ray.h"

t_ray   ray_creat(t_vec origin, t_vec direction)
{
    t_ray   r;

    r.origin = origin;
    r.direction = direction;
    return (r);
}