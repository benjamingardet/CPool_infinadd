/*
** EPITECH PROJECT, 2018
** lib.h
** File description:
** lib.h
*/

#ifndef MY_H_
#define MY_H_

/* STRUCTS & ENUM */

enum operation
{
    POS_ADD = 0,
    NEG_ADD = 1,
    LEFT_SUB = 2,
    RIGHT_SUB = 3,
};

enum compare_sub
{
    ZERO = 0,
    POS = 1,
    NEG = 2,
};

/* PROG FUNCS */

int input_errors(char **);
void infin_add(char **);
int which_operation(char *, char *);
char *addition(char *, char *, char *, int);
char *substraction(char *, char *, char *, int);
void my_free_add(char *, char *);
char *my_advanced_strcat(char, char *);
int who_is_smaller(char *, char *);

/* LIB FUNCS */

char *my_strdup(char *);
void my_putchar(char);
int my_putstr(char *);
int my_put_nbr(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char *);
int my_str_isnum(char *);
int my_str_islower(char *);
int my_str_isupper(char *);
int my_str_isprintable(char *);
int my_putnbr_base(int, char const *);
int my_getnbr_base(char const *, char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
void my_print_params(int, char **);
void my_rev_params(int, char **);
void my_sort_params(int, char **);
int my_strlen(char *);

#endif
