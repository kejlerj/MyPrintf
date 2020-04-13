/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** printf
*/

#include "my_printf.h"

int	options(char c)
{
	char str[] = "discSbpoxXu";
	int i = 0;

	while (str[i]) {
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static void tab(void (*tab_ft[11])(va_list list))
{
	tab_ft[0] = &my_printf_d;
	tab_ft[1] = &my_printf_d;
	tab_ft[2] = &my_printf_s;
	tab_ft[3] = &my_printf_c;
	tab_ft[4] = &my_printf_S;
	tab_ft[5] = &my_printf_b;
	tab_ft[6] = &my_printf_p;
	tab_ft[7] = &my_printf_o;
	tab_ft[8] = &my_printf_x;
	tab_ft[9] = &my_printf_X;
	tab_ft[10] = &my_printf_u;
}

void	check(char c, va_list list)
{
	void (*tab_ft[11])(va_list list);
	int i = 0;

	tab(tab_ft);
	if (c == '%')
		my_putchar('%');
	else if (c == '\0')
		return;
	else if ((i = options(c)) != (-1))
		tab_ft[i](list);
	else {
		my_putchar('%');
		my_putchar(c);
	}
}

void	my_printf(const char *str, ...)
{
	va_list list;

	va_start(list, str);
	for (int i = 0; str[i]; i++) {
		if (str[i] == '%') {
			i++;
			check(str[i], list);
		}
		else
			my_putchar(str[i]);
	}
	va_end(list);
}
