/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** compute the discriminant
*/

#include "my.h"

float compute_discriminant(float *eq)
{
    float dis = pow(eq[1], 2) - (4 * (eq[0] * eq[2]));

    if (dis > 0)
        printf("2 intersection points:\n");
    if (dis == 0) {
        if (eq[0] == 0)
            printf("There is an infinite number of intersection points.\n");
        else
            printf("1 intersection point:\n");
    }
    if (dis < 0) {
        printf("No intersection point.\n");
        return (-1);
    }
    return (dis);
}
