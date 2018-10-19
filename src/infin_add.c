/*
** EPITECH PROJECT, 2018
** infin add
** File description:
** main funcitons
*/

#include <stdlib.h>
#include "my.h"

void infin_add(char **av)
{
    int ope = 0;
    int ret = 0;
    char *res = my_strdup("");

    ope = which_operation(av[1], av[2]);
    for (; *av[1] != '\0' && (*av[1] == '-' || *av[1] == '+'); av[1]++);
    for (; *av[2] != '\0' && (*av[2] == '-' || *av[2] == '+'); av[2]++);
    if (ope == POS_ADD || ope == NEG_ADD) {
        res = addition(res, my_revstr(av[1]), my_revstr(av[2]), ret);
        if (ope == NEG_ADD)
            res = my_advanced_strcat('-', res);
    }
    else if (ope == LEFT_SUB)
        res = substraction(res, av[1], av[2], ret);
    else
        res = substraction(res, av[2], av[1], ret);
    my_putstr(res);
    my_putchar('\n');
    free(res);
}