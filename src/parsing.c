/*
** EPITECH PROJECT, 2018
** infin add
** File description:
** parsing
*/

#include <stdlib.h>
#include "my.h"

char *skip_zeros(char *res)
{
    int i = (res[0] == '-') ? 1 : 0;
    char *tmp = NULL;

    while (res[i] != '\0' && res[i] == '0')
        i += 1;
    tmp = my_strdup(res + i);
    if (res[0] == '-')
        tmp = my_advanced_strcat('-', tmp);
    free(res);
    return (tmp);    
}

int who_is_smaller(char *nb1, char *nb2)
{
    int i = 0;

    if (my_strlen(nb1) < my_strlen(nb2))
        return (POS);
    else if (my_strlen(nb1)  > my_strlen(nb2))
        return (NEG);
    else {
        while (nb1[i] != '\0' && nb2[i] != '\0' && nb1[i] == nb2[i])
            i++;
        if (nb1[i] < nb2[i])
            return (POS);
        else if (nb1[i] > nb2[i])
            return (NEG);
        else
            return (ZERO);
    }
}

int which_sub(int sign1, int sign2)
{
    if (sign1 < sign2)
        return (LEFT_SUB);
    else
        return (RIGHT_SUB);
}

int which_operation(char *nb1, char *nb2)
{
    int sign1 = 1;
    int sign2 = 1;

    for (int i = 0; nb1[i] != '\0' && (nb1[i] == '-' || nb1[i] == '+'); i++)
        sign1 *= (nb1[i] == '-') ? -1 : 1;
    for (int i = 0; nb2[i] != '\0' && (nb2[i] == '-' || nb2[i] == '+'); i++)
        sign2 *= (nb2[i] == '-') ? -1 : 1;
    if (sign1 + sign2 > 0)
        return (POS_ADD);
    else if (sign1 + sign2 < 0)
        return (NEG_ADD);
    else
        return (which_sub(sign1, sign2));
}