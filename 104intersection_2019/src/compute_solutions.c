/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** compute the solutions to the quadratic equations
*/

#include "my.h"

float *compute_two_solutions(float *eq, int dis)
{
    float *sols = malloc(sizeof(float) * 2);
    float down = 2 * eq[0];

    sols[0] = (-eq[1] + sqrt(dis)) / down;
    sols[1] = (-eq[1] - sqrt(dis)) / down;
    return (sols);
}

float *compute_one_solution(float *eq)
{
    float *sols = malloc(sizeof(float) * 2);
    float up = eq[1] * -1;
    float down = 2 * eq[0];

    sols[0] = up / down;
    sols[1] = 0;
    return (sols);
}
