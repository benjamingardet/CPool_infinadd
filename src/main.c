/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <unistd.h>
#include "my.h"

int main(int ac, char **av)
{
    if (ac != 3 || input_errors(av) == 84) {
        write(2, "Wrong arguments\n", 16);
        return (84);
    }
    else
        infin_add(av);
    return (0);
}
