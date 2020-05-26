/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** compute the intersection point
*/

#include "my.h"

void compute_coordinates_intersec(int *point, int *vector, float sol)
{
    float inter_p[3];

    for (int i = 0; i != 3; i++)
        inter_p[i] = point[i] + sol * vector[i];
    printf("(%.3f, %.3f, %.3f)\n", inter_p[0], inter_p[1], inter_p[2]);
}
