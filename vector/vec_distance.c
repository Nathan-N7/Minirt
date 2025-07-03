#include "vector.h"

double  vec_distance(t_vec a, t_vec b)
{
    double  resul;
    t_vec   tmp;

    tmp.x = a.x - b.x;
    tmp.x *= tmp.x;
    tmp.y = a.y - b.y;
    tmp.y *= tmp.y;
    tmp.z = a.z - b.z;
    tmp.z *= tmp.z;
    resul = tmp.x + tmp.y + tmp.z;
    return (square_root(resul));    
}