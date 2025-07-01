#include "vector.h"

t_vec vec_scale(t_vec vec1, double scale)
{
    t_vec resul;

    resul.x = scale * vec1.x;
    resul.y = scale * vec1.y;
    resul.z = scale * vec1.z;

    return (resul);
}