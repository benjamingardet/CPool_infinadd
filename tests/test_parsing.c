/*
** EPITECH PROJECT, 2018
** infin add
** File description:
** test parsing functions
*/

#include <criterion/criterion.h>
#include "my.h"

Test(test_wich_operation, test_which_operation)
{
    cr_assert_eq(which_operation(strdup("1"), strdup("+1")), 0);
    cr_assert_eq(which_operation(strdup("-1"), strdup("-1")), 1);
    cr_assert_eq(which_operation(strdup("-1"), strdup("1")), 2);
    cr_assert_eq(which_operation(strdup("+1"), strdup("-1")), 3);
}

Test(test_my_revstr, test_my_revstr)
{
    cr_assert_str_eq(my_revstr(strdup("mashallah")), "hallahsam");
    cr_assert_eq(my_revstr(NULL), NULL);
}

Test(test_my_advanced_strcat, my_advanced_strcat)
{
    cr_assert_str_eq(my_advanced_strcat('c', strdup("oucou")), "coucou");
}

Test(test_who_is_smaller, who_is_smaller)
{
    cr_assert_eq(who_is_smaller(strdup("1"), strdup("1")), 0);
    cr_assert_eq(who_is_smaller(strdup("1"), strdup("10")), 1);
    cr_assert_eq(who_is_smaller(strdup("10"), strdup("1")), 2);
    cr_assert_eq(who_is_smaller(strdup("1"), strdup("2")), 1);
    cr_assert_eq(who_is_smaller(strdup("2"), strdup("1")), 2);
}