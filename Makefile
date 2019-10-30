##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## do Makefile
##

NAME    =       my_sokoban

SRC	=	my_putchar.c		\
		my_putstr.c		\
		my_strcmp.c		\
		usage.c			\
		my_strlen.c		\
		mvment.c		\
		searchp.c		\
		fs_open_file.c		\
		main.c

OBJ     =       $(SRC:.c=.o)

all :	$(NAME)

$(NAME) :
		gcc -c $(SRC)
		gcc $(OBJ) -o $(NAME) -lncurses

clean :
		rm -f $(OBJ)

fclean :	clean
		rm -f $(NAME)

re :		fclean all
