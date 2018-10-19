##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)main.c		\
		$(SRC_DIR)errors.c		\
		$(SRC_DIR)infin_add.c		\
		$(SRC_DIR)parsing.c		\
		$(SRC_DIR)addition.c		\
		$(SRC_DIR)substraction.c	\
		$(SRC_DIR)my_advanced_strcat.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -Llib/my -lmy -Iinclude

NAME	=	infin_add

all:	$(OBJ)
	@make -sC ./lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@make -sC ./lib/my clean
	@make -sC ./tests clean
	@rm -f $(OBJ)

fclean:	clean
	@make -sC ./lib/my fclean
	@make -sC ./tests fclean
	@rm -f $(NAME)

tests_run:
	@make -sC ./lib/my
	@make -sC ./tests
	./tests/units-tests

re:	fclean all
