##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

all:	$(NAME)

$(NAME):
	make -C lib/my
	cp lib/my/libmy.a .

clean:
	rm -f libmy.a
	make -C lib/my clean

fclean:	clean
	make -C lib/my fclean

re:	fclean all

.PHONY:
	all clean fclean re
