##
## EPITECH PROJECT, 2024
## Makefile lib
## File description:
## Makefile lib
##

SRCLIB		=		$(shell ls *.c)

SRCH		=		my.h

OBJLIB		=		$(SRCLIB:.c =.o)

NAME		= 		makefile

all:
	gcc -c $(SRCLIB)
	ar rc libmy.a *.o

clean :
		rm *.o

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)
