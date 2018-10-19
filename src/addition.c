/*
** EPITECH PROJECT, 2018
** infin add
** File description:
** addition
*/

#include "my.h"

void do_add(char *nb1, char *nb2, int *unit_add, int *ret)
{
    *unit_add = *nb1 + *nb2 - 2 * '0' + *ret;
    *ret = (*unit_add > 9) ? *unit_add / 10 : 0;
    *unit_add %= (*unit_add > 9) ? 10 : *unit_add + 1;
}

char *addition(char *res, char *nb1, char *nb2, int ret)
{
    int unit_add = 0;

    if (*nb1 == '\0' && *nb2 == '\0' && ret == 0);
    else if (*nb1 == '\0' && *nb2 == '\0' && ret != 0)
        res = my_advanced_strcat(ret + '0', res);
    else {
        if (*nb1 == '\0')
            nb1 = my_strdup("0");
        else if (*nb2 == '\0')
            nb2 = my_strdup("0");
        do_add(nb1, nb2, &unit_add, &ret);
        res = my_advanced_strcat(unit_add + '0', res);
        res = addition(res, nb1 + 1, nb2 + 1, ret);
    }
    my_free_add(nb1, nb2);
    return (res);
}