/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** help display
*/

#include "my.h"

void help_display(void)
{
    printf("USAGE\n");
    printf("    ./104intersection opt xp yp zp xv yv zv p\n\n");
    printf("DESCRIPTION\n");
    printf("    opt\t\t\tsurface option: 1 for a sphere, 2 for a cylinder, ");
    printf("3 for a cone\n");
    printf("    (xp, yp, zp)\tcoordinates of a point by which the ");
    printf("light ray passes through\n");
    printf("    (xv, yv, zv)\tcoordinates of a vector parallel to the light ray\n");
    printf("    P\t\t\tparameter: radius of the sphere, radius of the cylinder, or ");
    printf("angle formed by the cone and the Z-axis\n");
}
