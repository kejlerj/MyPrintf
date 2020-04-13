##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_compute_factorial_rec.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr_base.c	\
		my_getnbr.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_putnbr_base.c	\
		my_put_nbr.c	\
		my_put_unbr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_print_all.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_params_to_list.c	\
		my_list_size.c	\
		my_rev_list.c	\
		my_find_node.c	\
		my_delete_nodes.c	\
		my_apply_on_nodes.c	\
		my_apply_on_matching_nodes.c	\
		my_concat_list.c	\
		my_show_word_array.c	\
		sum_stdarg.c	\
		disp_stdarg.c	\
		flags_printf.c	\
		my_printf.c

NAME	=	libmy.a

all:	$(NAME)

$(NAME):clean
	gcc -c $(SRC) -I../../include/
	ar rc $(NAME) *.o
	cp libmy.a ..
	mkdir ../../include
	cp -f my.h ../../include
	cp -f mylist.h ../../include
	cp -f my_printf.h ../../include

clean:
	rm -f *.o

fclean:	clean
	rm -f libmy.a
	rm -rf ../../include

re:	fclean all

.PHONY:
	all clean fclean re
