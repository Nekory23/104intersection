/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <math.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float *create_eq_s(int *point, int *vector, int p);
float *create_eq_cy(int *point, int *vector, int p);
float *create_eq_co(int *point, int *vector, int p);

float compute_discriminant(float *eq);
float *compute_two_solutions(float *eq, int dis);
float *compute_one_solution(float *eq);

void compute_coordinates_intersec(int *point, int *vector, float sol);
int *create_coord_point(char *x, char *y, char *z);
int *create_coord_vector(char *x, char *y, char *z);

void display_point_vector(int *point, int *vector);
int error_handling(int ac, char **av);
void help_display(void);

#define ERROR_ARGNBR "this program must take 9 args (see with -h)\n"
#define ERROR_NBR "this program must take only numbers as arguments (see with -h)\n"
#define ERROR_SURF "the surface is not valid (see with -h)\n"
#define ERROR_LASTARG "the angle or radius must be a positive number\n"
#define ERROR_NULLVECTOR "the vector mustn't be null (see with -h)\n"
#define ERROR_ANGLE "the angle must be between 0 and 90 degrees\n"

#endif
