#include "vector.h"

t_vec	vec_sub(t_vec a, t_vec b)
{
    t_vec resul;

    resul.x = (a.x - b.x);
    resul.y = (a.y - b.y);
    resul.z = (a.z - b.z);

    return (resul);
}