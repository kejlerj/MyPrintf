/*
** EPITECH PROJECT, 2017
** sum_stdarg.c
** File description:
** give the sum of the arguments
*/

#include <stdarg.h>
#include "my.h"

void	print(char c, va_list list)
{
	if (c == 'c')
		my_putchar(va_arg(list, int));	
	else if (c == 's')
		my_putstr(va_arg(list, char *));
	else if (c == 'i')
		my_put_nbr(va_arg(list, int));
	my_putchar('\n');
}

int	disp_stdarg(char *s, ...)
{
	va_list	list;
	int res = 0;

	va_start(list, s);
	for (int i = 0; s[i]; i++)
		print(s[i], list);
	va_end(list);
	return (res);
}
