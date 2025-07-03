#include "vector.h"

double  vec_prodesc(t_vec a, t_vec b)
{
    return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}