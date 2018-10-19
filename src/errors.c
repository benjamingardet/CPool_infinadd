/*
** EPITECH PROJECT, 2018
** infin add
** File description:
** error handling
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void my_free_add(char *nb1, char *nb2)
{
   if (nb1 != NULL && my_strcmp(nb1, "0") == 0)
        free(nb1);
    if (nb2 != NULL && my_strcmp(nb2, "0") == 0)
        free(nb2);
}

int is_numeric(char *nb)
{
    int i = 0;

    for (i = 0; nb[i] != '\0' && (nb[i] == '-' || nb[i] == '+'); i++);
    for (i; nb[i] != '\0'; i++) {
        if (nb[i] < '0' || nb[i] > '9')
            return (84);
    }
    return (0);
}

int input_errors(char **av)
{
    if (av[1] == NULL || *av[1] == '\0')
        return (84);
    if (av[2] == NULL || *av[2] == '\0')
        return (84);
    if (is_numeric(av[1]) == 84 || is_numeric(av[2]) == 84)
        return (84);
}