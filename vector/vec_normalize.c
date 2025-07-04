#include "vector.h"

t_vec  vec_normalize(t_vec a)
{
    double   length;
    t_vec   norme;

    length = vec_length(a);
    if (length == 0)
    {
        norme.x = 0;
        norme.y = 0;
        norme.z = 0;
        return (norme);
    }
    norme.x = a.x / length;
    norme.y = a.y / length;
    norme.z = a.z / length;
    return (norme);
}