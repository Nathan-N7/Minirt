#include "ray.h"


/*function for calculate the ray = P(t) = A + t * B*/
t_vec   rat_get_pos(t_ray ray, double t)
{
    t_vec   scaled;
    t_vec   point;

    scaled = vec_scale(ray.direction, t); /*t * B*/
    point = add_vec(ray.origin, scaled); /*A + (t * B)*/

    return (point); /*P(t)*/
}