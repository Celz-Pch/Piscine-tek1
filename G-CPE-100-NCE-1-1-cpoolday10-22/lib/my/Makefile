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
	cp $(NAMELIB) ../$(NAMELIB)
	cp $(NAMEMY) ../../include/$(NAMEMY)
	make clean

clean:
	rm -f $(OBJ)

