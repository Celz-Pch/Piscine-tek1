##
## EPITECH PROJECT, 2025
## makefile
## File description:
## makefile
##

SRC     =       $(shell find . -type f -name '*.c')

OBJ     =       $(SRC:.c=.o)

NAMELIB         =       libmy.a

NAMEMY          =       my.h

all: $(NAMELIB)

$(NAMELIB): $(OBJ)
	clang -c $(OBJ)
	ar rc $(NAMELIB) $(OBJ)
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
