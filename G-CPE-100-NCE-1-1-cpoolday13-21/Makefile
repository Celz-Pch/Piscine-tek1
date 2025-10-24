##
## EPITECH PROJECT, 2025
## make
## File description:
## file
##

SRC     =       $(shell find . -type f -name '*.c')

OBJ     =       $(SRC:.c=.o)

NAMELIB         =       libbtree.a

NAMEMY          =       btree.h

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
