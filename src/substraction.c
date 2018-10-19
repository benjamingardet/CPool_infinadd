/*
** EPITECH PROJECT, 2018
** infin add
** File description:
** substraction
*/

#include <unistd.h>
#include "my.h"

void do_sub(char *nb1, char *nb2, int *unit_sub, int *ret)
{
    int tmp = *ret;

    *ret = (*nb1 - '0' < *nb2 - '0') ? 1 : 0;
    *nb1 += (*nb1 - '0' < *nb2 - '0') ? 10 : 0;
    *unit_sub = *nb1 - *nb2 - tmp;
}

char *do_my_sub(char *res, char *nb1, char *nb2, int ret)
{
    int unit_sub = 0;

    if (*nb1 == '\0' && *nb2 == '\0');
    else {
        if (*nb1 == '\0')
            nb1 = my_strdup("0");
        else if (*nb2 == '\0')
            nb2 = my_strdup("0");
        do_sub(nb1, nb2, &unit_sub, &ret);
        res = my_advanced_strcat(unit_sub + '0', res);
        res = do_my_sub(res, nb1 + 1, nb2 + 1, ret);
    }
    my_free_add(nb1, nb2);
    return (res);
}

char *substraction(char *res, char *nb1, char *nb2, int ret)
{
    int cmp = who_is_smaller(nb1, nb2);

    if (cmp == ZERO)
        return (my_advanced_strcat('0', res));
    else if (cmp == POS)
        res = do_my_sub(res, my_revstr(nb2), my_revstr(nb1), ret);
    else {
        res = do_my_sub(res, my_revstr(nb1), my_revstr(nb2), ret);
        res = my_advanced_strcat('-', res);
    }
    return (res);
}