/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** is there an intersection ?
*/

#include "my.h"

int inter_sphere(int *point, int *vector, int p)
{
    float *eq = create_eq_s(point, vector, p);
    float dis = compute_discriminant(eq);
    float *sols;

    if (dis == -1) {
        free(eq);
        return (0);
    }
    else if (dis != 0) {
        sols = compute_two_solutions(eq, dis);
        compute_coordinates_intersec(point, vector, sols[0]);
        compute_coordinates_intersec(point, vector, sols[1]);
    } else {
        sols = compute_one_solution(eq);
        compute_coordinates_intersec(point, vector, sols[0]);
    }
    free(eq);
    free(sols);
    return (0);
}

int inter_cylinder(int *point, int *vector, int p)
{
    float *eq = create_eq_cy(point, vector, p);
    float dis = compute_discriminant(eq);
    float *sols;

    if (dis == -1 || eq[0] == 0) {
        free(eq);
        return (0);
    }
    else if (dis != 0) {
        sols = compute_two_solutions(eq, dis);
        compute_coordinates_intersec(point, vector, sols[0]);
        compute_coordinates_intersec(point, vector, sols[1]);
    } else {
        sols = compute_one_solution(eq);
        compute_coordinates_intersec(point, vector, sols[0]);
    }
    free(eq);
    free(sols);
    return (0);
}

int inter_cone(int *point, int *vector, int p)
{
    float *eq = create_eq_co(point, vector, p);
    float dis = compute_discriminant(eq);
    float *sols;

    if (dis == -1 || eq[0] == 0) {
        free(eq);
        return (0);
    }
    else if (dis != 0) {
        sols = compute_two_solutions(eq, dis);
        compute_coordinates_intersec(point, vector, sols[0]);
        compute_coordinates_intersec(point, vector, sols[1]);
    } else {
        sols = compute_one_solution(eq);
        compute_coordinates_intersec(point, vector, sols[0]);
    }
    free(eq);
    free(sols);
    return (0);
}

void check_surface(char **av)
{
    int surf = atoi(av[1]);
    int *point = create_coord_point(av[2], av[3], av[4]);
    int *vector = create_coord_vector(av[5], av[6], av[7]);
    int p = atoi(av[8]);

    if (surf == 1) {
        printf("Sphere of radius %d\n", p);
        display_point_vector(point, vector);
        inter_sphere(point, vector, p);
    }
    if (surf == 2) {
        printf("Cylinder of radius %d\n", p);
        display_point_vector(point, vector);
        inter_cylinder(point, vector, p);
    }
    if (surf == 3) {
        printf("Cone with a %d degree angle\n", p);
        display_point_vector(point, vector);
        inter_cone(point, vector, p);
    }
    free(point);
    free(vector);
}

int main(int ac, char **av)
{
    if (ac == 2 && strlen(av[1]) == 2)
        if (av[1][0] == '-' && av[1][1] == 'h') {
            help_display();
            return (0);
        }
    if (error_handling(ac, av) == 84)
        return (84);
    check_surface(av);
    return (0);
}
