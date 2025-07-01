#include "vector.h"

int main(void)
{
    t_vec a = {5, 4, 3};
    t_vec b = {5, 3, 6};
    t_vec result;
    double  r;

    result = add_vec(a, b);
    printf("add: %f, %f, %f\n", result.x, result.y, result.z);
    result = vec_scale(a, 2.5);
    printf("scale: %f, %f, %f\n", result.x, result.y, result.z);
    r = vec_mod(a);
    printf("Modulo de A: %f\n", r);
    r = vec_mod(b);
    printf("Modulo de B: %f\n", r);

}