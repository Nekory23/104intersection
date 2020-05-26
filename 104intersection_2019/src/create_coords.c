/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** create the coordinates for the point and the vector
*/

#include "my.h"

int *create_coord_point(char *x, char *y, char *z)
{
    int *point = malloc(sizeof(int) * 3);

    point[0] = atoi(x);
    point[1] = atoi(y);
    point[2] = atoi(z);
    return (point);
}

int *create_coord_vector(char *x, char *y, char *z)
{
    int *vector = malloc(sizeof(int) * 3);

    vector[0] = atoi(x);
    vector[1] = atoi(y);
    vector[2] = atoi(z);
    return (vector);
}
