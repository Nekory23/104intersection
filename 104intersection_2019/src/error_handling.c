/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** error handling
*/

#include "my.h"

int error_handling_last_arg(char *surf, char *last_arg)
{
    int i = 0;

    while (last_arg[i] != '\0') {
        if (last_arg[i] >= '0' && last_arg[i] <= '9')
            i++;
        else {
            write(2, ERROR_LASTARG, strlen(ERROR_LASTARG));
            return (84);
        }
    }
    if (atoi(surf) == 3 && atoi(last_arg) > 90) {
        write(2, ERROR_ANGLE, strlen(ERROR_ANGLE));
        return (84);
    }
    return (0);
}

int error_handling_coords(int ac, char **av)
{
    int j = 0;

    for (int i = 2; i != ac - 1; i++) {
        j = 0;
        while (av[i][j] != '\0') {
            if ((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '-')
                j++;
            else {
                write(2, ERROR_NBR, strlen(ERROR_NBR));
                return (84);
            }
        }
    }
    if (atoi(av[5]) == 0 && atoi(av[6]) == 0 && atoi(av[7]) == 0) {
        write(2, ERROR_NULLVECTOR, strlen(ERROR_NULLVECTOR));
        return (84);
    }
    return (0);
}

int error_handling_surface(char *surface)
{
    if (strlen(surface) == 1) {
        if (surface[0] < '1' || surface[0] > '3') {
            write(2, ERROR_SURF, strlen(ERROR_SURF));
            return (84);
        }
    } else {
        write(2, ERROR_SURF, strlen(ERROR_SURF));
        return (84);
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac != 9) {
        write(2, ERROR_ARGNBR, strlen(ERROR_ARGNBR));
        return (84);
    }
    if (error_handling_surface(av[1]) == 84)
        return (84);
    if (error_handling_coords(ac, av) == 84)
        return (84);
    if (error_handling_last_arg(av[1], av[8]) == 84)
        return (84);
    return (0);
}
