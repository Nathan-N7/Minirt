#ifndef RAY_H
#define RAY_H
#include "../vector/vector.h"

typedef struct s_ray
{
    t_vec   origin;
    t_vec   direction;
}   t_ray;

t_ray   ray_creat(t_vec origin, t_vec direction);

#endif