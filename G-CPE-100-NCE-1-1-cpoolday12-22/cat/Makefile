##
## EPITECH PROJECT, 2025
## makefile
## File description:
## makefile
##

NAME	= cat

RM	= rm -f

SRC	= *.c

OBJ	= $(SRC:.c=.o)

TEST_NAME = test_cat

all: $(NAME)

$(NAME):
	make -C ../lib/my
	epiclang $(SRC) -o $(NAME) -I../include -L../lib/my -lmy

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

tests_run: 	clean
	epiclang -I. -o ../$(TEST_NAME) ../tests/test_cat.c ./cat_func.c --coverage -lcriterion
	cd .. && ./test_cat

