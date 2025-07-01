#ifndef VECTOR_H

# define VECTOR_H
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_vec
{
    double x;
    double y;
    double z;
}   t_vec;

t_vec add_vec(t_vec a, t_vec b);
t_vec vec_scale(t_vec vec1, double scale);
double   vec_mod(t_vec vec);

#endif