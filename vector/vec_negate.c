#include "vector.h"

t_vec   negate(t_vec a)
{
    t_vec   resul;

    resul.x = -a.x;
    resul.y = -a.y;
    resul.z = -a.z;

    return (resul);
}