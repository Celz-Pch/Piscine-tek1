##
## EPITECH PROJECT, 2025
## makefile for printf
## File description:
## makefile for printf project 2025 epitech
##

NAME	= my_printf_t

RM	= rm -f

OBJ	= $(SRC:.c=.o)

TEST_NAME = unit_tests

all: $(NAME)

$(NAME):
	make -C ./lib/my

clean:
	make clean -C ./lib/my
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

unit_tests:	clean
	clang -I./include -o $(TEST_NAME) ./tests/unit_test.c -L. -lmy -lgcov --coverage -lcriterion

tests_run:	unit_tests
	./$(TEST_NAME)
	gcovr --gcov-executable "llvm-cov-20 gcov"