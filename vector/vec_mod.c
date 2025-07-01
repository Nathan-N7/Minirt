#include "vector.h"

double  square_root(double n)
{
    double x;
    int i;

    x = n;
    i = 0;
    while (i < 20)
    {
        x = 0.5 * (x + n / x);
        i++;
    }
    return x;
}

double   vec_mod(t_vec vec)
{
    double sum;

    sum = (vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z);
    return (square_root(sum));
}