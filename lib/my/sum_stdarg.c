/*
** EPITECH PROJECT, 2017
** sum_stdarg.c
** File description:
** give the sum of the arguments
*/

#include <stdarg.h>
#include "my.h"

int	sum_stdarg(int i, int nb, ...)
{
	va_list	list;
	int res = 0;

	va_start(list, nb);
	if (i == 0)
		for (int i = 0; i < nb; i++)
			res += va_arg(list, int);
	else if (i == 1)
		for (int i = 0; i < nb; i++) 
			res += my_strlen(va_arg(list, char const *));
	else
		return (84);
	va_end(list);
	return (res);
}
