#include "vector.h"

t_vec  vec_normalize(t_vec a)
{
    double   length;
    t_vec   norme;

    if (length == 0)
    {
        norme.x = 0;
        norme.y = 0;
        norme.z = 0;
        return (norme);
    }
    length = vec_length(a);
    norme.x = a.x / length;
    norme.y = a.y / length;
    norme.z = a.z / length;
    return (norme);
}