/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** create equations for the different surfaces
*/

#include "my.h"

float *create_eq_s(int *point, int *vector, int p)
{
    float *eq = malloc(sizeof(float) * 3);

    for (int i = 0; i != 3; i++) {
        eq[0] += (pow(vector[i], 2));
        eq[1] += (point[i] * vector[i]);
        eq[2] += (pow(point[i], 2));
    }
    eq[1] = eq[1] * 2;
    eq[2] = eq[2] - pow(p, 2);
    return (eq);
}

float *create_eq_cy(int *point, int *vector, int p)
{
    float *eq = malloc(sizeof(float) * 3);

    for (int i = 0; i != 2; i++) {
        eq[0] += (pow(vector[i], 2));
        eq[1] += (point[i] * vector[i]);
        eq[2] += (pow(point[i], 2));
    }
    eq[1] = eq[1] * 2;
    eq[2] = eq[2] - pow(p, 2);
    return (eq);
}

float *create_eq_co(int *point, int *vector, int p)
{
    float *eq = malloc(sizeof(int) * 3);
    float angle = (p * M_PI) / 180;
    float r = pow(tan(angle), 2);

    eq[0] = pow(vector[0], 2) + pow(vector[1], 2);
    eq[0] = eq[0] - (pow(vector[2], 2) * r);
    eq[1] = (2 * vector[0] * point[0]) + (2 * vector[1] * point[1]);
    eq[1] = eq[1] - ((2 * vector[2] * point[2]) * r);
    eq[2] = pow(point[0], 2) + pow(point[1], 2);
    eq[2] = eq[2] - (pow(point[2], 2) * r);
    return (eq);
}
