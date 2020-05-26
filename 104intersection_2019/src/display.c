/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** display
*/

#include "my.h"

void display_point_vector(int *point, int *vector)
{
    printf("Line passing through the point ");
    printf("(%d, %d, %d) ", point[0], point[1], point[2]);
    printf("and parallel to the vector ");
    printf("(%d, %d, %d)\n", vector[0], vector[1], vector[2]);
}
