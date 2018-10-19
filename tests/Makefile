##
## EPITECH PROJECT, 2018
## Makefile tests
## File description:
## unit test makefile
##

LIB_DIR	=	../lib/my/

SRC_DIR	=	../src/

SRC	=	$(SRC_DIR)parsing.c 		\
		$(LIB_DIR)my_revstr.c		\
		$(LIB_DIR)my_strlen.c		\
		$(LIB_DIR)my_strdup.c		\
		$(SRC_DIR)my_advanced_strcat.c	\

SRC_UT	=	test_parsing.c	\

OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS	=	-I../include

LIB	=	-L ../lib/my -lmy

LDFLAGS	=	-lcriterion -lgcov --coverage

NAME	=	units-tests

all:	$(OBJ)
	@make -sC ../lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	@rm -f $(OBJ)
	@rm -f $(SRC:.c=.gcno)
	@rm -f $(SRC:.c=.gcda)
	@rm -f $(SRC_UT:.c=.gcno)
	@rm -f $(SRC_UT:.c=.gcda)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
